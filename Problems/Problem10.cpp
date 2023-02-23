#include <iostream>

void PrintSumOfPrimesBelowXValue(int xValue)
{
	bool isPrime = false;
	long long primesSum = 0;

	//Find primes below X value
	for (int i = 2; i < xValue; i++)
	{
		isPrime = true;

		for (int j = 2; j * j <= i; j++)
		{
			if (i % j == 0)
			{
				isPrime = false;
				break;
			}
		}

		//If a number is prime -> add to the sum
		if (isPrime == true)
		{
			primesSum += i;
		}
	}

	//Print information about the sum
	std::cout << "The sum of all the primes below " << xValue << " is equal: " << primesSum << "\n";
}

int main()
{
	int exampleNumber = 10;
	PrintSumOfPrimesBelowXValue(exampleNumber);

	int exerciseNumber = 2000000;
	PrintSumOfPrimesBelowXValue(exerciseNumber);
}
