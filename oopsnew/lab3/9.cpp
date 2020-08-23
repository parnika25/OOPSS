#include <iostream>
using namespace std;

int x=100;
int main()
{
int x=500;
cout<<"Value of x locally "<<x<<endl;
cout<<"Value of x globally "<<::x<<endl;
return 0;
}

