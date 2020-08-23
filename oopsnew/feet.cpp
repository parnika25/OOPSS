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
void add(feet1 p,feet1 q)
{
inch=p.inch+q.inch;
feet=p.feet+q.feet+(inch/12);
inch=inch%12;
}
};
int main()
{
feet1 c1,c2,c3;
c1.input();
c2.input();
c3.add(c1,c2);
c1.show();
c2.show();
c3.show();
return 0;
}



