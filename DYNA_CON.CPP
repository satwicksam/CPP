#include<iostream.h>
#include<conio.h>
#include<string.h>
class String
{
 char *name;
 int l;
 public:
  String()
  {
   l=0;
   name= new char[l+1];
  }

  String(char *s)
  {
   l=strlen(s);
   name= new char[l+1];
   strcpy(name,s);
  }

  void display()
  {
   cout<<name<<endl;
  }

  void join(String &a,String &b)
  {
   l=a.l+b.l;
   delete name;
   name=new char[l+1];
   strcpy(name,a.name);
   strcat(name,b.name);
  }
};

int main()
{
 char *first="Mahendra";
 String name1(first),name2("Sing"),name3("Dhoni"),s1,s2;
 clrscr();
 s1.join(name1,name2);
 s2.join(s1,name3);
 name1.display();
 name2.display();
 name3.display();
 s1.display();
 s2.display();
 getch();
 return 0;
}