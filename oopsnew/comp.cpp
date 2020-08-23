#include<iostream>
using namespace std;
class complex
{
float real,img;
public:
void input(float a,float b)
{
real=a;
img=b;
}
void show()
{
cout<<real<<"+i"<<img<<endl;
}
void add(complex p,complex q)
{
real=p.real+q.real;
img=p.real+q.real;
}
};
int main()
{
complex c1,c2,c3;
c1.input(10.2,12.5);
c2.input(21.5,6.7);
c3.add(c1,c2);
c1.show();
c2.show();
c3.show();
return 0;
}
