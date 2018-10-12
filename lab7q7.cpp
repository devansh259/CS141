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
int n,reve;
cout<<"Enter a Number";
cin>>n;
//function calling
reve=rev(n,0);
if(n==reve)
	cout<<"THE NUMBER IS PALLINDROME"<<endl;
else
	cout<<"THE NUMBER IS NOT PALLINDROME"<<endl;
return 0;
}
