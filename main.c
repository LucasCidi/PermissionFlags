#include <stdio.h>

void exibirPermissoes(int permissao, const char *arquivo) {
    char permissoes[10];
    permissoes[0] = (permissao & 0400) ? 'r' : '-'; 
    permissoes[1] = (permissao & 0200) ? 'w' : '-'; 
    permissoes[2] = (permissao & 0100) ? 'x' : '-';
    permissoes[3] = (permissao & 0040) ? 'r' : '-'; 
    permissoes[4] = (permissao & 0020) ? 'w' : '-'; 
    permissoes[5] = (permissao & 0010) ? 'x' : '-';
    permissoes[6] = (permissao & 0004) ? 'r' : '-';
    permissoes[7] = (permissao & 0002) ? 'w' : '-'; 
    permissoes[8] = (permissao & 0001) ? 'x' : '-';

    printf("-%s %s\n", permissoes, arquivo);
}

int main() {
    int permissao;

    while (1) {
        printf("Digite as permissoes em octal: ");
        scanf("%o", &permissao);

        exibirPermissoes(permissao, "arquivo.txt");
    }

    return 0;
}