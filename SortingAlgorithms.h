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

Arquivo: SortingAlgorithms.h
Descrição: Definição de algoritmos de ordenação
Autor: Lucas de Souza Vieira <lukaslka_my08@hotmail.com>	*/


#ifndef SORTINGALGORITHMS_H
#define SORTINGALGORITHMS_H

// Algoritmo de ordenação Bubble Sort
long int* BubbleSort(long int* vector, long int numberOfElements);

// Algoritmo de ordenação Merge Sort (Passar nº elementos + 1)
void MergeSort(long int* vector, long int numberOfElements);

#endif // !SORTINGALGORITHMS_H
