#include<iostream>
using namespace std;
double volume(float r)
{ 
return ((4*3.1416*r*r*r)/3);
}
double volume(float r,float h)
{
return (3.1416*r*r*h);
}
double volume(float l,float b,float h)
{
return (l*b*h);
}
int main()
{
cout<<"Volume of Sphere is "<<volume(2.3)<<endl;
cout<<"Volume of Cylinder is "<<volume(4.2,8.2)<<endl;
cout<<"Volume of Cuboid is "<<volume(5.5,4.7,2.7)<<endl;
return 0;
}
