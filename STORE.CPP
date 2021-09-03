#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>

void additem(int n)
{
 char trno[20], itna[100];
 float qt;
 ofstream f1[50];
 for(int i=n;i<=n;i++)
 {
 f1[i].open("store", ios::app);
 cout<<"Enter Truck Number: "; cin>>trno; f1[i]<<trno<<"  ";
 cout<<"Enter Item name: "; cin>>itna; f1[i]<<itna<<"  ";
 cout<<"Enter Quantity in kg: "; cin>>qt; f1[i]<<qt<<endl;
 f1[i].close();
 }
}

void showdata(int m)
{
 ifstream ff[50];
 char trno[20]; char itna[100]; float qt;
 cout<<" ________________________________________ "<<endl;
 cout<<"|  TRUCK_NUM  |  ITEM_NAME  |  QUANTITY  |"<<endl;
 cout<<"|----------------------------------------|"<<endl;
 for(int i=0; i<m; i++)
 {
  ff[i].open("store");
  ff[i]>>trno; ff[i]>>itna; ff[i]>>qt;
  cout<<"|  "<<trno<<"  |  "<<itna<<"  |  "<<qt<<"  |"<<endl;
  ff[i].close();
 }
 cout<<"|________________________________________|"<<endl;
}

int main()
{
 int op,c=0;
 char o;
 clrscr();
 do
 {
  cout<<"Enter 1: for add for register new truck."<<endl;
  cout<<"Enter 2: for see the list of Items."<<endl;
  cout<<"Enter your option: "; cin>>op;
  switch(op)
  {
   case 1: {additem(c); c++;} break;
   case 2: showdata(c); break;
   default: cout<<"Please enter a valid number!!"<<endl;
  }
  cout<<"Do you want to continue? (Y/N): "; cin>>o;
 }
 while(o=='Y' || o=='y');
 getch();
 return 0;
}