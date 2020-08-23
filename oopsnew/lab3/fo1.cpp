#include<iostream>
#include<math.h>
using namespace std;
double area(float r)
{
    return (3.1416*r*r);

}
double area(float l,float b)
{
return (l*b);
}
double area(float s1,float s2,float s3)
{
   double s,ar;
   s=(s1+s2+s3)/2;
   ar=sqrt(s*(s-s1)*(s-s2)*(s-s3));
   return ar;
}
int main()
{
cout<<"Area of circle "<<area(2.3)<<endl;
cout<<"Area of rectangle "<<area(4.2,6.4)<<endl;
cout<<"Area of triangle "<<area(10.2,5.4,7.5)<<endl;
return 0;
}
