#include<iostream.h>
#include<conio.h>
class alpha
{
 int a;
 public:
 alpha (int x)
 {
  a=x;
 }
 void show_a() {cout<<"Member of alpha(Base) class is: "<<a<<endl;}
};

class beta
{
 int b;
 public:
 beta (int y)
 {
  b=y;
 }
 void show_b() {cout<<"Member of beta(Base) class is: "<<b<<endl;}
};

class gamma:public alpha, public beta
{
 int s1,s2;
 public:
 gamma(int q, int w, int e, int r):
 alpha(q), beta(w) //constructor of base class in derived class...
 {
  s1=e, s2=r;
 }
 void display()
 {
  cout<<"Member of gamma(Derived) class is: "<<endl;
  cout<<"                                   "<<s1<<endl;
  cout<<"                                   "<<s2<<endl;
 }
};

int main()
{
 clrscr();
 gamma G(20,30,11,22);
 G.show_a();
 G.show_b();
 G.display();
 getch();
 return 0;
}