#include <iostream>

void SumOfAllMultiples(int topNumber)
{
    int sum = 0;

    for (int number = 0; number < topNumber; number++)
    {
        if (number % 3 == 0 || number % 5 == 0)
        {
            sum += number;
        }
    }

    std::cout << "The sum of all the multiples of 3 and 5 below top number: " << topNumber << "  is equal : " << sum << "\n";
}

int main()
{
    int givenNumber = 1000;
    SumOfAllMultiples(givenNumber);
}
