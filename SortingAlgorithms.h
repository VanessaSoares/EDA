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

Arquivo: SortingAlgorithms.h
Descri��o: Defini��o de algoritmos de ordena��o
Autor: Lucas de Souza Vieira <lukaslka_my08@hotmail.com>	*/


#ifndef SORTINGALGORITHMS_H
#define SORTINGALGORITHMS_H

// Algoritmo de ordena��o Bubble Sort
long int* BubbleSort(long int* vector, long int numberOfElements);

// Algoritmo de ordena��o Merge Sort (Passar n� elementos + 1)
void MergeSort(long int* vector, long int numberOfElements);

#endif // !SORTINGALGORITHMS_H
