#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

#define TAM 31
// Definindo a estrutura de dados para um contato
typedef struct contatos{
    char nome[30];
    int tell;
    char email[30];
}*Contatos[TAM];


// Função hash usando divisão
int Hash(int c){
    return c%TAM;
}
int trataColisao(char c[]){
    int key = 0, i = 0;
    while(c[i] != '\0'){
        key += c[i];
        i++; 
    } 
}

Contatos tabela[TAM];

struct contatos *criaContato(char *nome, int *tel, char *email){
    struct contatos *novo = (struct contatos *)malloc(sizeof(struct contatos));
    novo->nome[30] = (char*)malloc(sizeof(char));
    novo->tell = (int *)malloc(sizeof(int));
    novo->email[30] = (char *)malloc(sizeof(char));
    
    return novo;
}
int inserir(Contatos hash, struct contatos *p){
    int chave = trataColisao(p->nome);
    chave = Hash(chave);
    int inicio = chave;
    int c;

    while(1){
        if(hash[chave] == 0){
            hash[chave] = c;
            break;
        }
        chave++;

        if(inicio == chave){
            break;
        }

        if(chave > TAM){
            chave = chave%TAM;
            inicio = chave;
        }
    }
}


int main(void){
	setlocale(LC_ALL, "");
	char nome, email;
	int tel;
    int menu;
    int sec=0;
    struct contatos *novo = criaContato(nome, tel, email);
    struct contatos *c;
    do {
    	        printf("\t\t@    @@@  @@@   @@@  @@@@     @@@   @@@ \n");
		printf("\t\t@     @  @@  @   @   @  @     @  @  @   \n");
		printf("\t\t@     @    @@    @   @@@@     @  @  @@@ \n");
		printf("\t\t@     @  @  @@   @   @  @     @  @  @   \n");
		printf("\t\t@@@  @@@  @@@    @   @  @     @@@   @@@ \n");
    	printf("======================================================================\n");
		printf("   @@@@@   @@@@@   @@@   @@  @@@@@@   @@@@   @@@@@@   @@@@@    @@@@   \n");
		printf("  @@      @@   @@  @@ @  @@    @@    @@  @@    @@    @@   @@  @@   @  \n");
		printf("  @@      @@   @@  @@  @ @@    @@    @@  @@    @@    @@   @@    @@    \n");
		printf("  @@      @@   @@  @@   @@@    @@    @@@@@@    @@    @@   @@  @   @@  \n");
		printf("   @@@@@   @@@@@   @@    @@    @@    @@  @@    @@     @@@@@    @@@@   \n");
		printf("======================================================================\n");
                printf("\tSEJA BEM-VINDO(A) AO NOSSO PROGRAMA DE CONTATOS!\n\t    SELECIONE A OPÇÃO QUE DESEJA REALIZAR:\n\n");
	        printf("\t\t  ========================\n");
		printf("\t\t  | 1 -> LISTAR CONTATOS |\n");
		printf("\t\t  | 2 -> CRIAR CONTATOS  |\n");
		printf("\t\t  | 3 -> BUSCAR CONTATOS |\n");
		printf("\t\t  | 4 -> APAGAR CONTATO  |\n");
		printf("\t\t  | 0 -> SAIR            |\n");
		printf("\t\t  ========================\n");
		printf("\t\t\tOpção: ");
        scanf("%d", &menu);
        switch (menu)
        {
        case 0:
        	system("cls");
            printf("ATÉ MAIS");
            while (sec++ < 5) {
      Sleep(500); 
  	  	  	  printf(".");
			};
			system("cls");
            break;
        case 1:
        	system("cls");
            printf("------------------\n");
            printf("LISTANDO CONTATOS\n");
            printf("------------------\n");
            break;
        case 2:
        	system("cls");
        	printf("\n");
            printf("CRIANTO CONTATO");
        	while (sec++ < 5) {
      Sleep(500); 
  	  	  	  printf(".");
			};
			system("cls");
	    printf("----------------\n");
            printf("CRIANTO CONTATO\n");
            printf("----------------\n");
            printf("NOME: ");
		    scanf("%s", &novo->nome);
		    printf("TELEFONE: ");
		    scanf("%d", &novo->tell);
			printf("EMAIL: ");                                                                                                 
		    scanf("%s", &novo->email);
            inserir(novo, c);
            break;
        case 3:
        	system("cls");
            printf("-----------------\n");
            printf("BUSCANDO CONTATO");
            printf("-----------------\n");
            break;
        case 4:
        	system("cls");
            printf("-----------------\n");
            printf("APAGANDO CONTATO");
            printf("-----------------\n");
            break;
        default:
        printf("\nOPÇÃO INVÁLIDA!\n");
            break;
        }
    }while (menu!=0);
    
    return 0;
}
