/**
Este arquivo é parte do projeto Data Structures
Este é um software livre; você pode redistribuí-lo e/ou
modificá-lo dentro dos termos da Licença Pública Geral GNU como
publicada pela Fundação do Software Livre (FSF); na versão 3 da
Licença, ou (na sua opinião) qualquer versão.

Este programa é distribuído na esperança de que possa ser  útil,
mas SEM NENHUMA GARANTIA; sem uma garantia implícita de ADEQUAÇÃO
a qualquer MERCADO ou APLICAÇÃO EM PARTICULAR. Veja a
Licença Pública Geral GNU para maiores detalhes.

Você deve ter recebido uma cópia da Licença Pública Geral GNU junto
com este programa, Se não, veja <http://www.gnu.org/licenses/>.

Arquivo: SortingAlgorithms.c
Descrição: Implementação de algoritmos de ordenação
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
	// Primeiro laço percorre todo o vetor
	long int aux = 0;
	for (long int i = 1; i <= numberOfElements; i++){
		/* Segundo laço percorre da primeira à penúltima posição
		do vetor */
		for (long int j = 0; j < (numberOfElements); j++){
			/* Se o valor da posição j for maior que o valor da posição
			j+1, então trocar a posição dos dois valores */
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
	// Vetor temporário
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
	como parâmetro */
	for (i = 0; i < numberOfElements; ++i) {
		vector[i] = tmp[i];
	}
	//Libera o vector auxiliar
	free(tmp);
}

void MergeSort (long int* vector, long int numberOfElements)
{
	// Variáveis auxiliares
	long int meio;
	//Divide o vector ao meio e efetua as chamadas recursivas
	if (numberOfElements > 1){
		meio = numberOfElements / 2;
		MergeSort(vector, meio);
		MergeSort(vector + meio, numberOfElements - meio);
		merge(vector, numberOfElements);
	}
}
