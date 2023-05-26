#include <stdio.h>

#define Custo_copia 0.0305

int main(){
    int previsao_vendas, custo_fixo, num_paginas;
    float custo_producao, preco_consumidor;

    printf("Informe a previsão de vendas: ");
    scanf("%d",&previsao_vendas);
    printf("Informe o custo fixo: ");
    scanf("%d",&custo_fixo);
    printf("Informe o número de páginas: ");
    scanf("%d",&num_paginas);

    custo_producao = Custo_copia * num_paginas;
    preco_consumidor = (custo_producao + custo_fixo) / previsao_vendas;

    printf("Preço de venda sugerido: R$%.2f\n",preco_consumidor);

    return 0;
}

