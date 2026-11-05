// QUESTÃO 15

#include <stdio.h>

int main() {
    int idade, tempoServico;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite o tempo de servico (em anos): ");
    scanf("%d", &tempoServico);

    if (idade >= 65 || tempoServico >= 30 || (idade >= 60 && tempoServico >= 25)) {
        printf("O trabalhador pode se aposentar.\n");
    } else {
        printf("O trabalhador ainda nao pode se aposentar.\n");
    }

    return 0;
}

// Juntei as três condições numa só usando os operadores lógicos.
// O || (OU) liga as três regras, porque basta uma delas ser
// verdadeira pra pessoa poder se aposentar.
//
// Na terceira regra eu usei o && (E), porque a pessoa precisa ter
// as duas coisas ao mesmo tempo: pelo menos 60 anos e pelo menos
// 25 anos de serviço. Coloquei essa parte entre parênteses pra
// deixar claro que ela é uma condição só.
//
// "Pelo menos" quer dizer que o valor também conta, por isso usei
// >= em todas as comparações.
//
// Exemplos pra testar:
// idade 66, servico 10 -> pode (tem 65 anos ou mais)
// idade 50, servico 31 -> pode (tem 30 anos de servico ou mais)
// idade 61, servico 26 -> pode (60+ anos e 25+ de servico)
// idade 61, servico 20 -> nao pode (nenhuma regra é atendida)