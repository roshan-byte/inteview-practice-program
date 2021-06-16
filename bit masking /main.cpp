#include <iostream>

using namespace std;
#include<math.h>

// function to check the given number is odd or even
void isOdd(int &n)
{
    /* here we check the last bit of the number
           if it is one then the number will be odd

           -> we do this by and operation with 1

           */


   if(n==0)
   {
       cout<<"\n given number is not a even or odd ";

   }

        else   if(n&1)
           {
               cout<<"given number is odd ";

           }

           else
           {

               cout<<"\n given number is even ";

           }



}


// function to find the ith Bit from the right

int ithBit(int &n,int i)
{
    int mask=(1<<i);

    int ans=(n&mask)>0?1:0;

    return ans;


}

// set the ith bit of a given number

int setBit(int &n,int i)
{
    int mask=(1<<i);

    return n|mask;

}

//clear a ith bit of a number

int clearBit(int &n,int i)
{

    int mask= ~(1<<i);

    return n&mask;



}

//update the ith bit

int updateBit(int &n,int i,int v)
{

    /* step 1 clear that particular bit

       step 2 take or operation of that cleared bit with v left shift with i
       */
       int mask=~(1<<i);
       int cleared_bit=n&mask;

       return cleared_bit|(v<<i);


}

// clear the range of bit  from right


int clearRangeItoj(int &n,int i,int j)
{
    /* step 1: find a and b
       a can be find by  left shit
       b can be find by

    */

    int a = (~0)<<(j+1);

    int b=(1<<i)-1;

    int mask=a|b;

    return n&mask;


}
// clear the range of last Bits
int clearLast(int &n,int i)
{
    int mask=(~0)<<i;

    return n&mask;


}


int main()
{
   int n;
    cin>>n;

    isOdd(n);
cout<<endl;
 /*   int i;
    cout<<"\n enter which bit you want to see \n";
    cin>>i;
cout<<"\n ith Bit of the given number is "<<ithBit(n,i);

cout<<"\n number after setting the ith Bit is "<<setBit(n,i);

cout<<"\n number after clearing the ith Bit is "<<clearBit(n,i);
cout<<"\n enter the value you to which you want to change the bit ";
int val;
cin>>val;
cout<<"\n number after updating the ith Bit is "<<updateBit(n,i,val); */
int a,b;
cout<<"enter the lower and upper bound of the bit you want to clear \n";
cin>>a>>b;

cout<<"\n number after clearing the range of the bit is "<<clearRangeItoj(n,a,b);

cout<<"\n enter how many bits from last you want to clear  ";
int i;
cin>>i;

cout<<"\n number after the clearing the last bit "<<clearLast(n,i);



    return 0;
}
