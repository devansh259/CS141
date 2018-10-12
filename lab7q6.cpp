#include<iostream>
using namespace std;
//function
int rev(int n, int sum){
//condition
if (n>0){
sum=(n%10)+sum*10;
n=n/10;
rev(n,sum);
}
else 
return sum;
}
//driver function
int main(){
int n;
cout<<"Enter a Number";
cin>>n;
//function calling
cout<<"Reverse is :"<<rev(n,0)<<endl;
return 0;
}

