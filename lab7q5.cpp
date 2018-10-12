//sum of odd numbers in a range
#include<iostream>
using namespace std;
//function declare
int foo(int n,int sum){
	if(n>=1){
		if(n%2==1)
		sum=sum+n;
		n--;
		foo(n,sum);
	}
	else
		return sum;
}
//driver function
int main(){
int n;
cout<<"ENTER A NUMBER";
cin>>n;
//CALLING FUNCTION
cout<<"SUM IS :"<<foo(n,0)<<endl;
return 0;
}
