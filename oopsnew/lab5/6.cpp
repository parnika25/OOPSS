#include<iostream>
using namespace std;
class check
{
int code;
static int count;
public:
void input()
{
cout<<"Object No "<<++count<<" is called\n";
}
static void showcount()
{
cout<<"Count = "<<count<<endl;
}
};
int check::count;
int main()
{
check ob1,ob2,ob3;
ob1.input();
ob2.input();
ob3.input();
check::showcount();
return 0;
}
