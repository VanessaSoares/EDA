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

Arquivo: Vector.h
Descri��o: Defini��es de fun��es auxiliares para vetores
Autor: Lucas de Souza Vieira <lukaslka_my08@hotmail.com>	*/

#ifndef VECTOR_H
#define VECTOR_H

#define VALOR_MIN 268435456	
#include <Windows.h>

// Imprime os elementos do vetor
void ShowVector(long int *vector, long int numberOfElements);

// Salva o vetor em um arquivo txt
int SaveVector(const char* address, long int *vector, long int numberOfElements);

// Recupera o vetor de um arquivo
long int* RetrieveVector(const char* address, long *vector, long int numberOfElements);

// Cria um vetor com n�meros aleat�rios
long int* CreateRandomVector(long int numberOfElements);

#endif