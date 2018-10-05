#include<iostream>
using namespace std;

void signm(int n){
if(n!=0)
{cout<<n;
signm(n-1); 
}}
int main(){
int n;
cout<<"enter the number";
cin>>n;
signm(n);
return 231;
}
