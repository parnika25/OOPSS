#include<iostream>
#include<string.h>

using namespace std;
class String
{
int len;
char *name;
public:
String()
{
len=0;
name=new char[len+1];
}
String(char *s)
{
len=strlen(s);
name= new char[len+1];
strcpy(name,s);
}
void join(String s1,String s2)
{
len=s1.len+s2.len;
delete name;
name=new char[len+1];
strcpy(name,s1.name);
strcat(name,s2.name);
}
void display()
{
cout<<name<<endl;
}
};
int main()
{
String ob1("Parnika ");
String ob2("Katiyar");
String ob3;
ob1.display();
ob2.display();
ob3.join(ob1,ob2);
ob3.display();
return 0;
}


