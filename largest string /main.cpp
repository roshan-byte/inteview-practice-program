#include <iostream>
#include<cstring>
using namespace std;
#include<climits>

int largestString(char a[][100],int n)
{

    int max=INT_MIN;
    char p[100];
    for(int i=0;i<n;i++)
    {
        int t=strlen(a[i]);

        if(t>max)
        {

            max=t;
            strcpy(p,a[i]);
        }
    }

    cout<<p<<endl<<endl;
    return max;

}



int main()
{
    char a[100][100];
    int n;
    cin>>n;
    cin.get();
    for(int i=0;i<n;i++)
        cin.getline(a[i],100);
    cout<<largestString(a,n);
    return 0;
}
