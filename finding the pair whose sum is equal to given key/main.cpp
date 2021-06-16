#include <iostream>

using namespace std;

int FindingPair(int a[],int n,int key)
{
    int c=0;
    for(int i=0,j=n-1;i!=j;)
    {
        if((a[i]+a[j])==key)
        {

            cout<<"("<<a[i]<<","<<a[j]<<")"<<endl;
            i++;
            j--;
            c++;
        }
        else if(a[j]>key)
        {
            j--;
        }
else
{
    i++;
}

    }
    return c;

}

//second method
void PairSum(int a[],int n,int key)
{
    int i=0;

    for(int j=1;j<n;j++)
    {
        if(a[i]+a[j]==key)
        {
            cout<<"("<<a[i]<<","<<a[j]<<")"<<endl;
            i++;
        }
    }

}

int main()
{
    int n;
    cin>>n;

    int a[200];

    for(int i=0;i<n;i++)
        cin>>a[i];
int key;
cin>>key;
    cout<<FindingPair(a,n,key);
    return 0;
}
