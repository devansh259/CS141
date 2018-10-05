#include<iostream>
using namespace std;

int power(int n,int p)
{
if(p!=0)
{return n*power(n,p-1);}
else 
{return 1;}
}

int main(){
int num,pow;
cout<<"the number and power"<<endl;
cin>>num>>pow;
cout<<"number raised to the given power="<<power(num,pow)<<endl;
return 121;
}
