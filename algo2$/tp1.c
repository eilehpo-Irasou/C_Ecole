#include<stdio.h> 
#include<math.h>
#include<string.h>

typedef struct
{
  int jour;
  char mois[10];
  int annee;
} DATE;



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

/*
Écrire un programme calc qui permet de simuler une calculatrice (opérateurs
supportés : +,-,*,/ ), le programme n’est pas interactif l’utilisateur doit lui
indiquer les valeurs à calculer en argument du programme, par exemple :
./calc 2 + 5
*/

/*
Écrire un programme qui affiche le triangle de pascal jusqu’à n (n saisi au
clavier).
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
...

*/

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
   printf("%d",i);
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
  //exo1_q1_sans_amelioration(100);
  //exo1_q1_avec_amelioration(100);
  exo2_q6(2);
//exo2_q5(10);
  //exo1_q2(100);
 // exo2_q1();
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
/*
  DATE d1;
  d1.jour = 5;
  strcpy(d1.mois,"janvier");
  d1.annee = 2020;
  printf("%d %s %d ", d1.jour,d1.mois,d1.annee);*/

  return 0;
}
