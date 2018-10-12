//Write a C++ program to generate nth Fibonacci term using recursion
//library
#include<iostream>
using namespace std;
//function
int fib(int n1, int n2,int n, int i){
if(i<=n){
int n3=n1+n2;
cout<<n1<<endl;
n1=n2;
n2=n3;
i++;
fib(n1,n2,n,i);
}
return 0;
 }
//driver function
int main(){
int n;
cout<<"ENTER A NUMBER ";
cin>>n;
//calling function
cout<<fib(0,1,n,1)<<endl;
return 0;
}

