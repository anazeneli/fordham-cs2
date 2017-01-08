// This program demonstrates the use of dynamic arrays

// Ana Zeneli
// darray.cpp
// 10/11/16

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float *monthSales = nullptr;	// a pointer used to point to an array
	                                // holding monthly sales 

	float total = 0;	// total of all sales
	float average;		// average of monthly sales
	int numOfSales;		// number of sales to be processed 
	int count;			// loop counter

	cout << fixed << showpoint << setprecision(2);

	cout << "How many monthly sales will be processed? ";
	cin >> numOfSales;

    monthSales = new float(numOfSales);
	// Fill in the code to allocate memory for the array pointed to by
	// monthSales.

	if ( monthSales == nullptr )
	{
		cout << "Error allocating memory!\n";
		return 1;
	}

	cout << "Enter the sales below\n";

    for (count = 0; count < numOfSales; count++)
	{
		cout << "Sales for Month number	"
		     << (count+1) // Fill in code to show the number of the month
		     << ":  ";

        cin >> *(count + monthSales);
		// Fill in code to bring sales into an element of the array
	}
    

	for (count = 0; count < numOfSales; count++)
	{
		total = total + monthSales[count];
	}

        average = total / numOfSales; // Fill in code to find the average

	cout << "Average Monthly sale is $" << average << endl;

	// Fill in the code to deallocate memory assigned to the array.
    delete[] monthSales;

    return 0;
}
