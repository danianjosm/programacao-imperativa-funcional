/* Questao 16. Autenticacao de Senha com Limite Finito de Tentativas — Desenvolva um sistema de
autenticacao que defina uma senha numerica secreta (ex: 2026). O programa deve permitir que o
usuario tente digitar a senha no maximo 3 vezes. Se o usuario acertar a senha, o programa deve
imprimir 'Acesso Concedido!' e o numero de tentativas utilizadas, encerrando a execucao. Se errar
as 3 tentativas, o programa deve exibir 'Conta Bloqueada por Seguranca!'. */

#include <stdio.h>
#include <stdlib.h>

#define SENHA 2026

int main()
{
    int tentativa, digitada, acertou = 0;

    for (tentativa = 1; tentativa <= 3; tentativa++)
    {
        printf("Digite a senha (tentativa %d de 3): ", tentativa);
        scanf("%d", &digitada);

        if (digitada == SENHA)
        {
            acertou = 1;
            break; // acertou: sai do laco na hora, sem gastar as outras tentativas
        }
        printf("Senha incorreta.\n");
    }

    if (acertou)
        printf("Acesso Concedido! Tentativas usadas: %d\n", tentativa);
    else
        printf("Conta Bloqueada por Seguranca!\n");

    system("PAUSE");
    return 0;
}
