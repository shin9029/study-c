#include <stdio.h> 

int main() 
{
  int i;
  int score[5];
  
    score[0]=20;
    score[1]=60;
    score[2]=70;
    score[3]=80;
    score[4]=90;
  int sum = 0;
  float avg = 0.0;
  
  for (i=0;i<5;i++)
  {
  sum += score[i];
  }
  avg = (float)sum/5;
  printf("%f", avg);
  
  return 0;
}
