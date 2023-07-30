#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main( )
{
    char enter;
    int i, valores[20], maiorValor, menorValor;
    for (i = 0; i < 20; i++) {

        printf("Digite um valor: ");
        scanf("%d", &valores[i]);

        if(i == 0){
            maiorValor = valores[i];
            menorValor = valores[i];
        }
        
        else {

            if(maiorValor < valores[i]){
                maiorValor = valores[i];
            }

            if(menorValor > valores[i]){
                menorValor = valores[i];
            }

        }
    }

    printf("\nMenor valor: %d \n", menorValor);
    printf("Maior valor: %d \n\n", maiorValor);


    printf("Pressione qualquer tecla para fechar");
    _getch();

    return 0;
}


