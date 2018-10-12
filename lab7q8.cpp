#include<iostream>
using namespace std;
//function
int sod(int n,int sum){
	if (n>0){
		sum=sum+(n%10);
		n=n/10;
		sod(n,sum);
	}
	else
		return sum;
}
//driver function
int main(){
int n;
cout<<"ENTER A NUMBER";
cin>>n;
//calling function
cout<<"SUM OF DIGITS ARE :"<<sod(n,0)<<endl;
return 0;
}
