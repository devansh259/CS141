#include<iostream>
using namespace std;

char toupper(char lowercase,char uppercase)
{uppercase=lowercase-32;
return uppercase;}

char tolower(char uppercase,char lowercase)
{lowercase=uppercase+32;
return lowercase;}



int main(){
char ch,alp,result;
cout<<"enter any alphabet"<<endl;
cin>>ch;
if(ch>='a' &&ch<='z')
{result=toupper(ch,alp);
cout<<"uppercase character is"<<result<<endl;}
else
{result= tolower(ch,alp);
cout<<"lowercase character is"<<result<<endl;}
return 0;}
