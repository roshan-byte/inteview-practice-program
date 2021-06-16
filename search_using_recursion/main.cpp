#include <iostream>

using namespace std;
int search(int a[],int n,int key)
{
    if(n==0)
        return a[0];

    int t=search(a+1,n-1,key);

    if(t==key)
        return n;

    return a[n];

}
int main()
{
    int a[]={1,2,3,7,4,5,6,7,10};
    int n=sizeof(a)/sizeof(int);
    cout<<"index is"<<search(a,n-1,7);
}
