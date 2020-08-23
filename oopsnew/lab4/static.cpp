#include<iostream>
using namespace std;
class student
{
static float avg;
int roll;
string name;
float marks;
public:
void input(int r,string n ,float m)
{
roll=r;
name=n;
marks=m;
avg+=marks;
}
static void display(int n)
{
avg=avg/n;
cout<<"Average of the class is "<<avg<<endl;
}
};
float student::avg;
int main()
{
int n,ro;
string na;
float ma;
cout<<"Enter the number of students\t";
cin>>n;
student s[n];
for(int i=0;i<n;i++)
{
cout<<"Enter the name of the student\t";
cin>>na;
cout<<"Enter the roll no\t";
cin>>ro;
cout<<"Enter the marks\t";
cin>>ma;
s[i].input(ro,na,ma);
}
student::display(n);
}



