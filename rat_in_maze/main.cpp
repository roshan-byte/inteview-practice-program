#include <iostream>

using namespace std;


void helperFunction(int maze[][20],int row,int col,int **solution,int n)
{
    if(row==n-1 && col==n-1)
    {

        solution[row][col]=1;
cout<<endl;
        for(int i=0;i<n;i++)
        {

            for(int j=0;j<n;j++)
            {
                cout<<solution[i][j]<<" ";
            }
            cout<<endl;
        }


        return;
    }

if(row<0 || col <0 || row>=n || col>=n || maze[row][col]==0 || solution[row][col]==1)
    return;


    solution[row][col]=1;
    helperFunction(maze,row+1,col,solution,n);
    helperFunction(maze,row,col+1,solution,n);
    helperFunction(maze,row-1,col,solution,n);
    helperFunction(maze,row+1,col-1,solution,n);
    solution[row][col]=0;

}

void rat_in_maze(int maze[][20],int n)
{
        int **solution=new int*[n];

    for(int i=0;i<n;i++)
    {
        solution[i]=new int[n];

    }

    for(int i=0;i<n;i++)
    {

        for(int j=0;j<n;j++)
        {

            solution[i][j]=0;
        }
    }

    helperFunction(maze,0,0,solution,n);



}

int main()
{
    int n;
    cin>>n;
 int maze[100][20];


    for(int i=0;i<n;i++)
    {

        for(int j=0;j<n;j++)
            cin>>maze[i][j];
    }


   rat_in_maze(maze,n);

}
