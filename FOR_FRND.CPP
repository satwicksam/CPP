#include<iostream.h>
#include<conio.h>
class abc; //forward declaration of class..
class xyz
{
 int x;
 public:
 void setvalue(int i)
 {
  x=i;
 }
 friend void max(xyz,abc);
};

class abc
{
 int a;
 public:
 void setvalue(int i)
 {
  a=i;
 }
 friend void max(xyz,abc);
};

void max(xyz m, abc s)
{
 if(m.x>=s.a)
  cout<<m.x;
 else
  cout<<s.a;
}

int main()
{
 clrscr();
 abc AA;
 AA.setvalue(10);
 xyz XX;
 XX.setvalue(11);
 max(XX, AA);
 getch();
 return 0;
}