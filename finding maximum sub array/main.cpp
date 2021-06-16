#include <iostream>
#include<climits>
using namespace std;

int maxSubArray(int a[],int n)
{
    int ma=INT_MIN;
    int left=-1;
    int right=-1;
    for(int i=0;i<n;i++)
    {

        for(int j=i;j<n;j++)
        {
            int m=0;
            for(int k=i;k<=j;k++)
            {
                m=m+a[k];
            }
            if(m>ma)
                {
                ma=m;
                left=i;
                right=j;
            }
        }
    }

    for(int i=left;i<=right;i++)
        cout<<a[i]<<" ";
 cout<<endl;
    return ma;
}
// second method to find the maximum sum is using cumulative sum array

int maxSubArray_cum(int a[],int n)
{
    int max=INT_MIN;

    int left=-1,right=-1;

    int cum[100]={0};

    cum[0]=0;
    for(int i=0;i<n;i++)
    {

        cum[i+1]=cum[i]+a[i];
    }

    for(int i=1;i<n;i++)
    {

        int j;
        int currentSum=0;

        for(j=i+1;j<=n;j++)
        {

            currentSum=cum[j]-cum[i-1];


        if(currentSum>max)
        {
            max=currentSum;
            left=i-1;
            right=j-1;
        }
    }
    }

    for(int i=left;i<=right;i++)
        cout<<a[i]<<" ";
    cout<<endl;

    return max;
}

int main()
{
    int a[100];
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
        cin>>a[i];

    cout<<"max sum of the sub array "<<maxSubArray_cum(a,n)<<endl;
    return 0;
}
