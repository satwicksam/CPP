#include<iostream.h>
#include<conio.h>
class time
{
 int hour,min,sec;
 public:
 time()
 {
  hour=0;
  min=0;
  sec=0;
 }
 time(int, int, int);
 void sum(time t1, time t2)
 {
  min=t1.min+t2.min;
  hour=min/60;
  min=min%60;
  hour=hour+t1.hour+t2.hour;
  cout<<endl<<hour<<" hour : "<<min<<" minute.";
 }
 void sum1(time t1, time t2)
 {
  sec=t1.sec+t2.sec;
  min=sec/60;
  sec=sec%60;
  min=min+t1.min+t2.min;
  hour=min/60;
  min=min%60;
  hour=hour+t1.hour+t2.hour;
  cout<<endl<<hour<<" hour : "<<min<<" minute : "<<sec<<" Second.";
 }
};

time::time(int h, int m, int s)
 {
  hour=h;
  min=m;
  sec=s;
 }

//**********************************Main___Part*****************************//
int main()
{
 int hour[3],min[3],sec[3],n,i;
 char s;
 clrscr();

 for(i=0;i<2;i++)
 {
  cout<<"Enter time for Time-"<<i+1<<":--"<<endl;
  cout<<"Enter Hour: ";
  cin>>hour[i];
  cout<<"Enter Minute: ";
  cin>>min[i];
  cout<<"Enter Second: ";
  cin>>sec[i];
  cout<<endl;
 }

 time t1(hour[0],min[0],sec[0]);
 time t2(hour[1],min[1],sec[1]);
 time t3;
 do
 {
  cout<<"Enter 1 for add without second."<<endl;
  cout<<"Enter 2 for add with second."<<endl;
  cin>>n;
  if(n==1)
  {
   t3.sum(t1,t2);
  }
  else if(n==2)
  {
   t3.sum1(t1,t2);
  }
  else if(n==3)
  {
   break;
  }
 cout<<endl<<endl<<"Do you want to continue? (Y/N)--";
 cin>>s;
 cout<<endl;
 }
 while((s=='Y') || (s=='y'));
getch();
return 0;
}