#include<iostream.h>
#include<conio.h>
#include<string.h>
class string
{
 char *p; int l;
 public:
 string()
 {
  l=0;
  p=new char[l+1];
 }
 string(const char *s);
 string(const string &s);
 friend int operator==(const string &s,const string &s1);
 friend void show(const string &s);
};

string::string(const char *s)
{
 l=strlen(s);
 p=new char[l+1];
 p=strcpy(p,s);
}
string::string(const string &s)
{
 l=s.l;
 p=new char[l+1];
 p=strcpy(p,s.p);
}

int operator==(const string &s, const string &s1)
{
 int m=strlen(s.p);
 int n=strlen(s1.p);
 static count;
 if (m==n)
 {
  for (int i=0; i<m && i<n; i++)
  {
   if (s.p[i]==s1.p[i])
    count++;
  }
 }
 if(count==m && count==n)
  return 1;
 else
  return 0;
}

void show(const string &s)
{
 cout<<s.p;
}

int main()
{
 string s1="Satwick", s2="Satwick";
 string t1,t2;
 t1=s1;
 t2=s2;
 clrscr();
// show(t1);
// show(t2);

 if(t1==t2)
 {
  show(t1);
  cout<<" "<<"is equal to ";
  show(t2);
 }
 else
 {
  show(t1);
  cout<<" "<<"is not equal to ";
  show(t2);
 }
 getch();
 return 0;
}