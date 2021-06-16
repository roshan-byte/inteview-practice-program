#include <iostream>

using namespace std;


class complex{
int real;
int img;

public:

    complex()
    {
        real=0;
        img=0;
    }

    complex(int a,int b)
    {
        real=a;
        img=b;
    }


    complex operator+(complex & c)
    {  complex t;
        t.real=t.real+c.real;
        t.img=t.img+c.img;

   return t;
    }

void display()
{
    if(img>0)
    cout<<real<<"+"<<img<<"i"<<endl;

    else
        cout<<real<<"-"<<-img<<"i"<<endl;
}

//conjucate of the complex number

void operator!()
{
    img=-img;
}
void set_real(int r)
{
    real=r;
}

void set_img(int i)
{
    img=i;
}

// overloading of the >> left shift operator



// return the real part of the complex number

int operator[](string s)
{
    if(s=="real")
        return real;

    else if(s=="img")
        return img;
}

};

istream& operator>>(istream &is,complex &c)
{
    int r,i;

    is>>r>>i;

    c.set_real(r);

    c.set_img(i);

    return is;
}

// overloading of the << right shift operator

ostream& operator<<(ostream &os,complex &c)
{
    c.display();
    return os;
}

int main()
{
    complex c1;

    complex c2,c3;
    cin>>c1>>c2>>c3;


    cout<<"\n display of the entered complex numbers \n";
    cout<<c1<<" "<<c2<<endl;

       c1.display();
    c2.display();
    c1+c2+c3;


    !c2;
    cout<<"\n after addition of the complex numbers \n";
    c1.display();
    c2.display();
  cout<<"real part of the complex is "<<c1["real"]<<" imaginary part of the complex number is "<<c1["img"];

    return 0;
}
