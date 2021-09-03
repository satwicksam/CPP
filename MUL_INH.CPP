#include<iostream.h>
#include<conio.h>
class A
{
 protected:
  int a;
 public:
  void geta(int);
};

class B
{
 protected:
  int b;
 public:
  void getb(int);
};

class M: public A, public B
{
 public:
  void display();
};

void A::geta(int val1)
{
 a=val1;
}
void B::getb(int val2)
{
 b=val2;
}
void M::display()
{
 cout<<"A= "<<a<<endl;
 cout<<"B= "<<b<<endl;
 cout<<"A x B= "<<a*b<<endl<<endl;
}

int main()
{
 M m;
 clrscr();
 m.geta(10);
 m.getb(20);
 m.display();

 m.geta(30);
 m.display();
 getch();
 return 0;
}