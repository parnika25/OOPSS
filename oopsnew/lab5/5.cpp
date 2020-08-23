#include<iostream>
using namespace std;
class A
{
public:
static int count;
A()
{
cout<<++count<<" No. object is created\n";
}
~A()
{
cout<<count--<<" No. object is destroyed\n";
}
};
int A::count;
int main()
{
A obj1,abj2,obj3;
return 0;
}


