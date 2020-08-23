#include<iostream>
using namespace std;
class employee
{
int id ,age;
float bs,gr,hra, da;
char name[50];
public:
void input()
{
cout<<"Enter the details of employee "<<endl;
cout<<"ID \t";
cin>>id;
cout<<"Name \t";
cin>>name;
cout<<"Age \t";
cin>>age;
cout<<"Basic salary \t";
cin>>bs;
da=0.8*bs;
hra=0.1*bs;
gr=bs+da+hra;
}
void display()
{
cout<<"ID :"<<id<<endl;
cout<<"Name  :"<<name<<endl;
cout<<"Age  :"<<age<< endl;
cout<<"Basic salary  :"<<bs<<endl;
cout<<"DA  :"<<da<<endl;
cout<<"HRA  :"<<hra<<endl;
cout<<"Gross salary  :"<<gr<<endl;
}
};
int main()
{
int n;
cout<<"Enter the value of n"<<endl;
cin>>n;
employee c1[n];
for(int i=0;i<n;i++)
 c1[i].input();
for(int i=0;i<n;i++)
{
cout<<"Details of the employee " <<i+1<<endl;
c1[i].display();
}
return 0;
}
