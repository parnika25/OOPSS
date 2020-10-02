#include<iostream>
#include<string.h>
using namespace std;
class student
{
string name;
int roll;
int age;

public:
void getdata(string n,int r,int a)
{
name=n;
roll=r;
age=a;

}
void display()
{
cout<<"Student's detail\n";
cout<<"Name : "<<name<<endl;
cout<<"Roll No : "<<roll<<endl;
cout<<"Age : "<<age<<endl;
}
};

class test:virtual public student
{
protected:
int marks1,marks2,marks3;
public:
void getdata(int m1,int m2,int m3)
{
marks1=m1;
marks2=m2;
marks3=m3;
}
void display()
{
student::display();
cout<<"Marks in subject1 : "<<marks1<<endl;
cout<<"Marks in subject2 : "<<marks2<<endl;
cout<<"Marks in subject3 : "<<marks3<<endl;
}
};

class activity:virtual public student
{
protected:
int act1,act2;
public:
void getdata(int a1,int a2)
{
act1=a1;
act2=a2;
}
void display()
{
cout<<"Marks of Activity1 : "<<act1<<endl;
cout<<"Marks of Activity1 : "<<act1<<endl;
}
};
class result:public test,public activity
{
int totalf;
float per;
public:
void total()
{
totalf=marks1+marks2+marks3+act1+act2;
per=totalf/5.0;
}
void display()
{
test::display();
activity::display();
cout<<"Total Marks Scored\t"<<totalf<<endl;
cout<<"Percentage\t"<<per<<endl;
if(per>=90)
cout<<"Grade O\n";
else if(per>=80)
cout<<"Grade E\n";
else if(per>=70)
cout<<"Grade A\n";
else if(per>=60)
cout<<"Grade B\n";
else if(per>=50)
cout<<"Grade C\n";
else if(per>=40)
cout<<"Grade D\n";
else
cout<<"Fail\n";
}
};

int main()
{
result obj1;
string n,c;
int a,r,m1,m2,m3,a1,a2;
result t;
cout<<"Enter the name of the student\t";
getline(cin,n);
cout<<"Enter the roll no of the student\t";
cin>>r;
cout<<"Enter the age of the student\t";
cin>>a;
cin.ignore();
cout<<"Enter the marks for Test 1\t";
cin>>m1;
cout<<"Enter the marks for Test 2\t";
cin>>m2;
cout<<"Enter the marks for Test 3\t";
cin>>m3;
cout<<"Enter the marks for Activity 1\t";
cin>>a1;
cout<<"Enter the marks for Activity 2\t";
cin>>a2;
obj1.student::getdata(n,r,a);
obj1.test::getdata(m1,m2,m3);
obj1.activity::getdata(a1,a2);
obj1.total();
obj1.display();
return 0;
}


