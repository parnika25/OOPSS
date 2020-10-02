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
class test:public student
{
protected:
int marks[5];
public:
void getdata()
{
cout<<"Enter the marks of five subject\n";
for(int i=0;i<5;i++)
cin>>marks[i];
}
void display()
{
student::display();
for(int i=0;i<5;i++)
cout<<"Marks in five subject : "<<marks[i]<<endl;
}
};
class result:public test
{
int total;
float per;
public:
void total1()
{
for(int i=0;i<5;i++)
total+=marks[i];
per=total/5.0;
}
void display()
{
test::display();
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
string n,c;
int a,r;
result t;
cout<<"Enter the name of the student\t";
getline(cin,n);
cout<<"Enter the roll no of the student\t";
cin>>r;
cout<<"Enter the age of the student\t";
cin>>a;
cin.ignore();
t.student::getdata(n,r,a);
t.test::getdata();
t.total1();
t.display();
}


