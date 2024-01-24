
// UFV-CRP 2018 SISTEMAS DE INFORMAÇÃO
// Jogo desenvolvido por Victor Hugo Teixeira de Morais 6048 , Gustavo da Silva Garcia 5951 e Jhonatha Cordeiro Gomes 5984.

#include <stdio.h>
#include <stdlib.h>

int z=0,q=0,z2=0,q1=0; //controladores do placar

int jogodavelhatorneio(){
	int i,j,p,linha,coluna,matriz[3][3],cont=0,cont2=0,cont3=0,z1; // variaveis de controle do jogo
	system("color DF"); // altera a cor da janela

	for(i=0;i<3;i++){ // preenche a matriz com vazio para evitar lixo
		for(j=0;j<3;j++){
			matriz[i][j]=' ';
		}
	}

	for(p=0;p<=9;p++){
		printf("\t  Jogo da Velha\n");
		printf("\t ---------------\n\n");
		printf("\t   1   2   3\n\n");
		printf("\t1  %c | %c | %c\n",matriz[0][0],matriz[0][1],matriz[0][2]);
		printf("\t  -----------\n");
		printf("\t2  %c | %c | %c\n",matriz[1][0],matriz[1][1],matriz[1][2]);
		printf("\t  -----------\n");
		printf("\t3  %c | %c | %c\n\n\n",matriz[2][0],matriz[2][1],matriz[2][2]); // desenha o tabuleiro

		// condicoes de parada
		if(cont==1){
			z2++; // conta o placar
			printf("\n\n\t Jogador 1 Venceu! \n\n");

			break;
		}
		if(cont2==1){
			q1++; // conta o placar
			printf("\n\n\t Jogador 2 Venceu! \n\n");
			break;

		}
		if(cont3==1){
			printf("\n\n\tEMPATE! \n\n");
				jogodavelhatorneio(); // chama a funcao jogodavelha
			}
		}


	if(p%2==0){ // jogador 1
		printf("\t Jogador 1 (X)\n");
	}
	if(p%2==1){ // jogador 2
		printf("\t Jogador 2 (O)\n");
	}

	printf("Digite a linha que deseja jogar:");
	scanf("%d",&linha);
	while(linha>3 || linha <1){
		printf("Linha invalida\n");
		printf("Digite a linha que deseja jogar:");
		scanf("%d",&linha);
	}
	printf("\nDigite a coluna que deseja jogar:");
	scanf("%d",&coluna);
	while(coluna>3 || coluna <1){
		printf("Coluna invalida\n");
		printf("Digite a coluna que deseja jogar:");
		scanf("%d",&coluna);
	}

   // verifica se a casa digitada ja foi preenchida

	while(matriz[linha-1][coluna-1]=='x' || matriz[linha-1][coluna-1]=='o'){
		printf("_______________________________________\n");
		printf("\nCasa ocupada, digite outra coordenada.\n");
		printf("\n");
		printf("Digite a linha que deseja jogar:");
		scanf("%d",&linha);
		printf("\nDigite a coluna que deseja jogar:");
		scanf("%d",&coluna);
	}

	// preenche a casa digitada com x
	if(p%2==0){
		matriz[linha-1][coluna-1]='x';
	}

	// preenche a casa digitada com o
	if(p%2==1){
		matriz[linha-1][coluna-1]='o';
	}

	// verifica se 'x' ganhou
	if(matriz[0][0]=='x' && matriz[0][1]=='x' && matriz[0][2]=='x' ||
		matriz[1][0]=='x' && matriz[1][1]=='x' && matriz[1][2]=='x' ||
		matriz[2][0]=='x' && matriz[2][1]=='x' && matriz[2][2]=='x' ||
		matriz[0][0]=='x' && matriz[1][0]=='x' && matriz[2][0]=='x' ||
		matriz[0][1]=='x' && matriz[1][1]=='x' && matriz[2][1]=='x' ||
		matriz[0][2]=='x' && matriz[1][2]=='x' && matriz[2][2]=='x' ||
		matriz[0][0]=='x' && matriz[1][1]=='x' && matriz[2][2]=='x' ||
		matriz[0][2]=='x' && matriz[1][1]=='x' && matriz[2][0]=='x'	){

		cont++; // variavel condicao de parada
	}
	// verifica se 'o' ganhou
	if(matriz[0][0]=='o' && matriz[0][1]=='o' && matriz[0][2]=='o' ||
		matriz[1][0]=='o' && matriz[1][1]=='o' && matriz[1][2]=='o' ||
		matriz[2][0]=='o' && matriz[2][1]=='o' && matriz[2][2]=='o' ||
		matriz[0][0]=='o' && matriz[1][0]=='o' && matriz[2][0]=='o' ||
		matriz[0][1]=='o' && matriz[1][1]=='o' && matriz[2][1]=='o' ||
		matriz[0][2]=='o' && matriz[1][2]=='o' && matriz[2][2]=='o' ||
		matriz[0][0]=='o' && matriz[1][1]=='o' && matriz[2][2]=='o' ||
		matriz[0][2]=='o' && matriz[1][1]=='o' && matriz[2][0]=='o' ){

		cont2++; // variavel condicao de parada
	}
	if(p==8){ // todas as casas preenchidas e nenhum vencendor.
		cont3++; // variavel condicao de parada
	}
	system("cls"); // limpa a tela
	}

