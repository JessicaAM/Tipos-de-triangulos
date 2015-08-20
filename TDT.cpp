#include<stdio.h>
#include<stdlib.h>

int a, b, c;

main ()
{
     printf("Tipos de triangulos\n\n");
     printf("\nIngresa el valor del primer lado: ");
     scanf("%d", &a);
     printf("\nIngresa el valor del segundo lado: ");
     scanf("%d", &b);
     printf("\nIngresa el valor del tercer lado: ");
     scanf("%d", &c);
     if((a==b)&&(b==c))
     {
          printf("\nEs un tringulo equilatero\n\n");
     }
     else
     {
         if((a==b)||(b==c)||(c==a))
         {
              printf("\nEs un triangulo isoseles\n\n");
         }
         else
             printf("\nEs un triangulo escaleno\n\n");
     }
     
     system("pause");
     return 0;
}
