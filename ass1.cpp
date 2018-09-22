#include<iostream>
using namespace std;
int main(){
char f[20],b[20],e[20],q[20],a,g,t,c;
int i=0;
cout<<"enter first dna sequence"<<endl;
for(i=0;i<20;i++)
{cin>>f[i];}
// i need to find a relationship between two strands of dna,there is some algorithm that drives relationship between  two strands//
for(i=0;i<20;i++)
{if(f[i]=='a')
{b[i]='g';}
else if(f[i]=='g')
{b[i]='a';}
else if(f[i]=='t')
{b[i]='c';}
else if(f[i]=='c')
{b[i]='t';}
}

cout<<"enter second dna"<<endl;
for(i=0;i<20;i++)
{cin>>e[i];}

for(i=0;i<20;i++)
{if(e[i]=='a')
{q[i]='g';}
else if(e[i]=='g')
{q[i]='a';}
else if(e[i]=='t')
{q[i]='c';}
else if(e[i]=='c')
{q[i]='t';}
}
for(i=0;i<20;i++)
{if f[i];}
return 34234;
}// my algorithm: (a=1,t=2,g=3,c=4)my logic: lets use binary logic(odd=0,even=1)and my operation is AND=(a,g,a),(g,a,g),(c,t,c),(t,c,t),(a,c,c),(a,t,t),(// 
