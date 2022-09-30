#include <stdio.h>
// sucecion 5,15,45,135
int inicial= 0;
int inicial2=5;
int razon= 5 ;

int expon(){
    inicial = inicial2;
    inicial2 = razon;
    razon = razon * 3 ; 
    return razon;
}

int main()
{
    int numero;
    printf("Ingresa un numero\n:");
    scanf("%i",&numero);
    printf("5\n");
    for(int i = 0; i < numero; i++)
    {
        printf("%d\n", expon());
    }
        
     return 0;
}