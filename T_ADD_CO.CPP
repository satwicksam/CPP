#include<iostream.h>
#include<conio.h>
class time
{
 int hour, min;
 public:
 time()
 {
  hour=0;
  min=0;
 }
 time(int h, int m)
 {
  hour=h;
  min=m;
 }
 ~time()
 {
  hour=0; min=0;
 }
 time(time, time);
 void showtime();
};

time::time(time t1, time t2)
{
 min=t1.min+t2.min;
 hour=min/60;
 min=min%60;
 hour=hour+t1.hour+t2.hour;
}
void time::showtime()
{
 cout<<hour<<" hours & "<<min<<" minutes."<<endl;
}

int main()
{
 time T;
 time T1(12,30);
 time T2(5,50);
 time T3(T1,T2);
 clrscr();
 T3.showtime();
 getch();
 return 0;
}