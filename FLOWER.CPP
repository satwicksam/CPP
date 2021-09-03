#include<iostream.h>
#include<conio.h>
class flower
{
 public:
  void fregrance(char *f)
  {
   cout<<f;
  }
  void colour(char *c)
  {
   cout<<c;
  }
  void time(char *t)
  {
   cout<<t;
  }
};

int main()
{
int i;
clrscr();
flower rose,lotus,sunflower;
cout<<"----Enter 1 for rose, 2 for lotus, 3 for sunflower----"<<endl;
cin>>i;
if(i==1)
{
cout<<"Rose:--";
rose.fregrance("Fragrance: yes. ");rose.colour("Colour: Red. ");rose.time("Time: Night.\n");
}
else if(i==2)
{
cout<<"Lotus:--";
lotus.fregrance("Fragrance: No. ");lotus.colour("Colour: Pink. ");lotus.time("Time: All Time.\n");
}
else if(i==3)
{
cout<<"Sunflower:--";
sunflower.fregrance("Fragrance: No. ");sunflower.colour("Colour: Yellow. ");sunflower.time("Time: Day.\n");
}
getch();
return 0;
}
