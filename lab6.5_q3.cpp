#include<iostream>
using namespace std;
long double factorial(long double m)
{long double i,sum=0;
for(i=1;i<=m;i++)
{sum=sum+i;}
return sum;}
int main(){
long double i,a,n;
for(i=0;i<100000;i++)
{for(a=0;a<100000;a++)
{for(n=0;n<100000;n++)
{if(a*a==factorial(n))
{cout<<a*a<<endl;}}}}
return 1234;
}
