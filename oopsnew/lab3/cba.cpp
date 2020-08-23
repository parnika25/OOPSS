#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
int t;
t=*a;
*a=*b;
*b=t;
}
int main()
{
int x=35;
int y=20;
cout<<"Before Swaping\n";
cout<<"x = "<<x<<"\n y = "<<y<<endl;
swap(&x,&y);
cout<<"After Swaping\n";
cout<<"x = "<<x<<"\n y = "<<y<<endl;
return 0;
}


