#include<iostream>
using namespace std;
void swap(int a,int b)
{
int t;
t=a;
a=b;
b=t;
cout<<"After Swaping\n";
cout<<"x = "<<a<<"\n y = "<<b<<endl;
}
int main()
{
int x=35;
int y=20;
cout<<"Before Swaping\n";
cout<<"x = "<<x<<"\n y = "<<y<<endl;
swap(x,y);
return 0;
}


