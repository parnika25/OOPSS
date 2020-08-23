#include <iostream>
 using namespace std;
  class test 
  {
  int code; 
  static int count;
   public:
    void getdata(int a ) {
     code=a;
     count++;
      }
      void showdata() 
      {
cout<<"Count = "<< count<<endl; 
}
};

 int test::count; 
 int main() 
 {
  test t1,t2,t3;
  t1.getdata(10); 
  t2.getdata(20);
  t3.getdata(30); 
 
    t1.showdata();
 
      }
