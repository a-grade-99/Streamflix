#include "mainInterface.h"

// Função auxiliar para ler opções de menu com validação
int lerOpcao(int min, int max) {
    int opcao;
    while (1) {
        printf("Selecione uma opção: ");
        if (scanf("%d", &opcao) == 1 && opcao >= min && opcao <= max) {
            while (getchar() != '\n'); // Limpa o buffer de entrada
            break;
        } else {
            printf("Opção inválida! Digite um número entre %d e %d.\n", min, max);
            while (getchar() != '\n'); // Limpa o buffer de entrada
        }
    }
    return opcao;
}

// Interface de login
void interfaceLogin(char *utilizador, unsigned int *senha) {
    system("cls");
    printf("\n\n============ LOGIN ============\n\n");
    
    printf("Utilizador: ");
    fgets(utilizador, 10, stdin);
    utilizador[strcspn(utilizador, "\n")] = '\0'; // Remove a quebra de linha

    printf("Senha: ");
    scanf("%u", senha);

    while (getchar() != '\n'); // Limpa o buffer de entrada
}

// Interface para menu principal
int interfaceMenuPrincipal(char *utilizador) {
    system("cls");
    printf("\n\n============ MENU PRINCIPAL ============\n\n");
    printf("Olá: %s\n\n", utilizador);
    printf("1 ==> Editar Filmes.\n");
    printf("2 ==> Pesquisar um Filme.\n");
    printf("3 ==> Lista Personalizada de Filmes.\n");
    printf("4 ==> As suas Métricas.\n");
    printf("5 ==> Assistir um filme.\n");
    printf("0 ==> Sair.\n");
    printf("\n========================================\n\n");

    return lerOpcao(0, 5);
}

// Interface para menu de edição de conteúdos
int interfaceEdicaoFIlmes() {
    system("cls");
    printf("\n\n============ ADICIONAR OU EDITAR FILME ============\n");
    printf("1 ==> Adicionar Filme Ou Editar Filme.\n");
    printf("2 ==> Remover Filme.\n");
    printf("0 ==> Voltar.\n");
    printf("\n===================================================\n\n");

    return lerOpcao(0, 2);
}

// Interface para menu de pesquisa
int interfaceMenuPesquisa() {
    system("cls");
    printf("\n\n================= PESQUISA =================\n");
    printf("1 ==> Pesquisar por Título.\n");
    printf("2 ==> Pesquisar por Categoria.\n");
    printf("3 ==> Pesquisar por Classificação Etária.\n");
    printf("0 ==> Voltar.\n");
    printf("\n============================================\n\n");

    return lerOpcao(0, 3);
}

// Interface para menu da lista de favoritos
int interfaceMenuFavoritos() {
    system("cls");
    printf("\n\n========================== FAVORITOS ==========================\n");
    printf("1 ==> Criar Lista de Filmes Personalizada ou de Favoritos.\n");
    printf("2 ==> Consultar Lista de Filmes Personalizada ou Favoritos.\n");
    printf("3 ==> Editar/Apagar Lista de Filmes Personalizada ou Favoritos.\n");
    printf("0 ==> Voltar.\n");
    printf("\n===============================================================\n\n");

    return lerOpcao(0, 3);
}

// Interface para menu de métricas
int interfaceMetricas() {
    system("cls");
    printf("\n\n============ AS SUAS METRICAS ==============\n");
    printf("1 ==> Filmes Mais Assistidos.\n");
    printf("2 ==> Categorias Mais Populares.\n");
    printf("3 ==> Utilizadores Mais Ativos.\n");
    printf("0 ==> Voltar.\n");
    printf("\n=============================================\n\n");

    return lerOpcao(0, 3);
}

// Interface para menu de assistir filme
int interfaceAssistir() {
    system("cls");
    printf("\n\n============== VEJA UM FILME ==============\n");
    printf("1 ==> Selecione o Filme Para Assistir.\n");
    printf("2 ==> Histórico.\n");
    printf("3 ==> Filmes Recomendados.\n");
    printf("0 ==> Voltar.\n");
    printf("\n============================================\n\n");

    return lerOpcao(0, 3);
}

