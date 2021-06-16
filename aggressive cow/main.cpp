#include <iostream>
#include<algorithm>
using namespace std;

int largest_min_dist(int a[],int s,int c)
{

    int l=0;
    int h=a[s-1]-a[0];
    int min=0;
    while(l<=h)
    {
        int gap=(l+h)/2;
        int left=0;
        int count=1;


        for(int i=1;i<s;i++)
        {

            if((a[i]-a[left])>=gap)
            {
                count++;
                left=i;

            }

            if(count==c)
        {
            min=gap;

            l=gap+1;
            break;
        }

        }

        if(count!=c){

            h=gap-1;
        }
    }
    return min;

}

int main()
{
    int t;
    cin>>t;


    while(t--)
    {
        int stall,cow;

        cin>>stall>>cow;

        int a[100000];

        for(int i=0;i<stall;i++)
            cin>>a[i];

            sort(a,a+stall);

        int t=largest_min_dist(a,stall,cow);
        cout<<t<<endl;

    }
    return 0;
}
