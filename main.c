#include <stdio.h>

int soustration(int x, int y)
{
    return  x -y;
}

int main() 
{

    int resultat = 0; 
    int x ;
    int y ;

    printf("hello world\n");
    printf("bonjour à tous \n");
    printf("hola a todos \n");

    x = 10;
    y = 3;

    //printf("%d - %d = %d \n",x, y, soustration(x, y));

    x = 100;
    y = 86;
    printf("%d - %d = %d \n",x, y, soustration(x, y));

  return 0;
}
