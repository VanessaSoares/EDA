/**
Este arquivo � parte do projeto Data Structures
Este � um software livre; voc� pode redistribu�-lo e/ou
modific�-lo dentro dos termos da Licen�a P�blica Geral GNU como
publicada pela Funda��o do Software Livre (FSF); na vers�o 3 da
Licen�a, ou (na sua opini�o) qualquer vers�o.

Este programa � distribu�do na esperan�a de que possa ser  �til,
mas SEM NENHUMA GARANTIA; sem uma garantia impl�cita de ADEQUA��O
a qualquer MERCADO ou APLICA��O EM PARTICULAR. Veja a
Licen�a P�blica Geral GNU para maiores detalhes.

Voc� deve ter recebido uma c�pia da Licen�a P�blica Geral GNU junto
com este programa, Se n�o, veja <http://www.gnu.org/licenses/>.

Arquivo: Vector.c
Descri��o: Implementa��o de fun��es auxiliares para tratamento de vetores
Autor: Vanessa Soares */

#define _CRT_SECURE_NO_WARNINGS 1 // Desabilita verifica��es de seguran�a
#define MAX 4000000
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Imprime os elementos do vetor
void ShowVector (long int *vector, long int numberOfElements)
{
	long int* aux = vector;
	for (long int i = 0; i < numberOfElements; i++) {
		printf("%ld \n", aux[i]);
	}
}

// Salva o vetor em um arquivo txt
int SaveVector (const char* address, long int *vector, long int numberOfElements)
{
	FILE* file;
	file = fopen(address, "w");
	if (file == NULL) {
		printf("Failed to save file! \n");
		return -1;
	}
	for (long int i = 0; i < numberOfElements; i++) {
		fflush(stdout);
		fprintf(file, "%ld \n", vector[i]);
	}
	fclose(file);
	printf("Successfully saved file! \n");
	return 0;
}

// Recupera o vetor de um arquivo
long int* RetrieveVector (const char* address, long *vector, long int numberOfElements)
{
	vector = (long int*)malloc((numberOfElements)*sizeof(long int));
	*vector = 0;
	FILE* file;
	file = fopen(address, "r");
	if (file == NULL) {
		printf("Falha ao ler arquivo! \n");
		return NULL;
	}
	for (int i = 0; i <= (numberOfElements - 1); i++) {
		fflush(stdin);
		fscanf(file, "%ld", &vector[i]);
	}
	fclose(file);
	printf( "Arquivo lido com sucesso! \n");
	return vector;
}

// Cria um vetor com n�meros aleat�rios
long int* CreateRandomVector (long int numberOfElements)
{
	/* A fun��o gera inteiros aleat�rios entre -1.310.680 e +1.638.350
	�ltima modifica��o de faixa em 05/12/2015, �s 4:42PM */
	srand(time(NULL));
	long int* vector;
	vector = (long int *)(malloc(numberOfElements*sizeof(long int)));
	if (vector == NULL) {
		printf("Erro durante a aloca��o de mem�ria! \n");
		return NULL;
	}
	else {
		for (long int i = 0; i < numberOfElements; i++) {
			int multiplicador = -40 + rand() % 50;
			vector[i] = (32767 * multiplicador + 40 * rand());
		}
	}
	return vector;
}
