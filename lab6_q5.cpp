#include<iostream>
using namespace std;

int byvalue2(int a,int b)
{int c= a+b;
return c;}

void byreference2(int a,int b,int &sum)
{sum= byvalue2(a,b);
cout<<sum;}

int byvalue3(int a,int b)
{if(a>b)
return a;
else
return b; }

void byreference3(int a,int b,int &sum)
{sum= byvalue3(a,b);
cout<<"maximum="<<sum;}

int byvalue4(int a,int b)
{if(a<b)
return a;
else 
return b; }

void byreference4(int a,int b,int &sum)
{sum= byvalue4(a,b);
cout<<"minimum="<<sum;}

int main(){
int a,b,sum=0,choice;
cout<<"enter the numbers"<<endl;
cin>>a>>b;
cout<<"enter 1 for sum,2 for maximum,3 for minimum"<<endl;
cin>> choice;
if(choice==1)
{byvalue2(a,b);
byreference2(a,b,sum);}
else if(choice==2)
{byvalue3(a,b);
byreference3(a,b,sum);}
else if(choice==3)
{byvalue4(a,b);
byreference4(a,b,sum);}
else
cout<<"please enter correct choice"<<endl; 
return 0;}
