#include<iostream.h>
#include<conio.h>
#include<fstream.h>
int main()
{
 clrscr();
 ofstream of("ITEM");  //connect ITEM file to of
  cout<<"Enter Item Name: ";
  char name[30];
  cin>>name;
  of<<name<<endl;  //write to file ITEM
  cout<<"Enter Item Cost: ";
  float co;
  cin>>co;
  of<<co<<endl;
  of.close();  //disconnect ITEM file to of

 ifstream of1("ITEM");  //connect ITEM file to of1
  of1>>name;  //read name from file ITEM
  of1>>co;
  cout<<"Item Name: "<<name<<endl;
  cout<<"Item Cost: "<<co<<endl;
  of1.close();

 getch();
 return 0;
}