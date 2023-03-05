#include <iostream>
#include <fstream>

void PrintFirstTenDigitsFromSum()
{
    //Needs the file with problem 13 numbers data
    std::ifstream data("Problem13Data.txt");
    if (data)
    {
        double number;
        double sum = 0;

        //Sum out all the numbers in the file
        for (int i = 0; i < 100; i++)
        {
            data >> number;
            sum += number;
        }

        //Take first 10 digits from the sum
        while (sum > 9999999999)
        {
            sum /= 10;
        }

        //Print the answer
        std::cout << "Answer: " << (long long)sum << "\n";

        data.close();
    }
    else
    {
        //If the data file doesn't exist
        std::cout << "No data file!" << "\n";
    }
}

int main()
{
    PrintFirstTenDigitsFromSum();
}