#include <iostream>
#include<climits>
using namespace std;

int min_coin(int *arr,int N)
{
    if(N==0)
        return 0;
    int x,y,z;
    z=x=y=INT_MAX;

    if(arr[N]!=0)
    return arr[N];

    if(N>=3)
        x=min_coin(arr,N-3);
    if(N>=10)
      y=  min_coin(arr,N-10);

    z=min_coin(arr,N-1);

    arr[N]=min(min(x,y),z)+1;

    return arr[N];

}

int coin_exchange(int *arr,int n,int*c,int t)
{

    if(n==0)
        return 0;
    int ans=INT_MAX;
    if(arr[n]!=0)
        return arr[n];
    for(int i=0;i<t;i++)
    {
        if((n-c[i])>=0)
        {
            int subp=coin_exchange(arr,n-c[i],c,t)+1;
            ans=min(subp,ans);
        }

        arr[n]=ans;
        return arr[n];

    }
}

int main()
{
    int n;
    cin>>n;
    int p[100]={0};
  int c[]={1,3,7};
  int t=sizeof(c)/sizeof(int);
    cout<<coin_exchange(p,n,c,t);
    return 0;
}
