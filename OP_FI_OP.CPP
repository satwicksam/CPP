#include<iostream.h>
#include<fstream.h>
#include<conio.h>
int main()
{
 clrscr();
 ofstream fout;
 fout.open("Country");
 fout<<"INDIA  ";
 fout<<"WEST BENGAL  ";
 fout<<"USA\n";
 fout.close();

 ofstream fout1;
 fout1.open("Capital");
 fout1<<"NEW DELHI  ";
 fout1<<"KOLKATA  ";
 fout1<<"WASHINGTON\n";
 fout1.close();

 const int n=80;
 char line[n];

 ifstream fin;

 fin.open("Country");
 cout<<"Content of Country File:-\n";
 while(fin) //check end-of-file
 {
  fin.getline(line,n);
  cout<<line;
 }
 fin.close();

 ifstream fin1;
 fin1.open("Capital");
 cout<<"\n\nContent of Capital File:-\n";
 while(fin1)
 {
  fin1.getline(line,n);
  cout<<line;
 }
 fin1.close();

 getch();
 return 0;
}
