#include<iostream>
using namespace std;
int condition1(){
return 600 ;
}
int condition2(int x)
{int a=.1*x*225+280;
return a;}
int condition3(int x)
{int b=.2*x*225+20*x;
return b;}

int main(){
int nofshoes,c1,c2,c3;
cout<<"number of shoes sold per week"<<endl;
cin>>nofshoes;
c1=condition1();
c2=condition2(nofshoes);
c3=condition3(nofshoes);
cout<<c1<<' '<<c2<<' '<<c3<<endl;
if((c1>c2)&&(c1>c3))
cout<<"condition1 is the best option"<<endl;
else if((c2>c1)&&(c2>c3))
cout<<"condition2 is the best option"<<endl;
else
cout<<"condition3 is the best option"<<endl;
return 2141;
}
