#include<iostream>
using namespace std;
class B;
class A
{
int x;
public:
void input(int n)
{
x=n;
}

friend void gre(A,B);
};
class B
{
int y;
public:
void input(int n)
{
y=n;
}
friend void gre(A,B);
};
void gre(A ob1, B ob2)
{
if(ob1.x>ob2.y)
cout<<"Greater"<< ob1.x<<endl;
else
cout<<"Greater"<< ob2.y<<endl;
}
int main()
{
int x,y;
cout<<"Enter the numbers\n";
cin>>x;
cin>>y;
A ob1;
B ob2;
ob1.input(x);
ob2.input(y);
gre(ob1,ob2);
return 0;
}


