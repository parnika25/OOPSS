#include<iostream>
using namespace std;
class DB;
class DM
{
int m,cm;
static float res;
public:
void input(int a,int b)
{
m=a;
cm=b;
}
void display()
{
cout<<"Distance is "<<m<<"m  "<<cm<<" cm"<<endl;
}
void final_dist()
{
cout<<"Total distance is "<<res<<" cm\n";
}
friend void add(DM,DB);
};
float DM::res;
class DB
{
int feet,inch;
static float result;
public:
void input(int c,int d)
{
feet=c;
inch=d;
}
void display()
{
cout<<"Distance is "<<feet<<"ft  "<<inch<<" inches"<<endl;
}
void final_dist()
{
cout<<"Total distance is "<<result<<" inches\n";
}
friend void add(DM,DB);
};
float DB::result;
void add(DM d1,DB d2)
{
float x,y,z;
x=d1.cm+(d1.m*100);
y=d2.inch+(d2.feet*12);
z=y*2.54;
d1.res=x+z;
d2.result=d1.res*0.394;
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
DM obj1;
DB obj2;
obj1.input(a1,b1);
obj1.display();
obj2.input(c1,d1);
obj2.display();
add(obj1,obj2);
obj1.final_dist();
obj2.final_dist();
return 0;
}




