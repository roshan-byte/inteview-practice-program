#include <iostream>

using namespace std;
#include<vector>
//#define long long ll
#define N 100000
// sieve has limitation to compute up to 10^6
bool isprime(int n)
{


if(n==1)
    return false;
    for( int i=2;i*i<=n;i++)
    {

        if(n%i==0)
            return false;
    }

    return true;
}

void prime_numbers(vector <int> &t)
{
    vector <int > v(N,true);

    v[0]=false;
    v[1]=false;

    // first remove all the even number as not prime
    // this can be done by making all the even numbers as false
    for(long long i=2;i<N;i+=2)
    {

        v[i]=false;
    }

    for(long long i=3;i<N;i+=2)
    {



            if(v[i])
            {
                t.push_back(i);

                for(long long j=i*i;j<N;j+=i)
                    v[j]=false;

            }

    }



}
int main()
{
    int n;
    cin>>n;
    vector <int> t;
    t.reserve(100000);
    cout<<isprime(n);
    cout<<endl;
    prime_numbers(t);

for(int i=0;i<n;i++)
{
    cout<<t[i]<<" ";
}

    return 0;
}
