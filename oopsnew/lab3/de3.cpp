#include<iostream>
using namespace std;
void print(char c='*',int n=80);
int main()
{
 print('$',20);
 print('#');
 print();
}
void print(char c,int n)
{
for(int i=0;i<n;i++){
cout<<c;
}
cout<<"\n";
}
