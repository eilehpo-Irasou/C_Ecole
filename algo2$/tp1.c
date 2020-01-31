#include<stdio.h> 


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





int main(int argc , char * argv[])
{
  //q3_ternaire();
  // q3_avec_if();

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

  return 0;
}
