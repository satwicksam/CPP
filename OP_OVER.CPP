#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class vector
{
 int a,b,c;
 public:
 void getdata(int,int);
 void display();
 void displayresult();
 void operator*();
};

void vector::getdata(int x,int y)
{
 a=x, b=y;
}
void vector::display()
{
 cout<<endl<<"You Enter: "<<a<<" & "<<b;
}
void vector::displayresult()
{
 cout<<endl<<"Your result is:- ";
 cout<<c;
}
void vector::operator*()
{
 if(b==0)
 {
  c=1;
  exit;
 }
 else
 {
  c=a;
  for(int i=1;i<b;i++)
  {
   c*=a;
  }
 }
}

int main()
{
 int a,b;
 clrscr();
 cout<<endl<<"Enter the value of a and b for calculate a^b: ";
 cin>>a>>b;
 vector s;
 s.getdata(a,b);
 s.display();
 *s;
 s.displayresult();
 getch();
 return 0;
}