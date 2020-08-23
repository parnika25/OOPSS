#include<iostream>
using namespace std;
void print(char c,int n)
{
for(int i=0;i<n;i++)
cout<<c;
cout<<"\n";
}
void print(char c)
{
for(int i=0;i<80;i++)
cout<<c;
cout<<"\n";
}
void print()
{
for(int i=0;i<80;i++)
cout<<'*';
cout<<"\n";
}

int main()
{
print('$',20);
print('^');
print();
return 0;
}
