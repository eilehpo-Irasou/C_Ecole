#include<stdio.h> 
#include<math.h>
#include<string.h>

typedef struct
{
  int jour;
  char mois[10];
  int annee;
} DATE;





int q3_ternaire()
{
  int x, xmin, xmax;
  scanf("%d",&x);
  xmin = x;
  xmax = x;
  while(x>0)
    {
      xmax= (xmax < x )? x : xmax;
      xmin = (xmin > x)? x : xmin;
      scanf("%d",&x);
    }

  printf("min : %d et max : %d ",xmin, xmax );
  return 0;
}

int q3_avec_if()
{

   int x, xmin, xmax;
  scanf("%d",&x);
  xmin = x;
  xmax = x;
  while(x>0)
    {
      if(xmax < x ){xmax = x;}
      if(xmin > x ){xmin = x;}
      scanf("%d",&x);
    }

  printf("min : %d et max : %d ",xmin, xmax );
  return 0;
  
}




int exo2_q3()
{
  float v, sigma;
  int s, n , x;
  n = 0;
  s = 0;
  scanf("%d",&x);
  while( x >= 0)
    {
      s = s + (x*x);
      n++;
      scanf("%d", &x);
    }
  v = (1/(float) (n)*s );
  sigma = sqrt(v);

  // il y aura deux chiffres après la virgule
  printf("sigma : %.2f \n ", sigma);
  
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



int main(int argc , char * argv[])
{
  //int i = 5;
  // int j = 6 ;
  //int t[10]={0,1,2,3,4,5,6,7,8,9};
  // pour utiliser la librairie math.h
  // gcc -lm
  //exo2_q3();
  //q3_ternaire();
  // q3_avec_if();

  //exo3_q2(&i,&j);
  //exo3_q3(t,10,&i,&j);
  //exo3_q4();
  
  
  /*
  int x = atoi(argv[1]);
  int y = atoi(argv[3]);
  char op = *(argv[2]);
  int res = 0 ;
  if(op == '+')
    {
      res = x + y ; 
    }

  else if( op == 'x')
    {
      res = x * y ;
    }

  else if(op == '-')
    {
      res = x - y ;
    }

  else if(op == '/')
    {
      res = x/y;
    }

  else if(op == '%')
    {
      res = x % y;
    }

  else
    {
      printf("non pris en charge ");
    }

  printf("reponse pour la calculatrice %d", res);
  */

  DATE d1;
  d1.jour = 5;
  strcpy(d1.mois,"janvier");
  d1.annee = 2020;
  printf("%d %s %d ", d1.jour,d1.mois,d1.annee);

  return 0;
}
