#include <iostream>

using namespace std;
int searchInMatrix(int a[][100],int m,int n,int key,int &col)
{

    for(int i=0;i<m;i++)
    {

        for(int j=n-1;j>=0;j--)
        {

            if(a[i][j]<key)
            {
                if(j==n-1)
                    break;
                else
                    i++;
            }

           else if(a[i][j]==key)
            {
                col=j;
                return i;
            }

        }
    }
    col=-1;
    return -1;
}
int main()
{
    int a[100][100];

    int m,n,key,col=0;
    cin>>m>>n;
    cout<<"enter the key"<<endl;
    cin>>key;
for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    cin>>a[i][j];

    int row=searchInMatrix(a,m,n,key,col);
    cout<<"row "<<row<<" column "<<col;
    return 0;
}
