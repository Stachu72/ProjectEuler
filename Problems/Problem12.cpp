#include <iostream>

void PrintHighlyDivisibleTriangularNumber(int divisorsNumber)
{
	long triangleNumber = 0;
	int factorsNumber = 0;

	//Create a triangle number.
	for (long i = 1; factorsNumber < divisorsNumber; i++)
	{
		triangleNumber += i;
		factorsNumber = 1;

		//Sum up all factors of the triangle number.
		for (long divisor = 1; divisor * divisor <= triangleNumber; divisor++)
		{
			if (triangleNumber % divisor == 0)
			{
				factorsNumber++;

				if (triangleNumber / divisor != divisor)
				{
					factorsNumber++;
				}
			}
		}
	}

	//Create number suffix.
	std::string suffix = "th";
	int twoLastNumbers = divisorsNumber % 100;

	switch (twoLastNumbers)
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
	}

	//Print information about the divisors.
	std::cout << "The " << divisorsNumber << suffix << " triangle number has " << factorsNumber - 1 << " divisors and is equal to " << triangleNumber << "\n";
}

int main()
{
	int exampleNumber = 7;
	PrintHighlyDivisibleTriangularNumber(exampleNumber);

	int exerciseNumber = 500;
	PrintHighlyDivisibleTriangularNumber(exerciseNumber);
}
