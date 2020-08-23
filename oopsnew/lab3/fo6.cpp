#include<iostream>
using namespace std;
class complex
{
float real,img;
public:
void input(float a, float b)
{
real=a;
img=b;
}
void print()
{
cout<<real<<" + i"<<img<<endl;
}
complex add(float c,complex c1)
{
complex t;
t.real=c+c1.real;
t.img=c1.img;
return t;
}
complex add(complex c2,complex c3)
{
complex t;
t.real=c2.real+c3.real;
t.img=c2.img+c3.img;
return t;
}
};
int main()
{
complex obj1,obj2,obj3,obj4,obj5;
cout<<"Addition of one real and one complex number \n";
obj1.input(2.4,5.6);
obj2=obj2.add(10.1,obj1);
obj2.print();
cout<<"Addition of two complex numbers \n";
obj3.input(3.2,8.1);
obj4.input(2.1,4.4);
obj5=obj5.add(obj3,obj4);
obj5.print();
return 0;
}


