#include<iostream.h>
#include<conio.h>
int main()
{
 int a[30][30],i,d,e,j,n;
 clrscr();
 cout<<"Enter the value of n for (n x n) martix-- ";
 cin>>n;
 cout<<"Enter the matrix values below:--"<<endl;
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   cin>>a[i][j];
  }
 }
 cout<<endl<<"Your Matrix is-- "<<endl;
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   cout<<a[i][j]<<" ";
  }
  cout<<endl;
 }

 d=n/2; //divide matrix rows-- 1st part
 //e=n-d; //divide matrix rows-- 2nd part
 cout<<"\nYour Result is:-"<<endl;
 for(i=0;i<d;i++)
 {
  for(j=0;j<n;j++)
  {
   cout<<a[i][j]<<" ";
  }
  cout<<endl;
 }
 cout<<endl;

 int l=i; //putting the value of j in k from the last for loop..

  for(i=l;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   cout<<a[i][j]<<" ";
  }
  cout<<endl;
 }
getch();
return 0;
}