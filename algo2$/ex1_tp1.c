#include<stdio.h> 
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include <unistd.h>
/*
Écrire un programme qui affiche les 100 premier nombres pairs, pour chaque
nombre n de [1..100] vérifier si le n est pair. Améliorer votre programme
pour n’afficher que les nombres pairs.
*/

int exo1_q1_sans_amelioration(int limite)
{
  int est_un_nombre_pair;
  for ( est_un_nombre_pair = 1; est_un_nombre_pair < limite; est_un_nombre_pair++)
  {
    if(est_un_nombre_pair%2==0)
    {
      printf("%d est pair\n",est_un_nombre_pair);
    }
    else
    {
      printf("%d non pair \n",est_un_nombre_pair);
    }
  }
  return 0;
}

int exo1_q1_avec_amelioration(int limite)
{
  int est_pair;
  for (est_pair= 1; est_pair < limite; est_pair++)
  {
    if (est_pair%2==0)
    {
      printf("Ce nombre est pair : %d \n ", est_pair);
    }
  }
return 0;
}

/*
Écrire un programme qui affiche les 100 premier nombres premiers (n est pre-
mier si il est divisible par 1 et par lui même).
*/

int exo1_q2(int limite)
{
  int i ,loop,premier; 
  for ( i = 2; i <= limite;)
  {
     premier = 1 ;
    for (loop = 2; loop <= i; loop++)
    {
      if ((i%loop)==0 && loop!=i)
      {
        premier = 0;
      }
      
    }
    if (premier != 0)
    {
      printf("%d est un nombre premier\n",i);
      i++;
    }
    else
    {
      i++;
    }
  }
  return 0;
}

/*
Écrire un programme qui permet de lire une suite de chiffres au clavier (la
saisie se termine quand l’utilisateur saisi un nombre négatif) et détermine le
minimum et le maximum de ces chiffres, les chiffres saisis ne sont pas tous
stockés en mémoire.
*/

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

  printf("min : %d et max : %d \n ",xmin, xmax );
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

  printf("min : %d et max : %d \n",xmin, xmax );
  return 0;
  
}

/*
Écrire un programme calc qui permet de simuler une calculatrice (opérateurs
supportés : +,-,*,/ ), le programme n’est pas interactif l’utilisateur doit lui
indiquer les valeurs à calculer en argument du programme, par exemple :
./calc 2 + 5
*/


int calculatrice(int x, char op , int y)
{

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



  int main(int argc, char const *argv[])
  {

printf("Exo 1 : question 1 sans amélioration\n");
    exo1_q1_sans_amelioration(9);
    printf("Exo 1 : question 1 avec amélioration\n");
    exo1_q1_avec_amelioration(9);
    printf("Exo 1 : question 2 : Afficher les nombres premiers.\n");
    exo1_q2(9);
    printf("Exo 1 : question 3 : trouver min et max. (ternaire) \n");
    q3_ternaire();
    printf("Exo 1 : question 3 : avec un le if\n");
    q3_avec_if();

  int x = atoi(argv[1]);
  int y = atoi(argv[3]);
  char op = *(argv[2]);
  printf("Exo 1 : question 4 : calculatrice \n");
calculatrice(x,op,y);

  
  
  }
