#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int i, j, l, c;
	
	printf("-- MATRIZ TRANSPOSTA --\n");
	
	printf("\nDigite o numero de linhas da matriz: ");
	scanf("%d", &l);
	printf("\nDigite o numero de colunas da matriz: ");
	scanf("%d", &c);
	
	int matriz[l][c];
	
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			printf("\nElemento [%d][%d]: ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("\nA matriz definida foi: \n\n");
	for(i=0;i<l;i++){
		
		if(i==0){printf("|");}else{printf("|\n|");}
		
		for(j=0;j<c;j++){
			printf(" %d ", matriz[i][j]);
		}
		
		if(i==l-1){printf("|");}
	}
	
	printf("\n\nA matriz transposta da matriz formulada eh: \n\n");
	for(i=0;i<c;i++){
		
		if(i==0){printf("|");}else{printf("|\n|");}
		
		for(j=0;j<l;j++){
			printf(" %d ", matriz[j][i]);
		}
		
		if(i==c-1){printf("|");}
	}
	
	printf("\n\n");
	
	system("PAUSE");
	return 0;
}
