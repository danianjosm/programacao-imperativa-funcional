/* Questao 08. Validacao de Entrada de Dados com Laco Garantido (do-while) — Escreva um programa
em C que solicite ao usuario que informe uma nota valida no intervalo fechado de 0.0 a 10.0. Caso o
usuario digite um valor fora deste intervalo (por exemplo, -5.0 ou 12.5), o programa deve exibir uma
mensagem de erro e repetir a solicitacao usando a estrutura do-while. O programa so deve encerrar
quando um valor valido for digitado, exibindo a mensagem 'Nota registrada com sucesso!'. */

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
            printf("Erro: nota fora do intervalo. Tente de novo.\n");
    } while (nota < 0.0 || nota > 10.0);

    printf("Nota registrada com sucesso!\n");

    system("PAUSE");
    return 0;
}
