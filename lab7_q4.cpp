#include <iostream>
using namespace std;
int sum(int,int)
int main()
{
	int start,end=0;
	cout<<"Enter the starting number."<<endl;
	cin>>start;
	cout<<"Enter the ending number."<<endl;
	cin>>end;
	cout<<"The sum of natural numbers between "<<start<<" and "<<end<<" is "<<sum(start,end);
	return 0;
}
int sum(int s,int e)
{
	if(s<=e)
	return s+sum(s+1,e);
	else
	return 0;
}
