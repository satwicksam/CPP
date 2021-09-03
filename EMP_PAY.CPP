#include<iostream.h>
#include<conio.h>
class emp
{
 protected:
  char *name;
  char *emp_id;
  char *dep;
 public:

 void getdata(char *n, char *id, char *d)
 {
  name=new char[100];
  name=n;
  emp_id=new char[20];
  emp_id=id;
  dep=new char[50];
  dep=d;
 }
};

class salary
{
 protected:
  float basic, hra, da, gr_sal;
 public:
  void cal_sal(float, float, float);
};
void salary::cal_sal(float b, float h, float d)
{
 basic=b;
 hra=h;
 da=d;
 hra=(basic*hra)/100;
 da=(basic*da)/100;
 gr_sal=basic+hra+da;
}

class show:public emp, public salary
{
 public:
 void showdetails()
 {
  cout<<endl<<"*************************************"<<endl;
  cout<<"Employee Name: "<<name<<endl;
  cout<<"Employee Id: "<<emp_id<<endl;
  cout<<"Employee Department: "<<dep<<endl;
  cout<<"*************************************"<<endl;
  cout<<"Basic Salary: "<<basic<<endl;
  cout<<"HRA: "<<hra<<endl;
  cout<<"DA: "<<da<<endl;
  cout<<"Total Salary: "<<gr_sal<<endl;
 }
};

int main()
{
 show s1;
  char na[100],emid[20],de[50];
  float ba,hh,dd;
  clrscr();
  cout<<"Enter employee name: ";
  cin>>na;
  cout<<"Enter employee id: ";
  cin>>emid;
  cout<<"Enter employee department: ";
  cin>>de;
  cout<<"Enter Basic Salary: ";
  cin>>ba;
  cout<<"Enter the percentage of HRA: ";
  cin>>hh;
  cout<<"Enter the percentage of DA: ";
  cin>>dd;
  s1.getdata(na,emid,de);
  s1.cal_sal(ba,hh,dd);
  s1.showdetails();
 getch();
 return 0;
}