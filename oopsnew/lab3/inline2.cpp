#include<iostream>
using namespace std;
inline int sq(int n)
{
return n*n;
}
inline int cube(int n)
{
return n*n*n;
}
int main()
{
int n;
cout<<"Enter the value of n"<<endl;
cin>>n;
cout<<"Square of a number is "<<sq(n)<<endl;
cout<<"Cube of a number is "<<cube(n)<<endl;
return 0;
}

