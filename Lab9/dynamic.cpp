// This program demonstrates the use of dynamic variables

// Ana Zeneli
// dynamic.cpp
// 10/11/16

#include <iostream>
using namespace std;

const int MAXNAME = 10;

int main()
{
	int pos;
	char *name = nullptr;
	int *one = nullptr;
	int *two = nullptr;
	int *three = nullptr;
	int result;
    
    one = new int;       //	Fill in code to allocate the integer variable one here

    two = new int;       //	Fill in code to allocate the integer variable two here

    three = new int ;    //	Fill in code to allocate the integer variable three here

    name = new char[MAXNAME];//	Fill in code to allocate the character array pointed to by name


	cout << "Enter your last name with exactly 10 characters." << endl;
	cout << "If your name has < 10 characters, repeat last letter. " << endl
		 << "Blanks at the end do not count." << endl;

	for (pos = 0; pos < MAXNAME; pos++)
        cin >> *(name+pos);
        
        // Fill in code to read a character into the name array
				// WITHOUT USING a bracketed subscript

	cout << "Hi ";

	for (pos = 0; pos < MAXNAME; pos++)// Fill in code to a print a character from the name array
        cout << *(name+pos) ;    		// WITHOUT USING a bracketed subscript

	cout << endl << "Enter three integer numbers separated by blanks" << endl;
    cin >> *one;
    cin >> *two;
    cin >> *three;
        
	// Fill in code to input three numbers and store them in the
	// dynamic variables pointed to by pointers one, two, and three.
	// You are working only with pointer variables

	// echo print
	cout << "The three numbers are " << *one << " " <<  *two << " " << *three << endl;

	// Fill in code to output those numbers

    result = *one + *two + *three; // Fill in code to calculate the sum of the three numbers

	cout << "The sum of the three values is " << result << endl;

    delete one;
    delete two;
    delete three;
    delete[] name;
	return 0;
}



/*
 Exercise 1: Complete the program by filling in the code. (Areas in bold) This problem requires that you study very carefully the code already written to prepare you to complete the program.
 ***********************************************************************************************
 Sample Run:
 Enter your last name with exactly 10 characters.
 If your name < 10 characters, repeat last letter. Blanks do not count. DeFinooooo
 Hi DeFinooooo
 Enter three integer numbers separated by blanks
 567
 The three numbers are 5 6 7
 The sum of the three values is 18
 ***********************************************************************************************

 Exercise 2: In inputting and outputting the name, you were asked NOT to use a bracketed subscript. Why is a bracketed subscript unnecessary?
 Would using name[pos] work for inputting the name? Why or why not? Would using name[pos] work for outputting the name? Why or why not?
 Try them both and see.
*/








