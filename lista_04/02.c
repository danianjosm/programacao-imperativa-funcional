/* Questão 02. Associação do Comando else e Aninhamento de Decisões — Analise o trecho de
código C abaixo que contém estruturas condicionais aninhadas:
int x = 15, y = 5;
if (x > 10)
if (y > 10)
printf("Opção A\n");
else
printf("Opção B\n");

a) Qual mensagem será impressa no console ao executar o código acima? Justifique por que a Opção B
é ou não exibida.
b) Qual é a regra oficial da Linguagem C para associar uma cláusula else a um comando if em códigos
sem chaves de bloco?
c) Reescreva o código acima utilizando chaves { } para garantir explicitamente que a Opção B seja
impressa apenas quando x <= 10.
*/

// A) Será impresso "Opção B". Como x = 15, a condição x > 10 é verdadeira e o
// programa entra no segundo if. Como y = 5, a condição y > 10 é falsa, então
// "Opção A" não é impressa. O else pertence ao if (y > 10), que é o mais
// próximo dele, por isso ele é executado e imprime "Opção B".

// B) Em códigos sem chaves, o else sempre se associa ao if mais próximo
// acima dele que ainda não possui um else. A indentação (os espaços) não
// interfere, o compilador ignora.

/*
int main() {
    int x = 15, y = 5;

    if (x > 10) {
        if (y > 10) {
            printf("Opção A\n");
        }
    } else {
        printf("Opção B\n");
    }

}
*/ 
