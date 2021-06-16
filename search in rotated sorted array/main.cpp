#include <iostream>

using namespace std;


     int search(int A[], int l, int h, int key)
    {
    //complete the function here


    while(l<=h)
    {
        int mid=(l+h)/2;

        if(A[mid]==key)
        return mid;

        else if(A[l]<=A[mid])
        {
            if(A[l] <=key and key<A[mid])
            {
                h=mid-1;
            }

            else
            {
                l=mid+1;
            }
        }

        //checking for the another part of the array
        else
        {
            if(key>=A[mid] and key<A[h])
            {
                l=mid+1;
            }

            else
            {
                h=mid-1;
            }

        }

    }
    return -1;



    }

int main()
{
    int n;
    cin>>n;
    int a[100000];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int key;
    cin>>key;
    cout<<search(a,0,n-1,key);
    return 0;
}
