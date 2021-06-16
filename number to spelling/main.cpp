#include <iostream>

using namespace std;

string arr[]={"zero","one","two","three","four","five","six","seven","eight","nine"};

void NumToSp(int n)
{
      if(n==0)
        return;

    if(n<0)
    {
        cout<<"negative"<<" ";
        NumToSp(-n);
    }

if(n>0)
{


    NumToSp(n/10);

    cout<<arr[n%10]<<" ";
}
}



// string to integer

int strToNum(char *arr,int n)
{

    if(n==0)
        return 0;
int    t=arr[n-1]-'0';

    int x=strToNum(arr,n-1);

   return x*10+t;
}

int main()
{

    int n;
    cin>>n;

    char *a=new char[n];

    for(int i=0;i<n;i++)
        cin>>a[i];

cout<<strToNum(a,n);



   /* int q;
cin>>q;

while(q--)
{


    int n;
    cin>>n;
cout<<endl;
    NumToSp(n);
    cout<<endl;
} */
    return 0;
}
