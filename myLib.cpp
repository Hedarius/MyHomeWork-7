#include <cstdlib>
#include <iostream>

//------------------------------Task 1-------------------------------//

namespace arrLib
{
	void fillingArray(float* arr, const int size)
	{
		for (int i = 0; i < size; i++)
		{
			arr[i] = rand() % 200 - 100;
		}
	}

	void printArray(float* arr, const int size)
	{
		for (int i = 0; i < size; i++)
		{
			std::cout << arr[i] << " ";
		}
		std::cout << std::endl;
	}

	void countPosNegNum(float* arr, const int size, int& positive, int& negative)
	{
		for (int i = 0; i < size; i++)
		{
			if (arr[i] < 0)
			{
				++negative;
			}
			else if (arr[i] > 0)
			{
				++positive;
			}
		}
	}
}

