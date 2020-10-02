#include<iostream>
#include<string.h>
using namespace std;
class Employee
{;
int id;
string name;
protected:
float salary;
public:
void getdata()
{
cin.ignore();
cout<<"Enter the name of the employee\t";
getline(cin,name);
cout<<"Enter the ID\t";
cin>>id;
}
void display()
{
cout<<"Name:\t"<<name<<endl;
cout<<"ID\t"<<id<<endl;
}
};
class Regular:public Employee
{
float BasicS;
float DA,HRA;
public:
void getdata(float bs)
{
Employee::getdata();
BasicS=bs;
}
void calculate()
{
DA=0.8*BasicS;
HRA=0.1*BasicS;
salary=DA+HRA+BasicS;
}
void display()
{
Employee::display();
cout<<"Basic salary  :"<<BasicS<<endl;
cout<<"DA  :"<<DA<<endl;
cout<<"HRA  :"<<HRA<<endl;
cout<<"Net salary  :"<<salary<<endl;
}
};
class PartTime:public Employee
{
float pay_hr;
int no_hr;
public:
void getdata(float p_hr,int n_hr)
{
Employee::getdata();
pay_hr=p_hr;
no_hr=n_hr;
}
void calculate()
{
salary=pay_hr*no_hr;
}
void display()
{
Employee::display();
cout<<"Salary of an hour  :"<<pay_hr<<endl;
cout<<"No of hours  :"<<no_hr<<endl;
cout<<"Net salary  :"<<salary<<endl;
}
};

int main()
{
int n_hr,n;
float  bs,p_hr;
Regular ob1;
PartTime ob2;
cout<<"Enter the option\n";
cout<<"1 Permanent Employee\n";
cout<<"2 Part Time Employee\n";
cin>>n;
switch(n)
{
case 1:
cout<<"Enter the Basic Salary\t";
cin>>bs;
ob1.getdata(bs);
ob1.calculate();
ob1.display();
break;
case 2:
cout<<"Enter the Salary per hour\t";
cin>>p_hr;
cout<<"Enter the no hours\t";
cin>>n_hr;
ob2.getdata(p_hr,n_hr);
ob2.calculate();
ob2.display();
break;
}
return 0;
}



