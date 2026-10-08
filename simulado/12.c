/* Questao 12. Validacao de Entrada de Dados com Laco Garantido (do-while) — Escreva um programa em
C que solicite ao usuario uma nota valida no intervalo fechado de 0.0 a 10.0. Caso o usuario digite
um valor invalido (como -2.5 ou 11.0), o programa deve exibir uma mensagem de erro e repetir a
solicitacao utilizando a estrutura do-while. O programa so deve encerrar quando uma nota valida for
digitada. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota;

    // do-while porque precisa pedir a nota pelo menos uma vez antes de testar
    do
    {
        printf("Digite uma nota (0.0 a 10.0): ");
        scanf("%f", &nota);

        if (nota < 0.0 || nota > 10.0)
            printf("Erro: nota invalida. Tente de novo.\n");
    } while (nota < 0.0 || nota > 10.0);

    printf("Nota %.1f registrada com sucesso!\n", nota);

    system("PAUSE");
    return 0;
}
