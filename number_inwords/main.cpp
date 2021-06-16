#include <iostream>

using namespace std;

string arr[]={"zero","one","two","three","four","five","six","seven","eight","nine"};

void inwords(int n)
{

    if(n==0)
        return;

    inwords(n/10);

    int t=n%10;
    cout<<arr[t]<<" ";
}



int main()
{
    int ty;
    do
    {


    int n;
    cin>>n;
    inwords(n);
    cout<<"\n want to continue ";
    cin>>ty;
    }while(ty==1);
}
