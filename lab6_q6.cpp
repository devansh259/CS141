#include<iostream>
using namespace std;
int sumEvenNumbers(int a,int b)
{int sum=0;
for(int i=a+1;i<=b-1;i++)
{if(i%2==0)
sum=sum+i;
else
sum=sum;}
return sum;}


int sumOddNumbers(int a,int b)
{int sum=0;
for(int i=a+1;i<=b-1;i++)
{if(i%2!=0)
sum=sum+i;
else
sum=sum;
}
return sum;}

int sumSquareOddNumbers(int a,int b)
{int sum=0,i=a+1;
while(i<=b-1)
{{if(i%2!=0)
sum=sum+i*i;

else
sum=sum;
}
i++;}
return
sum;}

int sumSquareEvenNumbers(int a,int b)
{int sum=0,i=a+1;
while(i<=b-1)
{{if(i%2==0)
sum=sum+i*i;

else
sum=sum;
}
i++;}
return sum;}
                                                                                          
int main(){
int firstnum,secondnum,sumEven,sumOdd,sumSquareEven,sumSquareOdd;
cout<<"enter the  numbers in ascending order "<<endl;
cin>>firstnum>>secondnum;
sumEven=sumEvenNumbers(firstnum,secondnum);
sumOdd=sumOddNumbers(firstnum,secondnum);
sumSquareEven=sumSquareEvenNumbers(firstnum,secondnum);
sumSquareOdd=sumSquareOddNumbers(firstnum,secondnum);
cout<<sumEven<<' '<<sumOdd<<' '<<sumSquareEven<<' '<<sumSquareOdd<<endl;
return 2323;
}

