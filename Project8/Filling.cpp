#include "functions.h"
#include <ctime>
#include <iostream>

using namespace std;

void filling(int num = 5) {
	srand(time(NULL));
	int* dictionaryIndex = new int[num];

	for (int i = 0; i < num; i++)
	{

		bool isUnique = false;

		while (!isUnique)
		{
			isUnique = true;
			int numTwo = rand() % dictionarySize + 1;

			for (int j = 0; j < num; j++)
			{
				if (numTwo == 0)
				{
					break;
				}

				if (*(dictionaryIndex + j) == numTwo)
				{
					isUnique = false;
					break;
				}
			}
			if (isUnique)
			{
				*(dictionaryIndex + i) = numTwo;
			}
		}
		cout << *(dictionaryIndex + i) << endl;
	}
}