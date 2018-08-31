#include<iostream>
using namespace std;
int main(){
char a;
cout<<"enter the character"<<endl;
cin>>a;
if ((a>=65)&&(a<=90)||((a>=97)&&(a<=122)))
{cout<<"character is an alphabet";}
else if ((a>=48)&&(a<=57))
{cout<<"character is a digit";}
else
{ cout<<"character is a special character";}
return 124234;
}
