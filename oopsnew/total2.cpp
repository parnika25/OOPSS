#include<iostream>
using namespace std;
class student
{
int roll;
char name[50];
float marks[5];
float t=0.0f,per;
public:
void getdata()
{
cout<<"Enter the name of the student"<<endl;
cin>>name;
cout<<"Enter the roll no"<<endl;
cin>>roll;
cout<<"Enter five marks of student\n"<<endl;
for(int i=0;i<5;i++)
{
cin>>marks[i];
}
}
void perc()
{
for(int i=0;i<5;i++)
 t=t+marks[i];
per=t/5;
}
void showdata()
{
cout<<"Name :"<<name<<endl;
cout<<"Roll No. :"<<roll<<endl;
cout<<"Marks of 5 subject :"<<endl;
for(int i=0;i<5;i++)
 cout<<marks[i]<<"\t";
cout<<"\nTotal :"<<t<<endl;
cout<<"\nPercent :"<<per<<endl;
}
};
int main()
{
student s1;
s1.getdata();
s1.perc();
s1.showdata();
return 0;
}


