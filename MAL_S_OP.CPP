#include<iostream.h>
#include<conio.h>
#include<string.h>
class string
{
 char *p; int len;
 public:
 string()
 {
  len=0;
  p=new char[len+1];
 }
 string(const char *s);
 string(const string &s);
 ~string()
 {
  delete p;
 }
 friend string operator+(const string &s, const string &t);
 friend int operator<=(const string &s, const string &t);
 friend void show(const string s);
};

string::string(const char *s)
{
 len=strlen(s);
 p=new char[len+1];
 strcpy(p,s);
}

string::string(const string &s)
{
 len=s.len;
 p=new char[len+1];
 strcpy(p,s.p);
}

string operator+(const string &s, const string &t)
{
 string tmp;
 tmp.len=s.len+t.len;
 tmp.p=new char[tmp.len+1];
 strcpy(tmp.p,s.p);
 strcat(tmp.p,t.p);
 return(tmp);
}

int operator<=(const string &s, const string &t)
{
 int m=strlen(s.p);
 int n=strlen(t.p);
 if(m<=n)
  return 1;
 else
  return 0;
}

void show(const string s)
{
 cout<<s.p;
}

int main()
{
 string s1="Mr."; string s2="Hero"; string s3="Satwick";
 string t1,t2,t3;
 t1=s1;
 t2=s2;
 t3=s1+s3;
 cout<<endl<<"T1= ";show(t1);
 cout<<endl<<"T2= ";show(t2);
 cout<<endl<<"T3= ";show(t3);
 cout<<"\n";
 if(t1<=t3)
 {
  show(t1);
  cout<<" is smaller than ";
  show(t3);
  cout<<endl;
 }
 else
 {
  show(t3);
  cout<<" smaller than ";
  show(t1);
  cout<<endl;
 }
 getch();
 return 0;
}