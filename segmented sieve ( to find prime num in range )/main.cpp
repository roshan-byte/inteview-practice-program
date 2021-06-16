#include <iostream>

using namespace std;
#define N 1000000000

vector <int> pr;
void prime_segment(vector <int> &v)
{

    v[0]=v[1]=false;

    for(int i=2;i*i<N;i++)
    {
        v[i]=false;

    }

    for(int i=3;i*i<N;i++)
    {

        if(v[i])
        {
            pr.push_back(i);

            for(int j=i*i;j*j<N;j+=i)
            v[j]=false;

        }
    }
    v[2]=true;
}


void Find_prime_in_range(vector <int> t,int n,int m)
{
    vector <int> v{true};
    prime_segment(v);

    for(int i=0;i<pr.size();i++)
    {

        int t=pr[i];

        for(int i=m;i<(m-n);i++)
        {
            if(v[i-m])
            {
                t.push_back((i-m));
                for(int j=i*i;j<(n-m);j+=i)
              v[i-m]=false;
             }
    }

}



int main()
{
    int m,n;
    cin>>m>>n;
    int t=n-m;
    vector <int>(t,true);
    return 0;
}
