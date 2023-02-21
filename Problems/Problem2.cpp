#include <iostream>

void SumOfEvenValuedTerms(int topTerm)
{
    int sum = 0;
    int previousFibonacciNumber = 1;
    int fibonacciNumber = 2;

    while (previousFibonacciNumber < topTerm)
    {
        //Check for even number
        if (fibonacciNumber % 2 == 0)
        {
            sum += fibonacciNumber;
        }

        //Update fibonacci numbers
        int intHandle = fibonacciNumber;
        fibonacciNumber += previousFibonacciNumber;
        previousFibonacciNumber = intHandle;
    }

    std::cout << "The sum of the even-valued terms that not exceed: " << topTerm << " is equal: " << sum << "\n";
}

int main()
{
    //Fibonacci sequence cannot exceed four milion
    int givenNumber = 4000000;
    SumOfEvenValuedTerms(givenNumber);
}
