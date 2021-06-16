#include <iostream>
#include<climits>
#include<cstring>
using namespace std;




int largestSub(int a[])
{

    int n=strlen(a);

    int cs=0;        //  pointing to current sum till now
    int ms=INT_MIN;   // storing the maximum sum till now

    for(int i=0;i<n;i++)
    {

        cs=cs+a[i];
        if(cs<0)           // if cs is negative the we make i 0 bcz when we add negative no it decrease the value
            cs=0;

        ms=max(cs,ms);

    }
    return ms;

}

int main()
{
    int a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];

    cout<<largestSub(a,n);
    return 0;
}
