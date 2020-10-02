#include<iostream>
#include<string.h>
using namespace std;
class student
{
string name;
int roll;
int age;
string course;
public:
void getdata(string n,int r,int a,string c)
{
name=n;
roll=r;
age=a;
course=c;
}
void display()
{
cout<<"Student's detail\n";
cout<<"Name : "<<name<<endl;
cout<<"Roll No : "<<roll<<endl;
cout<<"Age : "<<age<<endl;
cout<<"Course : "<<course<<endl;
}
};
class test:public student
{
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
int main()
{
string n,c;
int a,r;
test t;
cout<<"Enter the name of the student\t";
getline(cin,n);
cout<<"Enter the roll no of the student\t";
cin>>r;
cout<<"Enter the age of the student\t";
cin>>a;
cin.ignore();
cout<<"Enter the course : \t";
getline(cin,c);
t.student::getdata(n,r,a,c);
t.getdata();
t.display();
}


