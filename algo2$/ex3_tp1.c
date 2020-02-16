#include<stdio.h> 
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include <unistd.h>


int exo3_q1()
{
	int varun;
	int vardeux;
	int vartrois;
	varun = 300;
	vardeux = 4;
	vartrois = 234567;
	printf("Contenu varun : %d ; adresse de varun : %p\n", varun,&varun );
	printf("Contenu vardeux : %d ; adresse de vardeux : %p\n", vardeux,&vardeux );
	printf("Contenu vartrois : %d ; adresse de vartrois : %p\n", vartrois,&vartrois );
	return 0;
}



int exo3_q2(int *x, int *y)
{
  int tmp;
  tmp = *x;
  *x = *y;
  *y = tmp;

  printf("%d %d ", *x, *y);
  return 0;
}

int exo3_q3(int *t,int size, int *min, int *max)
{
  int i ; 
  *min = t[0];
  *max = t[0];
  for(i = 1; i < size; i++)
    {
      // le contenu de t si sup à contenu de maxmax 
      if(*(t+i) > *max)
	{
	  *max = *(t+i);
	}
      if(t[i] < *min)
	{
	  *min = t[i];
	}
    }
    printf("%d %d", *min,*max);
  return 0;
}


int exo3_q4()
{
  int mj = 0 ;
  int ms = 0 ;
  int i = 0;
  char ch[50];
  
  scanf("%s",ch);
  while(ch[i]!='\0')
    {
      if(ch[i] >= 'a' && ch[i] <= 'z'){ms++;}
      if(ch[i] >= 'A' && ch[i] <= 'Z'){mj++;}
      i++;
      
    }
  printf("%d %d ", ms, mj);
  
  return 0;
}


int main(int argc, char const *argv[])
{
	exo3_q1();
/*
	int i = 5;
  	int j = 6 ;
  int t[10]={0,1,2,3,4,5,6,7,8,9};
	exo3_q2(&i,&j);
	exo3_q3(t,10,&i,&j);
	exo3_q4();*/
	return 0;
}