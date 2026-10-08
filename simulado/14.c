/* Questao 14. Autenticacao de Senha com Limite Finito de Tentativas — Desenvolva um sistema de
autenticacao que defina uma senha numerica secreta (ex: 2026). O programa deve permitir que o
usuario tente digitar a senha no maximo 3 vezes usando um laco while ou for. Se acertar, exiba
'Acesso Concedido!' e encerre; se errar as 3 vezes, exiba 'Conta Bloqueada por Seguranca!'. */

#include <stdio.h>
#include <stdlib.h>

#define SENHA 2026

int main()
{
    int tentativas = 0, digitada, acertou = 0;

    // repete enquanto nao acertou e ainda tem tentativa sobrando
    while (tentativas < 3 && !acertou)
    {
        printf("Digite a senha (tentativa %d de 3): ", tentativas + 1);
        scanf("%d", &digitada);
        tentativas++;

        if (digitada == SENHA)
            acertou = 1;
        else
            printf("Senha incorreta.\n");
    }

    if (acertou)
        printf("Acesso Concedido!\n");
    else
        printf("Conta Bloqueada por Seguranca!\n");

    system("PAUSE");
    return 0;
}
