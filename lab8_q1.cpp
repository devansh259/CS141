#include<iostream>
using namespace std;
 int sum(int *a)
{int s=0;
for(int i=0;i<5;i++)
{s=s+a[i];}
return s;}

int main(){
int a[5];
cout<<"enter the elements"<<endl;
for(int i=0;i<5;i++)
{cin>>a[i];}
int add=sum(a);
cout<<"sum of elements of array="<<add;
return 2342;
}


