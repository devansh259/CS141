#include<iostream>
using namespace std;
void even(int n)
{
if(n>=0)
{if(n%2==0)
{cout<<n<<endl;
even(n-2);}
else
{n--;
cout<<n<<endl;
even(n-2);}
}}

void odd(int n)
{
if(n>=0)
{if(n%2!=0)
{cout<<n<<endl;
odd(n-2);}
else
{n--;
cout<<n<<endl;
odd(n-2);}
}}
int main(){
int n;
char choice;
cout<<"enter the number"<<endl;
cin>>n;
cout<<"enter even or odd"<<endl;
cin>>choice;
if(choice=='e')
{even(n);}
else if(choice=='o')
{odd(n);}
else
{cout<<"enter choice from e or o"<<endl;
}
return 2412;
}
