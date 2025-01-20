#include <stdio.h>
int main (){

/*
Incremento (++)
Pré incremento ++a
Pós incremento a++
Decremento (--)
Pré decremento --a
Pós decremento a--
*/

    int numero1 = 1, resultado;
    

printf ("Antes incremento: %d\n", numero1);

resultado = numero1++; //numero1 = numero1 +1. ou   //numero1 += 1.  
printf("Após-Pós incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);  
                                                                                  
resultado = ++numero1; //numero1 = numero1 +1. ou   //numero1 += 1.
printf("Após-Pré incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

resultado = numero1--; //numero1 = numero1 -1. ou  //numero1 -= 1.
printf ("Após dencremento: %d\n", numero1, resultado); 

resultado = --numero1; //numero1 = numero1 -1. ou  //numero1 -= 1.
printf ("Pré dencremento: %d\n", numero1, resultado); 

return 0;
};