#include <iostream>

long FindPrimeNumberUnderIndex(int expectedPrimeIndex)
{
	int currentPrimeIndex = 1;
	long naturalNumber = 2;

	//Check for all prime numbers until the expected prime index is reached
	for (; currentPrimeIndex != expectedPrimeIndex; naturalNumber++)
	{
		bool isPrime = true;

		for (int j = 2; j * j <= naturalNumber; j++)
		{
			if (naturalNumber % j == 0)
			{
				isPrime = false;
			}
		}

		if (isPrime == true)
		{
			currentPrimeIndex++;
		}
	}

	return naturalNumber;
}

void PrintPrimeNumberUnderIndex(int expectedPrimeIndex)
{
	long primeNumber = FindPrimeNumberUnderIndex(expectedPrimeIndex);

	int lastTwoDigits = expectedPrimeIndex % 100;
	std::string suffix = "th";

	//Use selected suffix 
	switch (lastTwoDigits)
	{
	case 1:
		suffix = "st";
		break;

	case 2:
		suffix = "nd";
		break;

	case 3:
		suffix = "rd";
		break;
	};

	//Print the information about the prime number
	std::cout << "The " << expectedPrimeIndex << suffix << " prime number is equal: " << primeNumber << "\n";
}

int main()
{
	int exampleNumber = 6;
	PrintPrimeNumberUnderIndex(exampleNumber);

	int exerciseNumber = 10001;
	PrintPrimeNumberUnderIndex(exerciseNumber);
}
