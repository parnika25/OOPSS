#include<iostream>
#include<string.h>
using namespace std;
class Batsman
{
int runs_taken,no_half,no_cen,high_sc,no_six,no_four;
float strike_rate;
string name;
int age,jersey_no;
int no_odi;
public:
void getdata()
{ 
cout<<"Enter the Name\t";
cin>>name;
cout<<"Enter the Age\t";
cin>>age;
cout<<"Enter the Jersey No\t";
cin>>jersey_no;
cout<<"Enter the No of ODIs played\t";
cin>>no_odi;
cout<<"Enter the No of runs taken\t";
cin>>runs_taken;
cout<<"Enter the No of half centuries\t";
cin>>no_half;
cout<<"Enter the No of centuries\t";
cin>>no_cen;
cout<<"Enter the Highest score\t";
cin>>high_sc;
cout<<"Enter the No of sixes\t";
cin>>no_six;
cout<<"Enter the No of four\t";
cin>>no_four;
cout<<"Enter the Strike Rate\t";
cin>>strike_rate;
}
void display()
{
cout<<"Name:\t"<<name<<endl;
cout<<"Age:\t"<<age<<endl;
cout<<"Jersey Number:\t"<<jersey_no<<endl;
cout<<"No od ODIs played:\t"<<no_odi<<endl;
cout<<"Runs taken:\t"<<runs_taken<<endl;
cout<<"Half Centuries:\t"<<no_half<<endl;
cout<<"Centuries:\t"<<no_cen<<endl;
cout<<"Highest Score:\t"<<high_sc<<endl;
cout<<"Sixes:\t"<<no_six<<endl;
cout<<"Fours:\t"<<no_four<<endl;
cout<<"Strike Rate:\t"<<strike_rate<<endl;
}
};
class Bowler
{
int wi;
float speed,economy,runrate;
string type;
public:
void getdata()
{
cout<<"Enter the type of Bowling\t";
cin>>type;
cout<<"Enter the No wickets taken\t";
cin>>wi;
cout<<"Enter the Speed of Bowling\t";
cin>>speed;
cout<<"Enter the Economy\t";
cin>>economy;
cout<<"Enter the Runrate\t";
cin>>runrate;
}
void display()
{
cout<<"Bowling type:\t"<<type<<endl;
cout<<"Wickets:\t"<<wi<<endl;
cout<<"Speed:\t"<<speed<<endl;
cout<<"Economy:\t"<<economy<<endl;
cout<<"RunRate:\t"<<runrate<<endl;
}
};
class Allrounder:public Batsman,public Bowler
{
int no_man,no_int,no_cat,rank;
public:
void getdata()
{
Batsman::getdata();
Bowler::getdata();
cout<<"Enter the No of man of the match:\t";
cin>>no_man;
cout<<"Enter the no of international matches:\t";
cin>>no_int;
cout<<"Enter the no of catches:\t";
cin>>no_cat;
cout<<"Enter the ICC Ranking:\t";
cin>>rank;
}
void display()
{
Batsman::display();
Bowler::display();
cout<<"No of man of the match:\t"<<no_man<<endl;
cout<<"No of international matches:\t"<<no_int<<endl;
cout<<"No of catches:\t"<<no_cat<<endl;
cout<<"ICC Ranking:\t"<<rank<<endl;
}
};
int main()
{
Allrounder a1;
a1.getdata();
a1.display();
return 0;
}
