#include<iostream.h>
#include<conio.h>
int main()
{
long int pincode=713423;
long int &emp_code=pincode;
clrscr();
cout<<"my emp_id is"<<emp_code;
cout<<"\nEnter your pincode:";
cin>>pincode;
cout<<"\nyour emp_id is"<<emp_code;
cout<<"\nyour pin is"<<pincode;
getch();
return 0;
}