#include<iostream>
using namespace std;
#include<vector>



int ithBit(int n)
{
	int i=0;

	while(n>0)
	{
		int t=n&1;
		if(t==1)
		{
			return i;
		}

		i++;

		n=n>>1;
	}
}

int find_result_bit(vector<int> A,int p)
{
    int mask=1<<p;
    int j=0;
    int ans=0;
    for(auto i=0;i<A.size();i++)
    {
        if((A[i]&mask) >0)
        {
            ans=ans^A[i];
        }

    }
    return ans;

}


int main()
{
	int rec=0;


vector<int> A;
A.reserve(100005);
int n;
cin>>n;
for(int i=0;i<n;i++)
{
    int no;
    cin>>no;
    A.push_back(no);

}
for(int i=0;i<A.size();i++)
{

    rec=rec^A[i];
}

//cout<<"\n xor result "<<rec;

int p=ithBit(rec);
//cout<<"\n posn of the set bit "<<p;
int a=find_result_bit(A,p);
cout<<endl;



int b=rec^a;

cout<<min(a,b)<<" "<<max(a,b);


}