// torneio
void torneio(){
	int i,a,b=1,c=2,d=1,e=2,n,j,vet[n];

	printf("\n\n\tDigite quantos jogadores iram participar do torneio:\n");
	scanf("%d",&n);

	for(i=0;i<n;i++){
        vet[i]=1;
	}

    void jogos();





}

void jogos(){
    int i,n,j,vet[n];
    for(i=0;i<n;i++){
        if(vet[i]==1){
            for(j=i+1;j<n;j++){
                if(vet[j]==1){
                    jogodavelhatorneio();
                }
                i++;
            }
        }
   }
    for(i=0;i<n;i++){
        if(vet[i]==1){
                jogos();
        }
   }
}



// tutorial do jogo //0
void tutorial(){

	system("color 0C"); // altera a cor da janela
    printf("\t\t\t---------------------------\n");
    printf("\t\t\t|      REGRAS DO JOGO     |\n");
    printf("\t\t\t---------------------------\n\n");
    printf("Dois jogadores escolhem uma marcacao cada um, geralmente um circulo (O) e um xis(X).\nOs jogadores jogam alternadamente,uma marcacao por vez,numa lacuna que esteja vazia.\nO objetivo e conseguir tres circulos ou tres xis em linha,quer horizontal,vertical ou diagonal,\ne ao mesmo tempo,quando possivel,impedir o adversario de ganhar na proxima jogada.\n\n\n");
    printf("\n\nVoce vai jogar escolhendo linha(vertical) e coluna(horizontal):\n\n");
    printf("    1   2   3\n\n");
    printf(" 1    |  | \n");
    printf("   ----------\n");
    printf(" 2    |  | \n");
    printf("   ----------\n");
    printf(" 3    |  | \n\n");
    printf("\n");
	printf("Pressione enter para voltar ao menu...");
	fflush(stdin);
	getchar();   // retorna ao meunu apos pressionar enter
}

