#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;
class book
{
char *title;
char *auth;
char *pub;
float price;
int stock;

public:
book()
{
title=new char[50];
auth=new char[50];
pub=new char[50];
price=0;
stock=0;
}

void insert()
{
cout<<"Enter the title of the book\t";
cin>>title;
cout<<"Enter the author of the book\t";
cin>>auth;
cout<<"Enter the publisher name\t";
cin>>pub;
cout<<"Enter the price of the book\t";
cin>>price;
cout<<"Enter the no of stock\t";
cin>>stock;
}

int search(char *t,char *a)
{
if((strcmp(title,t))==(strcmp(auth,a)))
return 1;
else
return 0;
}

void display()
{
cout<<setw(15)<<left<<"Title : "<<setw(15)<<right<<title<<endl;
cout<<setw(15)<<left<<"Author : "<<setw(15)<<right<<auth<<endl;
cout<<setw(15)<<left<<"Publisher : "<<setw(15)<<right<<pub<<endl;
cout<<setw(15)<<left<<"Price : "<<setw(15)<<right<<price<<endl;
cout<<setw(15)<<left<<"Total Stock : "<<setw(15)<<right<<stock<<endl;
cout<<endl;
}

void nocopies(int num)
{
if(stock>=num)
cout<<"Cost of "<<num<<" books : Rs "<<(price*num)<<endl;
else
cout<<"Required book is not in stock\n";
}
};

int main()
{
int num,flag=0,n,ch,k;
char t[20],a[20];
book b[50];
while(ch!=0)
{
cout<<"		BOOK STORE		\n";
cout<<"1 To Enter all the books\n";
cout<<"2 To display the books\n";
cout<<"3 To search the book\n";
cout<<"0 To exit\n";
cin>>ch;
switch(ch)
{
case 1:
cout<<"How many books to be entered\n";
cin>>n;
for(int i=0;i<n;i++)
b[i].insert();
break;
case 2:
for(int i=0;i<n;i++)
b[i].display();
break;
case 3:
cout<<"Enter the title of the book required\t";
cin>>t;
cout<<"Enter the author of the book required\t";
cin>>a;
for(int i=0;i<n;i++)
{
if(b[i].search(t,a))
{
flag=1;
b[i].display();
k=i;
}
}
if(flag==1)
{
cout<<"Book is available\n";
}
else
{
cout<<"Book not available\n";
break;
}
if(flag==1)
{
cout<<"Enter the no of copies\t";
cin>>num;
b[k].nocopies(num);
flag=0;
}
break;
default:
cout<<"";
break;
}
}
cout<<"EXIT\n";
return 0;
}

