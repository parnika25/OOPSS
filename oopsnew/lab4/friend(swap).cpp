#include<iostream>
using namespace std;
class B;
class A
{
int x;
public:
void input(int a)
{
x=a;
}
void display()
{
cout<<"Value of x = "<<x<<endl;
}
friend void swap(A &,B &);
};
class B
{
int y;
public:
void input(int b)
{
y=b;
}
void display()
{
cout<<"Value of y = "<<y<<endl;
}
friend void swap(A &,B &);
};

void swap(A &c1,B &c2)
{
int t;
t=c1.x;
c1.x=c2.y;
c2.y=t;
}

int main()
{
int a,b;
cout<<"Enter the numbers\n";
cin>>a;
cin>>b;
A ob1;
B ob2;
ob1.input(a);
ob2.input(b);
cout<<"Before Swaping\n";
ob1.display();
ob2.display();
swap(ob1,ob2);
cout<<"After Swaping\n";
ob1.display();
ob2.display();
return 0;
}



