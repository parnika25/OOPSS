#include<iostream>
using namespace std;
class dist2;
class dist1
{
int m,cm;
public:
void input(int a,int b)
{
m=a;
cm=b;
}
void display()
{
cout<<"Distance is "<<m<<"m  "<<cm<<"cm"<<endl;
}
friend void compare(dist1,dist2);
};

class dist2
{
int feet,inch;
public:
void input(int c,int d)
{
feet=c;
inch=d;
}
void display()
{
cout<<"Distance is "<<feet<<"ft  "<<inch<<"inches"<<endl;
}
friend void compare(dist1,dist2);
};

void compare(dist1 d1,dist2 d2)
{
float x,y,z;
x=d1.cm+(d1.m*100);
y=d2.inch+(d2.feet*12);
z=y*2.54;
if(x>z)
cout<<d1.m<<"m  "<<d1.cm<<"cm is greater\n";
else
cout<<d2.feet<<"ft  "<<d2.inch<<"inches is greater\n";
}
int main()
{
int a1,b1,c1,d1;
cout<<"Enter the value for meter and centimeter\n";
cin>>a1;
cin>>b1;
cout<<"Enter the value for feet and inches\n";
cin>>c1;
cin>>d1;
dist1 obj1;
dist2 obj2;
obj1.input(a1,b1);
obj1.display();
obj2.input(c1,d1);
obj2.display();
compare(obj1,obj2);
return 0;
}




