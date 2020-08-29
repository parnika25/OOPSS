#include<iostream>
//#include<string.h>

using namespace std;
class add
{
int n1,n2,f;
int *p,*q;  
int *s;
public:
add()
{
n1=0;
n2=0;
p=new int[0];
q=new int[0];
s=new int[0];
}
add(int m,int n)
{
n1=m;
n2=n;
p=new int[n1];
cout<<"Enter the elements for p\n";
for(int i=0;i<n1;i++)
cin>>p[i];
q=new int[n2];
cout<<"Enter the elements for q\n";
for(int j=0;j<n2;j++)
cin>>q[j];
}

void addition()
{
f=n1+n2;
s=new int[f];
int i,j,k;
for(i=0,j=0,k=0;i<f,j<n1,k<n2;i++)
{
if(i<n1)
{
s[i]=p[j];
cout<<s[i];
j++;
}
if(i>=n1)
{
s[i]=q[k];
cout<<s[i];
k++;
}
}
}
void display()
{
cout<<"Elemnts of array p are\n";
for(int i=0;i<n1;i++)
cout<<p[i];
printf("\n");
cout<<"Elemnts of array q are\n";
for(int j=0;j<n2;j++)
cout<<q[j];
printf("\n");
}
};
int main()
{
add c1(3,5);
c1.display();
c1.addition();
return 0;
}


