#include<iostream>
using namespace std;
 int klarge(int *a,int size,int k)
{for(int i=0;i<size;i++){
for(int j=i+1;j<size;j++){
int temp;
if(a[i]>a[j]){
temp=a[i];
a[i]=a[j];
a[j]=temp;
}}}
return a[size-k];}

 int ksmall(int *a,int size,int k)
{for(int i=0;i<size;i++){
for(int j=i+1;j<size;j++){
int temp;
if(a[i]>a[j]){
temp=a[i];
a[i]=a[j];
a[j]=temp;
}}}
return a[k-1];
}


int main(){
int a[20];
int k,size;
cout<<"enter size"<<endl;
cin>>size;
cout<<"enter the elements"<<endl;
for(int i=0;i<5;i++)
{cin>>a[i];}
cout<<"enter k"<<endl;
cin>>k;
cout<<"kth largest term"<<klarge(a,size,k)<<endl;
cout<<"kth smallest term"<<ksmall(a,size,k)<<endl;
return 2342;
}