//funcao jogar contra computador
int jvpc(){
	int i,j,p,linha,coluna,matriz[3][3],cont=0,cont2=0,cont3=0,z1; // variaveis de controle do jogo

	system("color 4f"); // altera a cor da janela

	for(i=0;i<3;i++){ // preenche a matriz com vazio para evitar lixo
		for(j=0;j<3;j++){
			matriz[i][j]=' ';
		}
	}

	for(p=0;p<=9;p++){
		printf("\t  Jogo da Velha\n");
		printf("\t ---------------\n\n");
		printf("\t   1   2   3\n\n");
		printf("\t1  %c | %c | %c\n",matriz[0][0],matriz[0][1],matriz[0][2]);
		printf("\t  -----------\n");
		printf("\t2  %c | %c | %c\n",matriz[1][0],matriz[1][1],matriz[1][2]);
		printf("\t  -----------\n");
		printf("\t3  %c | %c | %c\n\n\n",matriz[2][0],matriz[2][1],matriz[2][2]); // desenha o tabuleiro

 // condicoes de parada
		if(cont==1){
			z++; // conta o plcar
			printf("\n\n\tJogador 1 Venceu! \n\n");
			printf("\t     Placar\n   Voce = %d   Computador = %d\n\n",z,q);
			printf("Deseja jogar novamente? (1 p/ sim  |  0 p/ nao):");
			scanf("%d",&z1);
			switch(z1){
				case 1:
					system("cls"); // limpa a tela
					system("clear");
					jvpc(); // chama funcao
				case 0:
					exit(1); // encerra o jogo
			}
		}
		if(cont2==1){
			q++; // conta o placar
			printf("\n\n\tComputador Venceu! \n\n");
			printf("\t     Placar\n   Voce = %d  Computador = %d\n\n",z,q);
			printf("Deseja jogar novamente? (1 p/ sim  |  0 p/ nao):");
			scanf("%d",&z1);
			switch(z1){
				case 1:
					system("cls"); // limpa a tela
					system("clear");
					jvpc(); // chama a funcao jvpc
				case 0:
					exit(1); // encerra o jogo
			}
		}
		if(cont3==1){
			printf("\n\n\tEMPATE! \n\n");
			printf("Deseja jogar novamente? (1 p/ sim  |  0 p/ nao):");
			scanf("%d",&z1);
			switch(z1){
				case 1:
					system("cls"); // limpa a tela
					system("clear");
					jvpc(); // chama a funcao jvpc
				case 0:
					exit(1); // encera o jogo
			}
		}

// jogador 1
	if(p%2==0){
		printf("\t Jogador 1 (X)\n");
		printf("Digite a linha que deseja jogar:");
		scanf("%d",&linha);
		while(linha>3 || linha <1){  // verifica se linha digitada e valida
			printf("Linha invalida\n");
			printf("Digite a linha que deseja jogar:");
			scanf("%d",&linha);
		}
		printf("\nDigite a coluna que deseja jogar:");
		scanf("%d",&coluna);
		while(coluna>3 || coluna <1){ // verifica se coluna digitada e valida
			printf("Coluna invalida\n");
			printf("Digite a coluna que deseja jogar:");
			scanf("%d",&coluna);
		}
		while(matriz[linha-1][coluna-1]=='x' || matriz[linha-1][coluna-1]=='o'){ // verifica se a casa esta ocupada
			printf("_______________________________________\n");
			printf("\nCasa ocupada, digite outra coordenada.\n");
			printf("\n");
			printf("Digite a linha que deseja jogar:");
			scanf("%d",&linha);
			printf("\nDigite a coluna que deseja jogar:");
			scanf("%d",&coluna);
		}
		matriz[linha-1][coluna-1]='x';  // preenche a casa digitada
	}

// computador
	if(p%2==1){
        if(matriz[1][1]==' '){//Preenche a casa do meio do jogo da velha caso a mesma esteja vazia.
       		matriz[1][1]='o';
		}else{
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){

					// vitoria do computador

					if(matriz[0][0]=='o' && matriz[1][1]=='o' && matriz[2][2]==' '){ //Estrategia 1 de vitoria
						matriz[2][2]='o';
                        i=4;
						j=4;
					}else if(matriz[0][0]=='o' && matriz[1][1]==' ' && matriz[2][2]=='o'){ //Estrategia 2 de vitoria
						matriz[1][1]='o';
						i=4;
						j=4;
					}else if(matriz[0][0]==' ' && matriz[1][1]=='o' && matriz[2][2]=='o'){ //Estrategia 3 de vitoria
						matriz[0][0]='o';
						i=4;
						j=4;
                    }else if(matriz[0][2]=='o' && matriz[1][1]=='o' && matriz[2][0]==' '){ //Estrategia 4 de vitoria
						matriz[2][0]='o';
						i=4;
						j=4;
					}else if(matriz[0][2]=='o' && matriz[1][1]==' ' && matriz[2][0]=='o'){ //Estrategia 5 de vitoria
						matriz[1][1]='o';
						i=4;
						j=4;
                    }else if(matriz[0][2]==' ' && matriz[1][1]=='o' && matriz[2][0]=='o'){ //Estrategia 6 de vitoria
						matriz[0][2]='o';
						i=4;
						j=4;
					}else if(matriz[0][0]=='o' && matriz[0][1]=='o' && matriz[0][2]==' '){ //Estrategia 7 de vitoria
						matriz[0][2]='o';
						i=4;
						j=4;
					}else if(matriz[0][0]=='o' && matriz[0][1]==' ' && matriz[0][2]=='o'){ //Estrategia 8 de vitoria
						matriz[0][1]='o';
						i=4;
						j=4;
					}else if(matriz[0][0]==' ' && matriz[0][1]=='o' && matriz[0][2]=='o'){ //Estrategia 9 de vitoria
						matriz[0][0]='o';
						i=4;
						j=4;
                    }else if(matriz[1][0]==' ' && matriz[1][1]=='o' && matriz[1][2]=='o'){ //Estrategia 10 de vitoria
						matriz[1][0]='o';
						i=4;
						j=4;
                     }else if(matriz[1][0]=='o' && matriz[1][1]==' ' && matriz[1][2]=='o'){ //Estrategia 11 de vitoria
						matriz[1][1]='o';
						i=4;
						j=4;
                     }else if(matriz[1][0]=='o' && matriz[1][1]=='o' && matriz[1][2]==' '){ //Estrategia 12 de vitoria
						matriz[1][2]='o';
						i=4;
						j=4;
                     }else if(matriz[2][0]==' ' && matriz[2][1]=='o' && matriz[2][2]=='o'){ //Estrategia 13 de vitoria
						matriz[2][0]='o';
						i=4;
						j=4;
                     }else if(matriz[2][0]=='o' && matriz[2][1]==' ' && matriz[2][2]=='o'){ //Estrategia 14 de vitoria
						matriz[2][1]='o';
						i=4;
						j=4;
                     }else if(matriz[2][0]=='o' && matriz[2][1]=='o' && matriz[2][2]==' '){ //Estrategia 15 de vitoria
						matriz[2][2]='o';
						i=4;
						j=4;
                     }else if(matriz[0][0]==' ' && matriz[1][0]=='o' && matriz[2][0]=='o'){ //Estrategia 16 de vitoria
						matriz[0][0]='o';
						i=4;
						j=4;
                     }else if(matriz[0][0]=='o' && matriz[1][0]==' ' && matriz[2][0]=='o'){ //Estrategia 17 de vitoria
						matriz[1][0]='o';
						i=4;
						j=4;
                     }else if(matriz[0][0]=='o' && matriz[1][0]=='o' && matriz[2][0]==' '){ //Estrategia 18 de vitoria
						matriz[2][0]='o';
						i=4;
						j=4;
                     }else if(matriz[0][1]==' ' && matriz[1][1]=='o' && matriz[2][1]=='o'){ //Estrategia 19 de vitoria
						matriz[0][1]='o';
						i=4;
						j=4;
                     }else if(matriz[0][1]=='o' && matriz[1][1]==' ' && matriz[2][1]=='o'){ //Estrategia 20 de vitoria
						matriz[1][1]='o';
						i=4;
						j=4;
                     }else if(matriz[0][1]=='o' && matriz[1][1]=='o' && matriz[2][1]==' '){ //Estrategia 21 de vitoria
						matriz[2][1]='o';
						i=4;
						j=4;
                    }else if(matriz[0][2]=='o' && matriz[1][2]=='o' && matriz[2][2]==' '){ //Estrategia 22 de vitoria
						matriz[2][2]='o';
						i=4;
						j=4;
                    }else if(matriz[0][2]=='o' && matriz[1][2]==' ' && matriz[2][2]=='o'){ //Estrategia 23 de vitoria
						matriz[1][2]='o';
						i=4;
						j=4;
                    }else if(matriz[0][2]==' ' && matriz[1][2]=='o' && matriz[2][2]=='o'){ //Estrategia 24 de vitoria
						matriz[0][2]='o';
						i=4;
						j=4;

                    //Defesa do computador

                    }else if(matriz[0][0]=='x' && matriz[1][1]=='x' && matriz[2][2]==' '){ //Estrategia 1 de defesa
						matriz[2][2]='o';
						i=4;
                        j=4;
					}else if(matriz[0][0]=='x' && matriz[1][1]==' ' && matriz[2][2]=='x'){ //Estrategia 2 de defesa
						matriz[1][1]='o';
						i=4;
                        j=4;
					}else if(matriz[0][0]==' ' && matriz[1][1]=='x' && matriz[2][2]=='x'){ //Estrategia 3 de defesa
						matriz[0][0]='o';
						i=4;
                        j=4;
                    }else if(matriz[0][2]=='x' && matriz[1][1]=='x' && matriz[2][0]==' '){ //Estrategia 4 de defesa
						matriz[2][0]='o';
						i=4;
                        j=4;
					}else if(matriz[0][2]=='x' && matriz[1][1]==' ' && matriz[2][0]=='x'){ //Estrategia 5 de defesa
						matriz[1][1]='o';
						i=4;
                        j=4;
                    }else if(matriz[0][2]==' ' && matriz[1][1]=='x' && matriz[2][0]=='x'){ //Estrategia 6 de defesa
						matriz[0][2]='o';
						i=4;
                        j=4;
					}else if(matriz[0][0]=='x' && matriz[0][1]=='x' && matriz[0][2]==' '){ //Estrategia 7 de defesa
						matriz[0][2]='o';
						i=4;
                        j=4;
					}else if(matriz[0][0]=='x' && matriz[0][1]==' ' && matriz[0][2]=='x'){ //Estrategia 8 de defesa
						matriz[0][1]='o';
						i=4;
                        j=4;
					}else if(matriz[0][0]==' ' && matriz[0][1]=='x' && matriz[0][2]=='x'){ //Estrategia 9 de defesa
						matriz[0][0]='o';
						i=4;
                        j=4;
                    }else if(matriz[1][0]==' ' && matriz[1][1]=='x' && matriz[1][2]=='x'){ //Estrategia 10 de defesa
						matriz[1][0]='o';
						i=4;
                        j=4;
                    }else if(matriz[1][0]=='x' && matriz[1][1]==' ' && matriz[1][2]=='x'){ //Estrategia 11 de defesa
						matriz[1][1]='o';
						i=4;
                        j=4;
                    }else if(matriz[1][0]=='x' && matriz[1][1]=='x' && matriz[1][2]==' '){ //Estrategia 12 de defesa
						matriz[1][2]='o';
						i=4;
						j=4;
                    }else if(matriz[2][0]==' ' && matriz[2][1]=='x' && matriz[2][2]=='x'){ //Estrategia 13 de defesa
						matriz[2][0]='o';
						i=4;
                        j=4;
                    }else if(matriz[2][0]=='x' && matriz[2][1]==' ' && matriz[2][2]=='x'){ //Estrategia 14 de defesa
						matriz[2][1]='o';
						i=4;
                        j=4;
                    }else if(matriz[2][0]=='x' && matriz[2][1]=='x' && matriz[2][2]==' '){ //Estrategia 15 de defesa
						matriz[2][2]='o';
						i=4;
                        j=4;
                    }else if(matriz[0][0]==' ' && matriz[1][0]=='x' && matriz[2][0]=='x'){ //Estrategia 16 de defesa
						matriz[0][0]='o';
						i=4;
                        j=4;
                    }else if(matriz[0][0]=='x' && matriz[1][0]==' ' && matriz[2][0]=='x'){ //Estrategia 17 de defesa
						matriz[1][0]='o';
						i=4;
                        j=4;
                    }else if(matriz[0][0]=='x' && matriz[1][0]=='x' && matriz[2][0]==' '){ //Estrategia 18 de defesa
						matriz[2][0]='o';
						i=4;
                        j=4;
                    }else if(matriz[0][1]==' ' && matriz[1][1]=='x' && matriz[2][1]=='x'){ //Estrategia 19 de defesa
						matriz[0][1]='o';
						i=4;
                        j=4;
                    }else if(matriz[0][1]=='x' && matriz[1][1]==' ' && matriz[2][1]=='x'){ //Estrategia 20 de defesa
						matriz[1][1]='o';
						i=4;
                        j=4;
                    }else if(matriz[0][1]=='x' && matriz[1][1]=='x' && matriz[2][1]==' '){ //Estrategia 21 de defesa
						matriz[2][1]='o';
						i=4;
                        j=4;
                    }else if(matriz[0][2]=='x' && matriz[1][2]=='x' && matriz[2][2]==' '){ //Estrategia 22 de defesa
						matriz[2][2]='o';
						i=4;
                        j=4;
                    }else if(matriz[0][2]=='x' && matriz[1][2]==' ' && matriz[2][2]=='x'){ //Estrategia 23 de defesa
						matriz[1][2]='o';
						i=4;
                        j=4;
                    }else if(matriz[0][2]==' ' && matriz[1][2]=='x' && matriz[2][2]=='x'){ //Estrategia 24 de defesa
						matriz[0][2]='o';
						i=4;
                        j=4;

                    }else if(matriz[i][j]==' '){ //Preeenche a matriz se nenhum dos casos acima for preenchido.
                        matriz[i][j]='o';
                        i=4;
                        j=4;
                    }
				}
			}
		}
	}


	// verifica se 'x' ganhou
	if(matriz[0][0]=='x' && matriz[0][1]=='x' && matriz[0][2]=='x' ||
		matriz[1][0]=='x' && matriz[1][1]=='x' && matriz[1][2]=='x' ||
		matriz[2][0]=='x' && matriz[2][1]=='x' && matriz[2][2]=='x' ||
		matriz[0][0]=='x' && matriz[1][0]=='x' && matriz[2][0]=='x' ||
		matriz[0][1]=='x' && matriz[1][1]=='x' && matriz[2][1]=='x' ||
		matriz[0][2]=='x' && matriz[1][2]=='x' && matriz[2][2]=='x' ||
		matriz[0][0]=='x' && matriz[1][1]=='x' && matriz[2][2]=='x' ||
		matriz[0][2]=='x' && matriz[1][1]=='x' && matriz[2][0]=='x'	){

		cont++; // variavel condicao de parada

	}
 	// verifica se 'o' ganhou
	if(matriz[0][0]=='o' && matriz[0][1]=='o' && matriz[0][2]=='o' ||
		matriz[1][0]=='o' && matriz[1][1]=='o' && matriz[1][2]=='o' ||
		matriz[2][0]=='o' && matriz[2][1]=='o' && matriz[2][2]=='o' ||
		matriz[0][0]=='o' && matriz[1][0]=='o' && matriz[2][0]=='o' ||
		matriz[0][1]=='o' && matriz[1][1]=='o' && matriz[2][1]=='o' ||
		matriz[0][2]=='o' && matriz[1][2]=='o' && matriz[2][2]=='o' ||
		matriz[0][0]=='o' && matriz[1][1]=='o' && matriz[2][2]=='o' ||
		matriz[0][2]=='o' && matriz[1][1]=='o' && matriz[2][0]=='o' ){

		cont2++; // variavel condicao de parada

	}

	if(p==8){ // todas as casas preenchidas e nenhum vencendor.
		cont3++; // empate
	}
		system("cls"); // limpa a tela
		system("clear");
	}
}


