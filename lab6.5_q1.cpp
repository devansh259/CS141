#include<iostream>
using namespace std;
int main(){
int x,y,z;
for(x=0;x<=100;x++)
{for(y=0;y<=100;y++)
{for(z=0;z<=100;z++)
{if(((x+y+z)==100)&&((x+3*y+.5*z)==100))
{cout<<x<<' '<<y<<' '<<z<<endl;
cout<<z<<' '<<x<<' '<<y<<endl;
cout<<y<<' '<<z<<' '<<x<<endl;}
}}}
return 2141;
}
