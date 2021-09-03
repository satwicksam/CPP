#include<iostream.h>
#include<conio.h>
class A
{
 int a;
 public:
 int b;
 void getab();
 int geta();
 void showa();
};

class B: public A //Inheritatance
{
 int c;
 public:
 void mul();
 void display();
};

void A::getab() { a=10, b=20; }
int A::geta() { return a; }
void A::showa() { cout<<"A= "<<a<<endl; }
void B::mul() { c=b*geta(); }

void B::display()
{
 cout<<"A= "<<geta()<<endl;
 cout<<"B= "<<b<<endl;
 cout<<"A x B= "<<c<<endl<<endl;
}

int main()
{
 B b;
 clrscr();
 b.getab();
 b.mul();
 b.showa();
 b.display();

 b.b=10;
 b.mul();
 b.display();
 getch();
 return 0;
}
