#include <iostream>
#include<queue>
using namespace std;
//  naive method to find the gcd of a number
// complexity of this method is O(max(a,b))
int gcd(int a ,int b)
{
    priority_queue <int> p;
    int t=max(a,b);

    for(int i=1;i<=t;i++)
    {

        if(a%i==0 && b%i==0)
        {
            p.push(i);

        }
    }


    return p.top();
}

/* 2nd method to finding the gcd of two numbers is
-> using euclid gcd theorem

-> gcd(a,b )=gcd(a-b,b) */

int gcd2(int a ,int b)
{
    int m=max(a,b);
    int n=(a+b)-m;
    while(m!=n)
    {

        m=m-n; //3
        if(m<n)
        {
            int t=m;
            m=n;
            n=t;
        }
    }
    return m;
}

/* third method is
-> gcd(a,b)=gcd(a%b,b)

 */

 int gcd3(int a,int b)
 {
     int m=max(a,b);
     int n=(a+b)-m;

     while(m!=0)
     {
         m=m%n;
         if(m!=0)
         {

         int t=m;
         m=n;
         n=t;
         }
     }

     return n;
 }

//using recursion

int rec_gcd(int a,int b)
{

    if(b==0)
        return a;

    return rec_gcd(b,a%b);
}

int main()
{
    int a,b;
    cin>>a>>b;

    cout<<"\n gcd of the "<<a<<" and "<<b<<" is "<<gcd(a,b);
    cout<<"\n gcd of the "<<a<<" and "<<b<<" using 2nd method is  "<<gcd2(a,b);

    cout<<"\n gcd of the "<<a<<" and "<<b<<" using 3rd method is  "<<gcd3(a,b);
    cout<<"\n gcd of the "<<a<<" and "<<b<<" using recursion method is  "<<rec_gcd(a,b);
    return 0;
}
