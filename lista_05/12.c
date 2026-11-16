/*Questão 12. Procedimento de Menu — Crie um procedimento void exibeMenu(void) que
imprima um menu com as opções 1 - Cadastrar, 2 - Listar, 3 - Remover e 0 - Sair. Na main(),
chame o procedimento, leia a opção do usuário e exiba uma mensagem correspondente com
switch-case.*/

// QUESTÃO 12

#include <stdio.h>

// void: nao devolve nada, so imprime. (void) nos parametros: nao recebe nada
void exibeMenu(void);

int main() {
    int opcao;

    exibeMenu();
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Voce escolheu Cadastrar\n");
            break;
        case 2:
            printf("Voce escolheu Listar\n");
            break;
        case 3:
            printf("Voce escolheu Remover\n");
            break;
        case 0:
            printf("Saindo... ate logo!\n");
            break;
        default:
            printf("Opcao invalida\n");
    }

    return 0;
}

void exibeMenu(void) {
    printf("===== MENU =====\n");
    printf("1 - Cadastrar\n");
    printf("2 - Listar\n");
    printf("3 - Remover\n");
    printf("0 - Sair\n");
    printf("================\n");
}
