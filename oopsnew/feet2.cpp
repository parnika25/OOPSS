#include<iostream>
using namespace std;
class feet1
{
int feet,inch;
public:
void input()
{
cout<<"Enter the distance in feet and inch"<<endl;
cin>>feet;
cin>>inch;
}
void show()
{
cout<<"Feet"<<feet<<"Inches"<<inch<<endl;
}
feet1 add(feet1 q)
{
feet1 temp;
temp.inch=q.inch+inch;
temp.feet=q.feet+feet+(inch/12);
temp.inch=temp.inch%12;
return temp;
}
};
int main()
{
feet1 c1,c2,c3;
c1.input();
c2.input();
c3=c1.add(c2);
c1.show();
c2.show();
c3.show();
return 0;
}



