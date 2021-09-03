#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
int i,j;

void swap(char arr[i])
{
 char temp[1];
 temp[0]=arr[i];
 arr[i]=arr[i+1];
 arr[i+1]=arr[i];
}

int main()
{
 char arr[50][15];
 int n,i;
 clrscr();
 cout<<"Enter how many name you have to enter: "; cin>>n;
 cout<<"Enter names: "<<endl;
 for(i=0; i<n; i++)
 {
  cin>>arr[i];
 }

 for(i=0; i<n-1; i++)
 {
  for(j=0; j<=15; j++)
  {
   if(arr[i+1][j]<arr[i][j])
   {
    swap(arr[i]);
   }
  }
 }

 cout<<"Sorted names are:"<<endl;
 for(i=0; i<n; i++)
 {
  cout<<arr[i]<<endl;
 }

 getch();
 return 0;
}