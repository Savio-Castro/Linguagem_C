/*Exercícios1-CrieumprogramaemCquepeçaaousuárioparadigitarumnúmerointeiroeumcaractere.Seocaracteredigitadofor'a',oprogramadevecalcularodobrodonúmero.Seocaracteredigitadofor'b',oprogramadevecalcularotriplodonúmero.Casocontrário,oprogramadeveexibirumamensagemdeerro.*/
include <stdio.h>

int main()
{
    int n, resultado;
    char op; 
    
    printf("Informe um valor inteiro ");
    scanf("%d", &n);
    
    printf("Informe uma letra {a} para duplicar e {b} para triplicar ");
    scanf(" %c", &op);
    
    if(op=='a'){
        resultado=n*2;
        printf("resultado = %d\n"  , resultado);
    } 
    else if(op=='b'){
        resultado=n*3;
        printf("resultado = %d\n"  , resultado);
    }
    else{
        printf("Erro, nao posso continuar\n");
        
    }
    

    return 0;
}

