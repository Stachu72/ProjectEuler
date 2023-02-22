#include <iostream>

void PrintSquareAndSumDifference(int naturalNumber)
{
	// x2 + y2 + ..
	long sumOfSquares = 0;
	// (x + y +...)2
	long squareOfSum = 0;
	long difference = 0;

	//Calculate the sum of the squares and the square of the sum
	for (int i = 1; i <= naturalNumber; i++)
	{
		sumOfSquares += pow(i, 2);
		squareOfSum += i;
	}
	squareOfSum = pow(squareOfSum, 2);

	difference = squareOfSum - sumOfSquares;

	//Print difference
	std::cout << "The difference between the sum of the squares of the first " << naturalNumber << " natural numbers and the square of the sum is equal: " << difference << "\n";
}

int main()
{
	int exampleNumber = 10;
	PrintSquareAndSumDifference(exampleNumber);

	int exerciseNumber = 100;
	PrintSquareAndSumDifference(exerciseNumber);
}
