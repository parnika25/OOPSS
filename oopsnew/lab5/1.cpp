#include<iostream>
using namespace std;
class complex
{
int real,img;
public:
complex()
{
real=0;
img=0;
}
complex(int a,int b)
{
real=a;
img=b;
}
complex(const complex &c)
{
real=c.real;
img=c.img;
}
void display()
{
cout<<real<<" + i"<<img<<endl;
}
~complex()
{
cout<<"Destructor has been invoked\n";
}
};
int main()
{
complex ob1;
complex ob2(10,24);
complex ob3(ob2);
ob1.display();
ob2.display();
ob3.display();
return 0;
}


