#include<iostream>
using namespace std;
class student
{
int roll;
string name;
float m1,m2,m3,m4,m5;
float t,per;
public:
void input(string n,int r,float m01,float m02,float m03,float m04,float m05)
{
roll=r;
name=n;
m1=m01;
m2=m02;
m3=m03;
m4=m04;
m5=m05;
}
void perc()
{
t=m1+m2+m3+m4+m5;
per=t/5;
}

void showdata()
{
cout<<"Name :"<<name<<endl;
cout<<"Roll No. :"<<roll<<endl;
cout<<"Marks of 5 subject :"<<endl;
cout<<m1;
cout<<m2;
cout<<m3;
cout<<m4;
cout<<m5;
cout<<"\nTotal :"<<t<<endl;
cout<<"\nPercent :"<<per<<endl;
}
};
int main()
{
student s1;
s1.input("xyn",1,90,90,90,90,90);
s1.perc();
s1.showdata();
return 0;
}


