#include<iostream>
#include<iomanip>
using namespace std;
class book
{
string name,author;
int price;
public:
void input(string na,string a,int p)
{
name=na;
author=a;
price=p;
}
friend void display(book b[],int n,int ur,int lr);
};


void display(book b[],int n,int ur,int lr)
{
for(int i=0;i<n;i++)
{
if((b[i].price<=ur) && (b[i].price>=lr))
{
cout<<"Details of the book\n";
cout<<setw(10)<<left<<"Name :"<<setw(10)<<right<<b[i].name<<endl;
cout<<setw(10)<<left<<"Author :"<<setw(10)<<right<<b[i].author<<endl;
cout<<setw(10)<<left<<"Price :"<<setw(10)<<right<<b[i].price<<endl;
}
}
}


int main()
{
int n,i,p,ur,lr;
string na,a;
cout<<"Enter the number of books\n";
cin>>n;
book b[n];
for(i=0;i<n;i++)
{
cout<<"Enter the name of the book\t";
cin>>na;
cout<<"Enter the author of the book\t";
cin>>a;
cout<<"Enter the price of the book\t";
cin>>p;
b[i].input(na,a,p);
}
cout<<"Enter the upper range of price\t";
cin>>ur;
cout<<"Enter the lower range of price\t";
cin>>lr;
display(b,n,ur,lr);
return 0;
}


