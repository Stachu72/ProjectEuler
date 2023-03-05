#include <iostream>
#include <vector>
#include <algorithm>

void PrintLongestCollatzSequence(const int& topValue)
{
    unsigned long number;
    int sequenceAmount = 1;

    std::vector<int> terms(topValue);

    //Make number
    for (int i = 0; i < topValue; i++)
    {
        number = topValue - i;
        sequenceAmount = 1;

        //Calculate number's terms
        while (number != 1)
        {
            if (number % 2 == 0)
            {
                number /= 2;
                sequenceAmount++;
            }
            else
            {
                number = number * 3 + 1;
                sequenceAmount++;
            }
        }

        terms[topValue - i - 1] = sequenceAmount;
    }

    //Find the number with the largest number of terms
    auto largestSequenceAmount = max_element(terms.begin(), terms.end());
    int answerNumber = distance(terms.begin(), largestSequenceAmount);

    //Print the answer
    std::cout << "Answer: " << answerNumber + 1 << "\n";
}

int main()
{
    const int exerciseNumber = 1000000;
    PrintLongestCollatzSequence(exerciseNumber);
}