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

Arquivo: SortingAlgorithms.c
Descri��o: Implementa��o de algoritmos de ordena��o
Autor: Vanessa Soares */

#define _CRT_SECURE_NO_WARNINGS 1
#define SEARCH_FAILURE 0000

#include <stdlib.h>
#include <stdio.h>
#include "SortingAlgorithms.h"

long int _count_merge_sort = 0;

// BUBBLE SORT
long int* BubbleSort (long int* vector, long int numberOfElements)
{
	// Primeiro la�o percorre todo o vetor
	long int aux = 0;
	for (long int i = 1; i <= numberOfElements; i++){
		/* Segundo la�o percorre da primeira � pen�ltima posi��o
		do vetor */
		for (long int j = 0; j < (numberOfElements); j++){
			/* Se o valor da posi��o j for maior que o valor da posi��o
			j+1, ent�o trocar a posi��o dos dois valores */
			if (vector[j] > vector[j + 1]){
				aux = vector[j];
				vector[j] = vector[j + 1];
				vector[j + 1] = aux;
			}
		}
	}

	return vector;
}


// MERGE SORT
void merge (long int* vector, long int numberOfElements)
{
	long int meio;
	long int i, j, k;
	long int* tmp;
	// Vetor tempor�rio
	tmp = (long int* ) malloc(numberOfElements * sizeof(long int));
	if (tmp == NULL) {
		exit(1);
	}
	meio = numberOfElements / 2;
	i = 0;
	j = meio;
	k = 0;
	while (i < meio && j < numberOfElements) {
		if (vector[i] < vector[j]) {
			tmp[k] = vector[i++];
		}
		else {
			tmp[k] = vector[j++];
		}
		++k;
	}

	//Concatena as duas "partes" ordenadas
	if (i == meio) {
		while (j < numberOfElements) {
			tmp[k++] = vector[j++];
		}
	}
	else {
		while (i < meio) {
			tmp[k++] = vector[i++];

		}
	}
	/*Retorna os elementos de forma ordenada ao vector recebido
	como par�metro */
	for (i = 0; i < numberOfElements; ++i) {
		vector[i] = tmp[i];
	}
	//Libera o vector auxiliar
	free(tmp);
}

void MergeSort (long int* vector, long int numberOfElements)
{
	// Vari�veis auxiliares
	long int meio;
	//Divide o vector ao meio e efetua as chamadas recursivas
	if (numberOfElements > 1){
		meio = numberOfElements / 2;
		MergeSort(vector, meio);
		MergeSort(vector + meio, numberOfElements - meio);
		merge(vector, numberOfElements);
	}
}
