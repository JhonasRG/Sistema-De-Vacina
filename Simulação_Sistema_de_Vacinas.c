#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define TAM 999

struct guardaCPF{
	char cpf[14];
}gCPF[TAM];

struct registro{
	char nome[50];
	char vacina[30];
	char data[10];
	int codigo;
	char lote[12];
}reg[TAM];

int cont, cont2, cont3, escolha, quant, escolha1, escolha2, escolha3;
char buscacpf[14];


int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 0A");
	
	inicio:
	while(escolha != 4){
		printf("1 - Cadastrar \n2 - Listar Cadastros \n3 - Busca por cpf \n4 - Sair\n\nEscolha...: ");
		scanf("%i", &escolha);
		    switch(escolha){
		case 1:
			system("cls");
			printf("Insira quantos cadastros deseja realizar: ");
			scanf("%i", &quant);		
		    printf("\n---Iniciando sistema de cadastro para %i pessoas---\n\n", quant);
		    system("pause");
		    system("cls");
		    for(cont = 0; cont < quant; cont++){
		    printf("--- Cadastro numero %i ---\n", cont+1);
		    fflush(stdin);
		    printf("\nInsira seu nome....: ");
		    scanf("%50[^\n]s", &reg[cont].nome);
		    fflush(stdin);
		    printf("\nInsira o seu CPF....: ");
		    scanf("%11[^\n]s", gCPF[cont].cpf);
		    fflush(stdin);
		    printf("\nInsira a vacina....: ");
		    scanf("%30s", &reg[cont].vacina);
		    fflush(stdin);
		    printf("\nInsira a data que voc� tomou a vacina....: ");
		    scanf("%10s", &reg[cont].data);
		    fflush(stdin);
		    printf("\nInsira o lote da vacina....: ");
		    scanf("%30s", &reg[cont].lote);
		    
		    system("cls");
		    printf("-- Dados regisrados com sucesso! --\n\n");
		    system("pause");
		    system("cls");
		}
		    printf("Escolha uma das opcoes abaixo para prosseguir:\n1 - Voltar ao inicio \n2 - Sair do programa \n\nEscolha....: ");
		    fflush(stdin);
		    scanf("%i", &escolha1);
		    
		    if (escolha1 == '1'){
		    	system("cls");
		    	goto inicio;
			}
			else if (escolha1 = '2'){
		    	system("cls");
		    	printf("-- Saindo do programa --");
		    	return 0;
	        }
	        break; 
		case 2:
			if(quant > 0){
		    system("cls");	
		    printf("--- Exibindo cadastros ---\n", quant);
		     
		    for(cont2 = 0; cont2 < quant; cont2++){
		    printf("\nCodigo...: %i", cont2+1);
		    printf("\nNome....: %s", reg[cont2].nome);
		    printf("\nCPF....: %s", gCPF[cont2].cpf);
		    printf("\nVacina....: %s", reg[cont2].vacina);
		    printf("\nData....: %s", reg[cont2].data);
		    printf("\nLote....: %s\n", reg[cont2].lote);
		    printf("\n==================================\n");
		}
			printf("--- Todos os cadastros foram exibidos ---\n");		
		} else {
			printf("--- Nao existem cadastros a serem exibidos ---\n");
		}    
		system("pause");
		system("cls");
		printf("1 -- Voltar ao inicio\n2 -- Sair do programa\n\nEscolha...: ");
        fflush(stdin);
		scanf("%d", &escolha2);
		if(escolha2 == 1){
			system("cls");
			goto inicio;
		}
		else{
			return 0;
		}
		break;
		do{
	case 3:
		system("cls");
		printf("Digite o CPF que deseja buscar...: ");
		scanf("%s", &buscacpf);
        
		int acha = 0;
        cont3 = 0;
        
        while((cont3 < quant) && (acha == 0)){
        if(strcmp(gCPF[cont3].cpf, buscacpf)==0){
        acha = 1;
    }
        else{
        cont3++;
    }
    }
       if (acha == 1){
       printf("--- Exibindo dados do CPF ---\n");
       printf("\nCodigo....: %d", cont3+1);
       printf("\nNome....: %s", reg[cont3].nome);
       printf("\nVacina....: %s", reg[cont3].vacina);
       printf("\nData....: %s", reg[cont3].data);
       printf("\nCPF....: %s", gCPF[cont3].cpf);
       printf("\nLote....: %s\n", reg[cont3].lote);
       printf("==================================\n");
       system("pause");
       system("cls");
    }
    else{
    system("cls");
    printf("-- CPF nao encontrado -- \n");
    }
    
    printf("\n1 -- Voltar ao inicio\n2 -- Realizar nova busca\n3 -- Sair do programa\n\nEscolha....: ");
    fflush(stdin);
    scanf("%d", &escolha3);
    switch(escolha3){
    	case 1:
    		system("cls");
    		goto inicio;
    		break;
    	case 3:
    		system("cls");
    		printf("-- Saindo do programa --");
    		return 0;
    		break;
	}
    system("cls");
	        }while((escolha3 != 1) || (escolha3 != 3));
	        break;
	case 4:
		printf("\n--- Saindo do programa ---");
		return 0;
		break;
	default:
	    	printf("\nOpcao Invalida\n");
	    	system("pause");
	    	system("cls");
		}
	}
}

