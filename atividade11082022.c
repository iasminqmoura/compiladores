#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *arq;
	char linha[100];
	char *result;
	int contaLinha;
	
	arq = fopen("arquivo.txt", "rt");
	
	if (arq == NULL){
		printf("Problemas na abertura do arquivo.\n");
		return;
	}
	
	contaLinha = 0;
	
	while (!feof(arq)){
		result = fgets(linha, 100, arq);
		contaLinha++;
	}
	
	if (result){
			printf("O arquivo possui %d linhas", contaLinha);
		}

	fclose(arq);
}
