#include <iostream>

using namespace std;

int square(int n)
{

    return n*n;
}

int square_root(int n)
{

    int i=0;
    int j=n;

    int ans=-1;

    while(i<=j)
    {

        int mid=(i+j)/2;

        if(square(mid)==n)
        {
            return mid;
        }

        else if(square(mid)>n)
        {
            j=mid-1;

        }
        else{
                ans=mid;
            i=mid+1;
        }
    }

    return ans;
}

int main()
{
    int n;
    cin>>n;
    cout<<"square root is "<<square_root(n);
    return 0;
}