// player vs player
int jogodavelha(){
	int i,j,p,linha,coluna,matriz[3][3],cont=0,cont2=0,cont3=0,z1; // variaveis de controle do jogo
	system("color DF"); // altera a cor da janela

	for(i=0;i<3;i++){ // preenche a matriz com vazio para evitar lixo
		for(j=0;j<3;j++){
			matriz[i][j]=' ';
		}
	}

	for(p=0;p<=9;p++){
		printf("\t  Jogo da Velha\n");
		printf("\t ---------------\n\n");
		printf("\t   1   2   3\n\n");
		printf("\t1  %c | %c | %c\n",matriz[0][0],matriz[0][1],matriz[0][2]);
		printf("\t  -----------\n");
		printf("\t2  %c | %c | %c\n",matriz[1][0],matriz[1][1],matriz[1][2]);
		printf("\t  -----------\n");
		printf("\t3  %c | %c | %c\n\n\n",matriz[2][0],matriz[2][1],matriz[2][2]); // desenha o tabuleiro

		// condicoes de parada
		if(cont==1){
			z2++; // conta o placar
			printf("\n\n\t Jogador 1 Venceu! \n\n");
			printf("\t     Placar\n   Jogador 1 = %d   Jogador 2 = %d\n\n",z2,q1);
            break;
		}
		if(cont2==1){
			q1++; // conta o placar
			printf("\n\n\t Jogador 2 Venceu! \n\n");
			printf("\t     Placar\n   Jogador 1 = %d   Jogador 2 = %d\n\n",z2,q1);
			break;
		}
		if(cont3==1){
			printf("\n\n\tEMPATE! \n\n");
			printf("Deseja jogar novamente? (1 p/ sim  |  0 p/ nao):");
			scanf("%d",&z1);
			switch(z1){
				case 1:
					system("cls"); // limpa a tela
					system("clear");
					jogodavelha(); // chama a funcao jogodavelha
				case 0:
					exit(1); // encerra o jogo
			}
		}


	if(p%2==0){ // jogador 1
		printf("\t Jogador 1 (X)\n");
	}
	if(p%2==1){ // jogador 2
		printf("\t Jogador 2 (O)\n");
	}

	printf("Digite a linha que deseja jogar:");
	scanf("%d",&linha);
	while(linha>3 || linha <1){
		printf("Linha invalida\n");
		printf("Digite a linha que deseja jogar:");
		scanf("%d",&linha);
	}
	printf("\nDigite a coluna que deseja jogar:");
	scanf("%d",&coluna);
	while(coluna>3 || coluna <1){
		printf("Coluna invalida\n");
		printf("Digite a coluna que deseja jogar:");
		scanf("%d",&coluna);
	}

   // verifica se a casa digitada ja foi preenchida

	while(matriz[linha-1][coluna-1]=='x' || matriz[linha-1][coluna-1]=='o'){
		printf("_______________________________________\n");
		printf("\nCasa ocupada, digite outra coordenada.\n");
		printf("\n");
		printf("Digite a linha que deseja jogar:");
		scanf("%d",&linha);
		printf("\nDigite a coluna que deseja jogar:");
		scanf("%d",&coluna);
	}

	// preenche a casa digitada com x
	if(p%2==0){
		matriz[linha-1][coluna-1]='x';
	}

	// preenche a casa digitada com o
	if(p%2==1){
		matriz[linha-1][coluna-1]='o';
	}

	// verifica se 'x' ganhou
	if(matriz[0][0]=='x' && matriz[0][1]=='x' && matriz[0][2]=='x' ||
		matriz[1][0]=='x' && matriz[1][1]=='x' && matriz[1][2]=='x' ||
		matriz[2][0]=='x' && matriz[2][1]=='x' && matriz[2][2]=='x' ||
		matriz[0][0]=='x' && matriz[1][0]=='x' && matriz[2][0]=='x' ||
		matriz[0][1]=='x' && matriz[1][1]=='x' && matriz[2][1]=='x' ||
		matriz[0][2]=='x' && matriz[1][2]=='x' && matriz[2][2]=='x' ||
		matriz[0][0]=='x' && matriz[1][1]=='x' && matriz[2][2]=='x' ||
		matriz[0][2]=='x' && matriz[1][1]=='x' && matriz[2][0]=='x'	){

		cont++; // variavel condicao de parada
	}
	// verifica se 'o' ganhou
	if(matriz[0][0]=='o' && matriz[0][1]=='o' && matriz[0][2]=='o' ||
		matriz[1][0]=='o' && matriz[1][1]=='o' && matriz[1][2]=='o' ||
		matriz[2][0]=='o' && matriz[2][1]=='o' && matriz[2][2]=='o' ||
		matriz[0][0]=='o' && matriz[1][0]=='o' && matriz[2][0]=='o' ||
		matriz[0][1]=='o' && matriz[1][1]=='o' && matriz[2][1]=='o' ||
		matriz[0][2]=='o' && matriz[1][2]=='o' && matriz[2][2]=='o' ||
		matriz[0][0]=='o' && matriz[1][1]=='o' && matriz[2][2]=='o' ||
		matriz[0][2]=='o' && matriz[1][1]=='o' && matriz[2][0]=='o' ){

		cont2++; // variavel condicao de parada
	}
	if(p==8){ // todas as casas preenchidas e nenhum vencendor.
		cont3++; // variavel condicao de parada
	}
	system("cls"); // limpa a tela
	}
}



