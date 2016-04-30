#include <stdio.h>
#include <stdlib.h>
#include "Vector.h"
#include "SortingAlgorithms.h"

int main()
{
   long int* vector = CreateRandomVector(100);
   ShowVector(vector, 100);
   SaveVector("..\\VectorTest.txt", vector, 100);
}
