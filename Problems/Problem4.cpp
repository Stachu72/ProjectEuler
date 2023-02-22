#include <iostream>
#include <string>

long ReverseNumber(long number)
{
	int reversedNumber = 0;

	//Reverse the passed number
	while (number > 0)
	{
		reversedNumber *= 10;
		reversedNumber += number % 10;
		number /= 10;
	}

	return reversedNumber;
}

void PrintLargestPalindrome(int xDigitsOfNumber)
{
	std::string maxXDigitNumber = "";

	for (int i = 0; i < xDigitsOfNumber; i++)
	{
		maxXDigitNumber.push_back('9');
	}

	int firstNumber = stoi(maxXDigitNumber);
	int secondNumber = stoi(maxXDigitNumber);
	long procuctOfNumbers = secondNumber * firstNumber;

	long largestPalindrome = 0;

	//Find the largest palindrom
	for (int i = firstNumber; i > 0; i--)
	{
		for (int j = secondNumber; j > 0; j--)
		{
			procuctOfNumbers = i * j;

			if (procuctOfNumbers == ReverseNumber(procuctOfNumbers) && procuctOfNumbers > largestPalindrome)
			{
				largestPalindrome = procuctOfNumbers;
			}
		}
	}

	//Print information about palindrome number
	std::cout << "The largest palindrome made from the product of two " << xDigitsOfNumber << "-digit numbers is equal: " << largestPalindrome << "\n";
}

int main()
{
	int exampleNumber = 2;
	PrintLargestPalindrome(exampleNumber);

	int exerciseNumber = 3;
	PrintLargestPalindrome(exerciseNumber);
}
