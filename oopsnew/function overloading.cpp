#include<iostream>
using namespace std;
int sum(int a,int b=10,int c=20);
int main()
{
cout<<"Sum of two numbers"<<sum(5)<<endl;
cout<<"Sum of two numbers"<<sum(5,15)<<endl;
cout<<"Sum of two numbers"<<sum(5,15,25)<<endl;
return 0;
}

int sum(int a,int b,int c)
{
return a+b+c;

}

