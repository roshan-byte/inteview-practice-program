#include <iostream>

using namespace std;
#include<vector>
#include<algorithm>

class car
{

public:
    string name;
    int x;
    int y;

    car(string name,int x,int y)
    {
        this->name=name;
        this->x=x;
        this->y=y;

    }

};

bool compare(car c1,car c2)
{

    int d1=c1.x*c1.x+c1.y*c1.y;
    int d2=c2.x*c2.x+c2.y*c2.y;
    if(d1==d2)
        return c2.x<c2.x;

    return d1>d2;
}
int main()
{
    vector<car> c;
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        string nam;
        int a;
        int b;
        cin>>nam>>a>>b;
        car ct(nam,a,b);
       c.push_back(ct);

    }


    sort(c.begin(),c.end(),compare);

for(auto i:c)
{
    cout<<"car "<<i.name<<" "<<i.x<<" "<<i.y<<endl;
}

}
