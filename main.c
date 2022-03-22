/*   Tema do trabalho:Pacotes fotograficos
Aluna:  Paula Karoline B. Prado
Dificuldades encontradas:  começar a desenvolver, fazer a listagem, fazer a parte de remover item.           
Editor utilizado: Dev-C++
Sistema Operacional Utilizado: Windows 10 */ 

#include <stdio.h>
#include <stdlib.h>

#define MAX_ITEM 10 // n�mero maximo de itens cadastrados (vetor)

int main() {  
	int i; 
	int m; //op��o do menu 
	int a; //altera��o de item
	int c=0; // indice de vetores e c�digo dos itens.
	int cont[MAX_ITEM]; //contador para remover
	int r; //remover item
	int q[MAX_ITEM]; //quantidade de itens
	float v[MAX_ITEM]; //valor
	char d[MAX_ITEM][20]; //descri��o
	

	    do {      
	 	//mostra menu    
		printf ("\n_____________________________________________________________________\n");
		printf("\n                               MENU \n");
		        
	 	printf("\n              (1) Cadastrar Pacote fotografico");        
	 	printf("\n              (2) Alterar Pacote");        
	 	printf("\n              (3) Remover Pacote");        
	 	printf("\n              (4) Listar Pacotes");
		printf("\n              (5) Sair");  
		printf ("\n_____________________________________________________________________\n");
		printf("  ");
	 	scanf("%d",&m); //armazena a op��o escolhida pelo usu�rio

		switch(m) { //condi��o para o que ir� acontecer quando cada op��o do menu for selecionada
		
			case 1: //Cadastro de item
			system("cls"); // limpa a tela
	    	printf ("\n_____________________________________________________________________\n");
			printf("\n                   CADASTRO DE PACOTES FOTOGRAFICOS"); //cabe�alho do cadastro
			printf ("\n_____________________________________________________________________\n");
	    	
	    	printf("\n Pacote: "); 
			scanf("%s", &d[c]);
			printf(" Quantidade de fotos: ");
			scanf("%d", &q[c]);
			printf(" Valor: R$ "); 
			scanf("%f", &v[c]);
			c++; //Vari�vel que controla o �ndice dos vetores
			printf("\n Codigo do pacote: %d", c); //c�digo do produto ser� gerado automaticamente.
			printf ("\n_____________________________________________________________________");
			printf("\n                Cadastro realizado com sucesso! ");
			printf ("\n_____________________________________________________________________\n");
			
			system("pause"); // Interrompe a execu��o do programa
			system("cls"); // que limpa a tela
	   		break;            
	
			case 2: //alterar
				system("cls");
				printf ("\n_____________________________________________________________________\n");
				printf("                              ALTERAR PACOTE");
				printf ("\n_____________________________________________________________________\n");
				printf("\n                      Qual pacote deseja alterar? \n");
				
				//mostra itens
			
				for (i=0; i<c; i++){
					if (cont[i]!=MAX_ITEM*2){ //se j� foi feita alguma remo��o, ela n�o aparecer�.
				printf ("\n %d. Pacote %s \n", i+1, d[i]); //mostra c�digo e nome do pacote para escolha.
				//o i come�a em 0, por�m o primeiro c�digo � 1, por isso foi deito i+1.
				}}
				printf("                           \n");
				scanf("%d", &a); //armazena a op��o escolhida
				a=a-1;	//sobrescrevendo valor e direcionando para o indice correto
				printf("\n Pacote %s", d[a]);
				printf ("\n Novo nome do pacote: ");
				scanf("%s", &d[a]);
				
				printf("\n Quantidade de fotos: %d", q[a]);
				printf("\n Nova quantidade de fotos: ");
				scanf("%d", &q[a]);
				
				printf("\n Valor: R$ %2.f", v[a]);
				printf("\n Novo valor: R$ "); 
				scanf("%f", &v[a]);
				
				printf ("\n_____________________________________________________________________\n");
				printf("\n                 Pacote alterado com sucesso!");
				printf ("\n_____________________________________________________________________\n");
				system("pause"); // Interrompe a execu��o do programa
				system("cls"); // limpa a tela
				break;
						
			case 3:
				system("cls");
				printf ("\n_____________________________________________________________________\n");
				printf("\n                       REMOVER  PACOTE");
				printf ("\n_____________________________________________________________________\n");
				printf("\n                    Qual pacote deseja remover?");
				for (i=0; i<c; i++){
					if (cont[i]!=MAX_ITEM*2){
				printf ("\n %d. %s \n", i+1, d[i]);
				}}
				printf("\n");
				scanf ("%d", &r);
				r=r-1;
				cont[r]=MAX_ITEM*2;
				
				printf ("\n_____________________________________________________________________\n");
				printf ("\n                   Pacote removido com sucesso.");
				printf ("\n_____________________________________________________________________\n");
				system("pause"); // Interrompe a execu��o do programa
				system("cls"); // limpa a tela
				break;
			
			
			case 4: //listar
				system("cls");
				printf ("\n_____________________________________________________________________\n");
				printf("\n                        LISTAR PACOTES ");
				printf ("\n_____________________________________________________________________\n");
				for (i=0; i<c; i++){
					if (cont[i]!=MAX_ITEM*2){
				printf ("\n %d. Pacote %s", i+1, d[i]); // mostra o item com o c�digo
				printf ("\n Quantidade de fotos: %d", q[i]); 
				printf ("\n Valor: R$ %2.f", v[i]);
				printf ("\n   ");
				}
			}
				printf ("\n_____________________________________________________________________\n");
				system("pause"); // Interrompe a execu��o do programa			
				system("cls"); // limpa a tela
				break;
			
			case 5:
				system("cls"); // limpa a tela
				printf(" \n    SAINDO...\n");    
				printf ("\n_____________________________________________________________________\n");
				break;            
			
			default:
			
			printf("Opcao Invalida");
			printf ("\n  \n");
			system("pause"); // Interrompe a execu��o do programa			
			system("cls"); // limpa a tela
			break;           
			}       
		}while(m!=5);   
		return 0;
	}

