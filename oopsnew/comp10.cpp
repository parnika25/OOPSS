#include<iostream>
using namespace std;
class comp
{
float real,img;
public:
void input()
{
cin>>real;
cin>>img;
}
void showdata()
{

 cout<<real<<"+ i"<<img<<endl;
}
};
int main()
{
comp c1[10];
for(int i=0;i<10;i++)
{
cout<<"Enter the real and imaginary part for complex no:"<<i+1<<endl;
c1[i].input();
}
for(int i=0;i<10;i++)
c1[i].showdata();
return 0;
}
