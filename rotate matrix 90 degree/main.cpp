#include <iostream>

using namespace std;

//second method

void reverse_arr(int a[][100],int n)
{

    for(int i=0;i<n;i++)
    {

    int k=n-1;
    int j=0;

    while(j<k)
    {

        swap(a[i][j],a[i][k]);

        k--;
        j++;
    }
}

}



void Rotate90(int a[][100],int n)
{
    /// first step is that we reversing each row
    reverse_arr(a,n);

    /// then in second step  we are taking transpose of the array
    for(int i=0;i<n;i++)
    {

        for(int j=i;j<n;j++)
        {

   swap(a[i][j],a[j][i]);
        }
    }

}
int main()
{
    int a[100][100];

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        cin>>a[i][j];

Rotate90(a,n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        cout<<a[i][j]<<" ";
    cout<<endl;
    }

    return 0;
}
