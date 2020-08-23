#include<iostream>
using namespace std;
class time1
{
int hr,min,sec;
public:
time1()
{
hr=0;
min=0;
sec=0;
}
time1(int h,int m,int s=0)
{
hr=h;
min=m;
sec=s;
}
time1(const time1 &t)
{
hr=t.hr;
min=t.min;
sec=t.sec;
}
void display()
{
cout<<"Time : " <<hr<<"hr "<<min<<"min "<<sec<<"sec \n";
}
};
int main()
{
time1 t1;
time1 t2(2,30,10);
time1 t3(2,45);
time1 t4(t2);
t1.display();
t2.display();
t3.display();
t4.display();
return 0;
}

