#include<iostream>
using namespace std;
class time1
{
int h,m,s;
public:
void input(int a,int b,int c)
{ 
h=a;
m=b;
s=c;
}
void show()
{
cout<<h<< "hour"<<m <<"min"<<s <<"sec"<<endl;
}
void add(time1 p,time1 q)
{
s=p.s+q.s;
m=p.m+q.m+(s/60);
s=s%60;
h=p.h+q.h+(m/60);
m=m%60;
}
};
int main()
{
time1 c1,c2,c3;
c1.input(5,10,10);
c2.input(1,50,60);
c3.add(c1,c2);
c1.show();
c2.show();
c3.show();
return 0;
}


