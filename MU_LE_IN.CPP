#include<iostream.h>
#include<conio.h>
class stu
{
 protected:
  int Roll;
 public:
  void getroll(int);
  void putroll();
};

class exam: public stu
{
 protected:
  int sub1, sub2;
 public:
  void getnumber(float, float);
  void putnumber();
};

class result: public exam
{
 float total;
 public:
  void display();
};

void stu::getroll(int a) { Roll=a; }
void stu::putroll() { cout<<"Roll No.- "<<Roll<<endl; }

void exam::getnumber(float s1, float s2) { sub1=s1, sub2=s2; }
void exam::putnumber()
{
 cout<<"Subject_1 : "<<sub1<<endl;
 cout<<"Subject_2 : "<<sub2<<endl;
}

void result::display()
{
 cout<<"Your Roll No. : "<<Roll<<endl;
 cout<<"Marks in Subject_1 : "<<sub1<<endl;
 cout<<"Marks in Subject_2 : "<<sub2<<endl;
 total=sub1+sub2;
 cout<<"Your Total Marks : "<<total<<endl<<endl;
}

int main()
{
 result r;
 clrscr();
 r.getroll(1231);
 r.getnumber(85,90);
 r.putroll();
 r.putnumber();
 cout<<endl<<"Numbers has changed!!"<<endl;
 r.getnumber(45,65);
 r.display();

 getch();
 return 0;
}