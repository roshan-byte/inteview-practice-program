#include <iostream>
#include<vector>
#include<list>
using namespace std;

template<class Fd,class T>

Fd search(Fd s,Fd e,T key)
{

    while(s!=e)
    {

        if(*s==key)
            return s;

            s++;
    }


    return e;
}


int main()
{
    vector<int> a;

    list<int> b;
    int n;
    cin>>n;

    int key;
    cin>>key;


    cout<<"enter the vector ";

    for(int i=0;i<n;i++)
    {

        int no;
        cin>>no;

        a.push_back(no);
    }
   vector<int>::iterator t=search(a.begin(),a.end(),key);
    cout<<"element in the vector class "<<*t<<endl;
    int key1;
    cin>>key1;

    cout<<"enter the list ";

    for(int i=0;i<n;i++)
    {

        int no;
        cin>>no;

        b.push_back(no);
    }

    auto t1=search(b.begin(),b.end(),key1);
    cout<<"element in the list class is "<<*t1<<endl;
    return 0;
}