int main(){

	int z = 1;
	while(z != 5) {
		// menu do jogo
		system("cls"); // limoa a tela
		system("color 1f"); // altera a cor da janela
		printf("\t----------------------------\n");
		printf("\t|       JOGO DA VELHA      |\n");
		printf("\t----------------------------\n\n");
		printf("\n\t  Selecione uma opcao.\n");
		printf("\t-----------------------\n");
		printf("\n\t 1 - Jogar contra computador.");
		printf("\n\t 2 - Jogar 1 contra 1.");
		printf("\n\t 3 - Torneio.");
		printf("\n\t 4 - Tutorial.");
		printf("\n\t 5 - Sair.\n");
		printf("\n\t-----------------------");
		printf("\n\tDigite a opcao desejada:");
		scanf("%d",&z);

		// verifica se o numero digitado e um numero valido.
		while(z>=6 || z<=0){
			printf("\n\n\tNumero invalido!");
			printf("\n\tDigite novamente:");
			scanf("%d",&z);
		}

		switch(z) {
			case 1:
				system("cls");  // chama a funcao jogador vs computador
				jvpc();
				break;
			case 2:
				system("cls");
				jogodavelha(); // chama a funcao jogador vs jogador
				break;
			case 3:
				system("cls");
				torneio(); // chama a funcao torneio
				break;

			case 4:
				system("cls"); // chama a funcao tutorial
				tutorial();
			case 5:
				break;  // encerra o jogo
		}
	}
	system("pause");
	return 0;
}
