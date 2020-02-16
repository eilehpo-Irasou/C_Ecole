#include<stdio.h> 
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include <unistd.h>


int exo2_q1()
{
  int nbr, esp, i, j, p=1;
  
    printf("Entrez le nombre de lignes: ");
    scanf("%d",&nbr);
  
    for(i = 0; i < nbr; i++)
    {

        for(j = 0; j <= i; j++)
        {
            if ( i==0 || j==0 )
                p = 1;
            else
               p = p*(i-j+1)/j;
            printf(" %d",p);
        }
        printf("\n");
    }
    return 0;
}
  /* Le triangle de Pascal permet de donner les coefficients
  qui sont utilisés pour le développement de certaines
  expressions comme (a+b)² (l'identité remarquable)
  ou (a+b)^n.
  exemple:
  0 : 1          (a+b)0 = 1
1 : 1 1        (a+b)1 = 1*a + 1*b
2 : 1 2 1      (a+b)2 = 1*a2 + 2*a*b + 1*b2
3 : 1 3 3 1    (a+b)3 = 1*a3 + 3*a²*b + 3*a*b² + 1*b3
4 : 1 4 6 4 1  (a+b)4 = 1*a4 + 4*a3*b + 6*a²*b² + 4*a*b3 + 1*b4
*/




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
  return 0;
  
}
/*
Écrire un programme qui lit une suite de valeurs au clavier (la saisie se ter-
mine quand l’utilisateur saisi un nombre inférieur à 0) et afficher la variance
et l’écart-type.
V = 
σ = √V
*/


/*
La variance (ou fluctuation) est la moyenne arithmétique 
des carrés des écarts à la moyenne.
L'écart-type est la racine carrée de la variance.
*/


int exo2_q5( int taille)
{
  int i, j ;
  for ( i = 1; i < taille; i++)
  {
   //printf("%d",i);
    for ( j = 1; j < taille; j++)
    {
     // printf("%d",j);
      /* code */
      if ((j==(taille-i))|| j==i || i== (taille/2))
      
      {
        printf(" *");
        
      }
      else
      {
        printf(" ");
      }
      
      
    }
    printf("\n");
    sleep(1);
  }
  return 0;
}

int exo2_q6(int taille_matrice_carree)
{
  int i,j;
  int m1[taille_matrice_carree][taille_matrice_carree];
  int m2[taille_matrice_carree][taille_matrice_carree];
  int m_multi[taille_matrice_carree][taille_matrice_carree];
  //matrice 1
  //printf("Matrice 1,quelle taille ? Y*Y");
  //scanf("%d",&taille_matrice_carree);
  for ( i = 0; i < taille_matrice_carree; i++)
  {
    for ( j = 0; j < taille_matrice_carree; j++)
    {
      printf("Element de m1\n[%d][%d]",i,j);
      scanf("%d",&m1[i][j]);
    }
  }
  //matrice 2

   //printf("Matrice 2,quelle taille ? Y*Y");
  //scanf("%d",&taille_matrice_carree);
  for ( i = 0; i < taille_matrice_carree; i++)
  {
    for ( j = 0; j < taille_matrice_carree; j++)
    {
      printf("Element de m2\n[%d][%d]",i,j);
      scanf("%d",&m2[i][j]);
    } 
  }

  //affichage matrice 1
  printf("matrice 1\n");
  for ( i = 0; i < taille_matrice_carree; i++)
  {
    for (j = 0; j < taille_matrice_carree; j++)
    {
      printf("%7d",m1[i][j]);
      
    }
    printf("\n");
  }

  //affichage matrice 2
  printf("matrice 2\n");
  for ( i = 0; i < taille_matrice_carree; i++)
  {
    for (j = 0; j < taille_matrice_carree; j++)
    {
      printf("%7d",m2[i][j]);
      
    }
    printf("\n");
  }
//affectation multiplication
int k;
for ( i = 0; i < taille_matrice_carree ; i++)
{
  for (j = 0; j <  taille_matrice_carree ; j++)
  {
    m_multi[i][j]=0;
    for (k = 0; k < taille_matrice_carree; k++)
    {
      /* code */
      m_multi[i][j]+=m1[i][k]*m2[k][j];
    }
    
  }
  
}

printf("resultat\n");

for ( i = 0; i <  taille_matrice_carree ; i++)
{
  for (j = 0; j <  taille_matrice_carree ; j++)
  {
    printf("%7d",m_multi[i][j]);
    
  }
  printf("\n");
  /* code */
}



  


  return 0;
}


int main(int argc, char const *argv[])
{
	printf("exo 2 q1\n");
	exo2_q1();
	printf("exo 2 q3\n");
	exo2_q3();
	printf("exo 2 q5\n");
	exo2_q5(4);
	printf("exo 2 q6\n");
	exo2_q6(4);
	return 0;
}