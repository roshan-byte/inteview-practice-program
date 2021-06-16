#include <iostream>

using namespace std;

void removeCDublicates(string &s)
{
    if(s.length()<=1)
        return;
int i=0;
int j=i+1;

while(s[j]!='\0')
{

    if(s[i]==s[j])
        j++;
    else
    {
        i++;
        s[i]=s[j++];

    }


}

s[i+1]='\0';
}


int main()
{
    string s;
    cin>>s;

    removeCDublicates(s);
    int i=0;

    while(s[i]!='\0')
    cout<<s[i++];

    return 0;



}





