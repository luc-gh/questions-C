#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int m[5][4], i, j, soma;
	float media;
	
	printf("Preencha as informações sobre os alunos com valores inteiros.\n\n");
	
	for(i=0;i<5;i++){
		printf("\n - Aluno %d -\n", i+1);
		for(j=0;j<4;j++){
			switch(j){
				case 0:
					printf("\nMatricula: ");
					scanf("%d", &m[i][j]);
					break;
				case 1:
					printf("\nMedia das provas: ");
					scanf("%d", &m[i][j]);
					break;
				case 2:
					printf("\nMedia dos trabalhos: ");
					scanf("%d", &m[i][j]);
					break;
				case 3:
					m[i][j] = (m[i][1] + m[i][2])/2; //coluna 4 recebe a média das colunas 2 e 3
					break;	
			}
		}
	}
	
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			if(j=3){
				soma += m[i][j]; //soma da coluna 4
				
				if(m[i][j] < 7){ printf("\n\n-- Aluno %d reprovado.", m[i][0]); }
				else{ printf("\n\n-- Aluno %d aprovado.", m[i][0]); }
			}
		}
	}
	media = soma/5;
	printf("\n\n- Media final da notas: %.2f\n\n", media);
	
	return 0;
}
