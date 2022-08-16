#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *arq;
	char caractere;
	char linha[100];
	
	char *result;
	
	int contaLinha = 0;
	int contaCaracter;

	
	arq = fopen("arquivo.txt", "rt");
	
	if (arq == NULL){
		printf("Problemas na abertura do arquivo.\n");
		return;
	}

	
	while (!feof(arq)){
		if(caractere != 'nn' && caractere !='n0'){
			contaCaracter = contaCaracter + 1;
			caractere = getc(arq);
		}
		
		result = fgets(linha, 100, arq);
		contaLinha++;
	}
	
	printf("A quantidade de caracteres eh: %d\n", contaCaracter);
	printf("A quantidade de linhas eh: %d\n", contaLinha);
			
	
	fclose(arq);
}
