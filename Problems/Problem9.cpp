#include <iostream>

void PrintPythagoreanTriangleProduct(int triangleSidesSum)
{
	long pythagoreanTripletProduct = 0;

	//Check for valid pythagorean triplet
	for (int a = triangleSidesSum / 4; a > 1 / 4; a--)
	{
		for (int b = triangleSidesSum / 2; b > 1; b--)
		{
			if (a > b) break;

			for (int c = triangleSidesSum / 2; c > 1; c--)
			{
				if (b > c) break;

				if (a * a + b * b == c * c && a + b + c == triangleSidesSum)
				{
					//If found -> calculate the product of the triangle sides
					pythagoreanTripletProduct = a * b * c;

					//...and exit the loops
					goto Found;
				}
			}
		}
	}
Found:

	//Print information about the product
	std::cout << "The product of the Pythagorean triplet for a + b + c = " << triangleSidesSum << " is equal: " << pythagoreanTripletProduct << "\n";
}

int main()
{
	int exampleNumber = 12;
	PrintPythagoreanTriangleProduct(exampleNumber);

	int exerciseNumber = 1000;
	PrintPythagoreanTriangleProduct(exerciseNumber);
}
