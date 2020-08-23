#include<iostream>
#include<cmath>
using namespace std;
class distance1
{
int x,y;
float d;
public:
void input()
{
cout<<"Enter the x coordinate"<<endl;
cin>>x;
cout<<"Enter the y coordinate"<<endl;
cin>>y;
}
void display()
{
cout<<"The cordinates are \t";
cout<<x<<","<<y<<"\n"<<endl;
}
distance1 calc(distance1 d1)
{
distance1 t;
t.d=abs(sqrt(pow((x-d1.x),2)+pow((y-d1.y),2)));
cout<<"Distance between the two points is :"<<t.d<<endl;
return t;
}
};
int main()
{
distance1 a,b,c;
a.input();
b.input();
a.display();
b.display();
c=a.calc(b);
return 0;
}
