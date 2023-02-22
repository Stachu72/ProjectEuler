#include <iostream>

void PrintSmallestNumber(int number)
{
	bool isFound = false;
	long smallestNumber = 0;

	//Check for the smallest number that can be devided by each of the number from 1 to passed number without any reminder.
	while (!isFound)
	{
		smallestNumber += number;

		for (int i = 3; i <= number; i++)
		{

			if (smallestNumber % i != 0)
			{
				break;
			}
			else
			{
				if (i == number)
				{
					isFound = true;
				}
			}
		}
	}

	//Print information about the smallest number
	std::cout << "The smallest number that is evenly divisible by all of the numbers from 1 to " << number << " is equal: " << smallestNumber << "\n";
}

int main()
{
	int exampleNumber = 10;
	PrintSmallestNumber(exampleNumber);

	int exerciseNumber = 20;
	PrintSmallestNumber(exerciseNumber);
}
