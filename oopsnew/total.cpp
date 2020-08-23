#include<iostream>
using namespace std;
class total
{
int roll,total;
char name[50];
public:
void input()
{
cout<<"Enter the name of the student\n";
cin>>name;
cout <<"Enter the roll no "<<endl;
cin>>roll;
cout<<"Enter the total marks in 5 subject "<<endl;
cin>>total;
}
void showdata()
{
cout<<"Name :\t"<<name<<endl;
cout<<"Roll No :\t"<<roll<<endl;
cout<<"Total: \t"<<total<<endl;
}
};
int main()
{
total c1;
c1.input();
c1.showdata();
return 0;
}
