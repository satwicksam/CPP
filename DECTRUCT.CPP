#include<iostream.h>
#include<conio.h>
int count=0;

class alpha
{
 count++;
 cout<<endl<<"No. of Object Created: "<<count;
};

~alpha()
{
 cout<<endl<<"No. of object Destroyed: "<<count;
 count--;

}; //end of the class

int main()
{
 cout<<endl<<endl<<"Enter main part--"<<endl;
 alpha a1,a2,a3,a4;
 {
  cout<<endl<<endl<<"Enter block 1"<<endl;
  alpha a5;
 }
 {
  cout<<endl<<endl<<"Enter block 2"<<endl;
  alpha a6;
 }
 cout<<endl<<endl<<"Re-Enter main"<<endl;
 getch();
 return 0;
}