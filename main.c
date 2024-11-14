#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ARQUIVOS 100

typedef struct {
    char nome[100];
    int permissao;
} Arquivo;

void exibirPermissoes(int permissao, const char *nome_arquivo) {
    char permissoes[10];
    permissoes[0] = (permissao & 0400) ? 'r' : '-'; // Proprietário: leitura
    permissoes[1] = (permissao & 0200) ? 'w' : '-'; // Proprietário: escrita
    permissoes[2] = (permissao & 0100) ? 'x' : '-'; // Proprietário: execução
    permissoes[3] = (permissao & 0040) ? 'r' : '-'; // Grupo: leitura
    permissoes[4] = (permissao & 0020) ? 'w' : '-'; // Grupo: escrita
    permissoes[5] = (permissao & 0010) ? 'x' : '-'; // Grupo: execução
    permissoes[6] = (permissao & 0004) ? 'r' : '-'; // Outros: leitura
    permissoes[7] = (permissao & 0002) ? 'w' : '-'; // Outros: escrita
    permissoes[8] = (permissao & 0001) ? 'x' : '-'; // Outros: execução

    printf("-%s %s\n", permissoes, nome_arquivo);
}

int main() {
    int permissao;
    char arquivo[100];
    int sair;

    while (1) {
        printf("Digite as permissoes: ");
        scanf("%o", &permissao);

        printf("Digite o nome do arquivo: ");
        scanf("%s", arquivo);

        exibirPermissoes(permissao, arquivo);
    }

    return 0;
}