// QUESTÃO 21

#include <stdio.h>

int main() {
    float salario, percentual, aumento, novoSalario;
    int cargo;

    printf("Digite o salario atual: R$ ");
    scanf("%f", &salario);

    printf("Codigo do cargo:\n");
    printf("1 - Tecnico\n");
    printf("2 - Gerente\n");
    printf("3 - Demais Cargos\n");
    printf("Escolha: ");
    scanf("%d", &cargo);

    switch (cargo) {
        case 1:
            if (salario <= 3000) {
                percentual = 0.15;
            } else {
                percentual = 0.10;
            }
            break;

        case 2:
            if (salario <= 5000) {
                percentual = 0.10;
            } else {
                percentual = 0.05;
            }
            break;

        case 3:
            percentual = 0.08;
            break;

        default:
            printf("Erro: codigo de cargo invalido!\n");
            return 0;
    }

    aumento = salario * percentual;
    novoSalario = salario + aumento;

    printf("Valor do aumento: R$ %.2f\n", aumento);
    printf("Novo salario: R$ %.2f\n", novoSalario);

    return 0;
}

// Usei o switch pra separar os cargos e, dentro do técnico e do
// gerente, um if-else pra escolher o percentual de acordo com o
// salário. O demais cargos não precisa de if, porque o aumento é
// fixo de 8%.
//
// Em vez de calcular o novo salário dentro de cada case, eu só
// guardo o percentual numa variável. Depois do switch faço a conta
// uma vez só, o que evita repetir o mesmo código várias vezes.
//
// O aumento é o salário vezes o percentual (15% = 0.15, por
// exemplo), e o novo salário é o salário antigo mais o aumento.
//
// No default, se o código for inválido, o programa mostra o erro e
// encerra com return 0, pra não tentar fazer a conta com um
// percentual que nunca recebeu valor.
//
// Obs: o enunciado fala em tempo de serviço, mas a tabela só usa o
// cargo e o salário, então o programa não precisou ler essa
// informação.