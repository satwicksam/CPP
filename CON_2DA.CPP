#include<iostream.h>
#include<conio.h>
class matrix
{
 int **p; //pointer to matrix
 int d1,d2;
 public:
 matrix(int,int);
 void getelement(int i,int j,int value)
 {
  p[i][j]=value;
 }
 int & putelement(int i,int j,int value)
 {
  return p[i][j]=value;
 }
};

matrix::matrix(int x,int y)
{
 d1=x; d2=y;
 p=new int*[d1]; //create an array pointer
 for(int i=0;i<d1;i++)
  p[i]=new int[d2]; //creates space for each row
}

int main()
{
 int m,n;
 cout<<"Enter size of matrix: ";
 cin>>m>>n;
 matrix (m,n); //matrix object is created
 int i,j,value;
 for(i=0;i<m;i++)
  for(j=0;j<n;j++)
  {
   cin>>value;
   cout<<A.getelement(i,j,value);
  }
  cout<<"\n";
 cout<<A.putelement(1,2);
 getch();
 return 0;
}