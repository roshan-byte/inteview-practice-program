#include<iostream>
#include<cstring>
using namespace std;
#define ll long long
long long  a[1000005],pre[1000005];
int gcd(int a,int b)
{
    return a==0?b:gcd(b%a,a);
}


int main() {

/*	int t;
	cin>>t;


	while(t--)
	{

int no;
cin>>no;

memset(pre,0,sizeof(pre));

pre[0]=1;

int temp=0;
for(int i=0;i<no;i++)
{
	cin>>a[i];

temp+=a[i];

temp=(temp)%no;

temp=(temp+no)%no;

pre[temp]++;

}

ll  ans=0;

for(int i=0;i<no;i++)
{
	ll m=pre[i];


	ans+=(m)*(m-1)/2;

}




cout<<ans<<endl;


	} */


	int a,b;
	cin>>a>>b;


	cout<<gcd(a,b);




	return 0;
}
