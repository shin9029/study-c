#include <stdio.h> 
int volume (int a,int b,int c);

int main(void) 
{
  int a = 50;
  int b = 20;
  int c = 10;
  int vol;
  
  vol = volume (a, b, c);
  
  printf ("%d\n", vol );
  
  return 0; 
}

int volume (int a,int b,int c)
{
  if ((a==0)||(b==0)||(c==0))
  {
    return 0;
  }
    else
    {
    return a*b*c;
  }
}
