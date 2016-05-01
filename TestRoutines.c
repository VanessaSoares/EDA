#include "TestRoutines.h"

const char *bestIn[10] = {
	"..\\Entrada\\Best\\Vetor(1)B.txt", "..\\Entrada\\Best\\Vetor(2)B.txt", "..\\Entrada\\Best\\Vetor(3)B.txt",
	"..\\Entrada\\Best\\Vetor(4)B.txt", "..\\Entrada\\Best\\Vetor(5)B.txt", "..\\Entrada\\Best\\Vetor(6)B.txt",
	"..\\Entrada\\Best\\Vetor(7)B.txt", "..\\Entrada\\Best\\Vetor(8)B.txt", "..\\Entrada\\Best\\Vetor(9)B.txt",
	"..\\Entrada\\Best\\Vetor(10)B.txt",
};

const char *worstIn[10] = {
	"..\\Entrada\\Worst\\Vetor(1)W.txt", "..\\Entrada\\Worst\\Vetor(2)W.txt", "..\\Entrada\\Worst\\Vetor(3)W.txt",
	"..\\Entrada\\Worst\\Vetor(4)W.txt", "..\\Entrada\\Worst\\Vetor(5)W.txt", "..\\Entrada\\Worst\\Vetor(6)W.txt",
	"..\\Entrada\\Worst\\Vetor(7)W.txt", "..\\Entrada\\Worst\\Vetor(8)W.txt", "..\\Entrada\\Worst\\Vetor(9)W.txt",
	"..\\Entrada\\Worst\\Vetor(10)W.txt",
};

const char *bestOut[10] = {
	"..\\Saida\\Vetor(1)B.txt", "..\\Saida\\Vetor(2)B.txt", "..\\Saida\\Vetor(3)B.txt",
	"..\\Saida\\Vetor(4)B.txt", "..\\Saida\\Vetor(5)B.txt", "..\\Saida\\Vetor(6)B.txt",
	"..\\Saida\\Vetor(7)B.txt", "..\\Saida\\Vetor(8)B.txt", "..\\Saida\\Vetor(9)B.txt",
	"..\\Saida\\Vetor(10)B.txt",
};

const char *worstOut[10] = {
	"..\\Saida\\Worst\\Vetor(1)W.txt", "..\\Saida\\Worst\\Vetor(2)W.txt", "..\\Saida\\Worst\\Vetor(3)W.txt",
	"..\\Saida\\Worst\\Vetor(4)W.txt", "..\\Saida\\Worst\\Vetor(5)W.txt", "..\\Saida\\Worst\\Vetor(6)W.txt",
	"..\\Saida\\Worst\\Vetor(7)W.txt", "..\\Saida\\Worst\\Vetor(8)W.txt", "..\\Saida\\Worst\\Vetor(9)W.txt",
	"..\\Saida\\Worst\\Vetor(10)W.txt",
};

// Cria a estrutura de pastas do projeto
void createDirectoryStruct()
{
    _mkdir("..\\Entrada");
    _mkdir("..\\Saida");
    _mkdir("..\\Entrada\\Best");
    _mkdir("..\\Entrada\\Worst");
    _mkdir("..\\Saida\\Best");
    _mkdir("..\\Saida\\Worst");
}

int testBubble(char testCase)
{
    double results[50][10] = {0}; // Matriz de resultados de tempos

    if(testCase == 'b' || testCase == 'B'){
        // Melhor caso
        for(int i = 0; i < 50; i++){
            for(int j = 0; j < 10; j++){

            }
        }
    } else {
        // Pior caso
        for(int i = 0; i < 50; i++){
            for(int j = 0; j < 10; j++){

            }
        }
    }
}

int testMerge(char testCase)
{
    double results[50][10] = {0}; // Matriz de resultados de tempos

    if(testCase == 'b' || testCase == 'B'){
        // Melhor caso
        for(int i = 0; i < 50; i++){
            for(int j = 0; j < 10; j++){

            }
        }
    } else {
        // Pior caso
        for(int i = 0; i < 50; i++){
            for(int j = 0; j < 10; j++){

            }
        }
    }
}
