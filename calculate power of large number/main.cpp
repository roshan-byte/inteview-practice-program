#include <iostream>

using namespace std;
#include<climits>
//#define c (1000000000+7)

int modRecursive(int a,int b,int c)
{
    if(b==0)
        return 1;


if(b%2==0)
    return modRecursive((a*a)%c,b/2,c);
else
    return (a%c*modRecursive((a*a)%c,b/2,c))%c;

}


int main()
{
   long long int a;
   long long int b;
   cin>>a>>b;
   //int t=(a+b)%N;
   //int q=(a*b)%N;
   cout<<modRecursive(a,b,5);
//cout<<N;
    return 0;
}
