/*************************************************************************
1. Crie um programa em C que solicite ao utilizador um conjunto de 3 valores inteiros, guarde-os num
vector e apresente os seguintes cálculos no ecrã:
a. Contabilizar o número de valores que são negativos;

b. Contabilizar a média dos valores positivos inseridos;

c. Contabilizar os múltiplos de 3 e de 5.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(){

  int vetor[3],i,valores_negativos,multiplo,multiplos,vetor2[3];
  float media;

  int numerosnegativos (int vetor[]); // primeira funçao
  float medianumeros (int vetor[]); // segunda funçao
  int multiplos3_5(int vetor[],int multi,int *vetormultiplos[]); // terceira funçao


  for (i=0;i<3;i++){

      printf("Digite o %i numero do vetor: ",(i+1)); // 5 6 7
      scanf("%i",&vetor[i]);
  }

      printf("Insira o numero que deseja saber se eh multiplo dos numeros do vetor: "); //2
      scanf("%d",&multiplo);




     valores_negativos=numerosnegativos(vetor);
     media=medianumeros(vetor);
     multiplos=multiplos3_5( vetor,multiplo,&vetor2);

     printf("\n\nOs valores negativos sao: %i\n",valores_negativos);
     printf("A media dos numeros positivos que inseriu eh: %.2f\n",media);
     printf("A quantidade de multiplos dos numeros que inseriu sao: %i \n",multiplos);


return 0;
}


int numerosnegativos (int vetor[]){
    int i, val_negat=0;
    for (i=0;i<3;i++){
        if(vetor[i]<0){
            val_negat++;
        }
    }
    return val_negat;
}


float medianumeros (int vetor[]){
 int i,numerospositivos=0,soma=0;
 float media;

  for (i=0;i<3;i++){
    if (vetor[i]>0){
        numerospositivos=numerospositivos+1;
        soma=soma+vetor[i];
        media=(float)soma/numerospositivos;
    }
    }


    return media;
    }

int multiplos3_5(int vetor[],int multi,int *vetormultiplos[] ){
    int i,contagemmultiplos=0,pos=0;

    for(i=0;i<3;i++){
        if(vetor[i]%multi==0){
                contagemmultiplos++;
                vetormultiplos[pos]=vetor[i];
                pos++;

        }

}

printf("\n\nO numero que escolheu eh multiplo de: ");
for (i=0;i<pos;i++){

printf("%d    ",vetormultiplos[i]);
     }

        return contagemmultiplos;
}


