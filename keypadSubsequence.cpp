#include<iostream>
using namespace std;


char keypad[][100]={"","","abc","def","ghi","jkl"};

void keypadSub(char *input,char *output,int i,int j)
{

if(input[i]=='\0')
{

output[j]='\0';

cout<<output<<endl;

return;

}

int digit=input[i]-'0';

if(digit==1||digit==0)

keypadSub(input,output,i+1,j); //when input contain 1 or 0 then we have to skip this case because our input not mapped with 0 adn 1



for(int k=0;keypad[digit][k]!='\0';k++)  // we have to iterate over the  string mapped with that number like 2-->abc
{

output[j]=keypad[digit][k];  // we store each input array particular to that number in different output arrays.

// now calling on next input to store next output

keypadSub(input,output,i+1,j+1);

}

return;
}

int main()
{

char *input=new char[100];
cin>>input;

char *output=new char[100];



keypadSub(input,output,0,0);
}

