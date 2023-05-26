#include <stdio.h>

int main()
{
float jaca, abacaxi;
int mamao;

printf("Capacidade maxima de peso do elevador: ");
scanf("%f", &jaca);

for(mamao=1; mamao<=5; mamao++){

    printf("Digite o peso da pessoa numero %d: ", mamao);
    scanf("%f", &abacaxi);
abacaxi=abacaxi+abacaxi;

}

if(abacaxi<=jaca){

    printf("O elevador aguenta os 5 elementos\n");

}

else{

    printf("O elevador nao aguenta os 5 nao, procurem fazer dieta\n");

}

return 0;
}
