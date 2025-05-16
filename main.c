/******************************************************************************

Recebe 10 números, informa o menor e o maior, soma, média e os números menores que á média.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int numeros[10];
   
   // Receber dados
   for(int i = 0; i < 10; i++){
       printf("Informe um valor: ");
       scanf("%d", &numeros[i]);
   }

   // Exibir os dados
   printf("Os números informados são: ");
   for(int i = 0; i < 10; i++){
       printf("%d ", numeros[i]);
   }
   printf("\n");

   // Exibir o menor número
   int menor = numeros[0];
   for (int i = 1; i < 10; i++){  // Começa de 1 porque o primeiro valor já está em 'menor'
       if(numeros[i] < menor){
           menor = numeros[i];
       }
   }
   printf("O menor número é %d\n", menor);

   // Exibir o maior número
   int maior = numeros[0];
   for (int i = 1; i < 10; i++){  // Começa de 1 porque o primeiro valor já está em 'maior'
       if(numeros[i] > maior){
           maior = numeros[i];
       }
   }
   printf("O maior número é %d\n", maior);
   
   // Exibir a soma dos números
   int soma = 0;
   for(int i = 0; i < 10; i++){
       soma = soma + numeros[i];  // Soma todos os valores do array
   }
   printf("A soma dos números é %d\n", soma);
      
   // Exibir a média desses números
   float media = soma / 10.0;  // A média precisa ser calculada com ponto flutuante
   printf("A média dos números é %.2f\n", media);
       
   // Exibir números abaixo da média
   printf("Números menores que a média são: ");
   for(int i = 0; i < 10; i++){
       if(numeros[i] < media){
           printf("%d ", numeros[i]);
       }
   }
   printf("\n");

   return 0;
}
