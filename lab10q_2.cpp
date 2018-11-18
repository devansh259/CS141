#include <iostream>
using namespace std;
class Box 
{
   public:
	double length;
        double breadth;
        double height;
        //member functions
        double getVolume(void)
	{
		return length*breadth*height;
	}
        void setLength(double len)
	{
  	        length=len;
	}
        void setBreadth(double bre)
	{
		breadth=bre;
	}
        void setHeight(double hei)
	{
 	        height = hei;
	}
};

int main() 
{
   Box Box1;
   Box Box2;
   double volume = 0.0;
   
   Box1.setLength(6.0); 
   Box1.setBreadth(7.0); 
   Box1.setHeight(5.0);
   Box2.setLength(12.0); 
   Box2.setBreadth(13.0); 
   Box2.setHeight(10.0);
   volume=Box1.getVolume();
   cout<<"Volume of Box1 is "<<volume<<"cubic units\n";
   volume=Box2.getVolume();
   cout<<"Volume of Box2 is "<<volume<<"cubic units\n";
   return 0;
}
