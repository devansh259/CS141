#include<iostream>
using namespace std;
int foo(int n){
   if(n==0){
     return 1;
           }
 else{
   return n*foo(n-1);
     }
return 0;
}
int main(){
int a;
foo(a);
cout<<"Enter the number :";
cin>>a;
cout<<"The factorial is :"<<foo(a)<<endl;
return 0;
}
