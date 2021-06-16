#include<iostream>

using namespace std;

void removeDublicates(char a[])
{

int i=0;

int j=i+1;

while(a[j]!='\0')

{

if(a[i]!=a[j])
{
int k=i+1;

int t=j;

while(a[t]!='\0')
{
a[k++]=a[t++];

}

a[k+1]='\0';

i=j;
j++;

}

else
{

j++;

}
}
}

int main()
{

char c[100];

cin>>c;

removeDublicates(c);

cout<<c;

}



