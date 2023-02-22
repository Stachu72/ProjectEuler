#include <iostream>

void DisplayLargestPrimeFactor(long long givenNumber)
{
    int primeFactor = 2;
    long long givenNumberHandle = givenNumber;

    //Find prime factor 
    for (int i = 2; i <= givenNumber; i++)
    {
        while(givenNumber % i == 0)
        {
            givenNumber /= i;
            primeFactor = i;
        }
    }

    std::cout << "The largest prime factor of the number: " << givenNumberHandle << " is equal: " << primeFactor << "\n";
}

int main()
{
    int exampleNumber = 13195;
    DisplayLargestPrimeFactor(exampleNumber);

    long long exerciseNumber = 600851475143;
    DisplayLargestPrimeFactor(exerciseNumber);
}
