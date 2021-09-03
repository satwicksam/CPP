#include<iostream.h>
#include<conio.h>
class sat
{
 int a,b;
 public:
  void setvalue(int x, int y)
  {
   a=x;
   b=y;
  }
  friend float avg(sat a);
};

float avg(sat a) //function definition
{
 return (a.a+a.b)/2.0;
}

int main()
{
 sat m;
 m.setvalue(20,30);
 cout<<"Avarage Value: "<<avg(m);
 getch();
 return 0;
}