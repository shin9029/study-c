#include <stdio.h>
#include <string.h>

struct student
{
  char name[20];
  int age;
};
int main()
{  
  struct student s[3] =
  {
    {"김하하",17},
    {"박호호",19},
    {"최히히",18}
  };
   
    int i;
   for (i=0;i<3;i++)
   {
        printf ("%s %d\n",s[i].name,s[i].age);
   } 
 return 0;
}
