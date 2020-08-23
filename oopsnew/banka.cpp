#include<iostream>
using namespace std;
class bankAcc
{
string name,acctype;
int accno;
float balamt;
public:
void value(string n,string at,int an,float bal)
{
name=n;
acctype=at;
accno=an;
balamt=bal;
}
void deposit(float amt)
{
balamt=balamt+amt;
cout<<"Net Balnace after deposite :"<<balamt<<endl;
}
void withdraw(float amt)
{
if(balamt-amt>=1000)
{
balamt=balamt-amt;
cout<<"Net Balnace after withdrawn:"<<balamt<<endl;
}
else
cout<<"Could not withdraw the money"<<endl;
}
void display()
{
cout<<"Name :"<<name<<endl;
cout<<"Account type :"<<acctype<<endl;
cout<<"Account number :"<<accno<<endl;
cout<<"Net Balance amount :"<<balamt<<endl;
}
};
int main()
{
bankAcc ob1;
ob1.value("Ramesh","Saving Account",123,1000.0f);
ob1.deposit(2000);
ob1.withdraw(1000);
ob1.display();
return 0;
}


