//Basic Calculator using function...

#include<iostream.h>
#include<conio.h>
class cal
{
 public:
 inline int sum(int a, int b) {return(a+b);}
 inline int multiply(int a, int b) {return(a*b);}
 inline int subtract(int a, int b) {return(a-b);}
 inline int divide(int a, int b) {return(a/b);}
 inline int mod(int a, int b) {return(a%b);}
};

int main()
{
 cal op;
 int a,b,o;
 clrscr();
 cout<<"Enter two Numbers:";
 cin>>a>>b;
 cout<<"Enter:\n1 for Addition\n2 for multiplication\n3 for subtraction\n4 for divition\n5 for mod\n";
 cin>>o;
 switch(o)
 {
 case 1:
  cout<<op.sum(a,b);
  break;
 case 2:
  cout<<op.multiply(a,b);
  break;
 case 3:
  cout<<op.subtract(a,b);
  break;
 case 4:
  cout<<op.divide(a,b);
  break;
 case 5:
  cout<<op.mod(a,b);
  break;
 default:
  cout<<"Enter a valid number!";
  break;
 }
 getch();
 return 0;
 }
