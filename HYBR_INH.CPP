#include<iostream>
class student
{
 protected:
  int roll;
 public:
  void getroll(int);
  void putroll() { cout<<"Your roll= "<<roll<<endl; }
};

class test: public student
{
 protected:
  float sub1, sub2;
 public:
  void getmarks(float, float);
};

class sports: public student
{
 protected:
  float spmark;
 public:
  void getspmarks(float);
};

class total: public test, public sports
{
 protected:
  float tot;
 public:
  void display1();
  void display2();
};

void student::getroll(int n) { roll=n; }
void test::getmarks(float s1, float s2) { sub1=s1, sub2=s2; }
void sports::getspmarks(float sp) { spmark=sp; }
void total::display1()
{
 cout<<"Roll No. : "<<sports::roll<<endl;
 cout<<"Marks in Sub_1 : "<<sub1<<endl;
 cout<<"Marks in sub_2 : "<<sub2<<endl;
 cout<<"Marks in Sports : "<<spmark<<endl;
 tot=sub1+sub2+spmark;
 cout<<"Total Marks : "<<tot<<endl<<endl;
}
void total::display2()
{
 cout<<"Roll No. : "<<test::roll<<endl;
 cout<<"Marks in Sub_1 : "<<sub1<<endl;
 cout<<"Marks in sub_2 : "<<sub2<<endl;
 cout<<"Marks in Sports : "<<spmark<<endl;
 tot=sub1+sub2+spmark;
 cout<<"Total Marks : "<<tot<<endl<<endl;
}

int main()
{
 total T;
 clrscr();

 cout<<" ---------------------------- "<<endl;
 cout<<"| Access from parent class-1 |"<<endl;
 cout<<" ---------------------------- "<<endl;
 T.sports::getroll(3704);
 T.getmarks(65.76,86.45);
 T.getspmarks(89.50);
 T.display1();

 cout<<" ---------------------------- "<<endl;
 cout<<"| Access from parent class-2 |"<<endl;
 cout<<" ---------------------------- "<<endl;
 T.test::getroll(2035);
 T.getmarks(54.67,67.45);
 T.getspmarks(78.98);
 T.display2();

 return 0;
}
