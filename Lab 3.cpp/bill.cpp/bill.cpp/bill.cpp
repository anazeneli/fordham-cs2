// Lab 3.1
// This program will read in the quantity of a particular item and its price.
// It will then print out the total price.
// The input will come from the keyboard and the output will go to
// the screen.
 
// Ana Zeneli
// 9/2/16
// bill.cpp
 
#include <iostream>
#include <iomanip>

using namespace std;
 
int main()
{
    int quantity;
    float itemPrice;
    float totalBill;
 
    cout << setprecision(2) << fixed << showpoint;
    cout << "Please input the number of items bought" << endl;
    cin >> quantity;
    
    cout<< "Please enter the price of each item " << endl;
    cin >> itemPrice;
    
    totalBill = quantity * itemPrice;
    
    cout << "Your total is $" << totalBill << endl;
 
    return 0;
 }

// Exercise 2: removing "fixed" limits the answer to the amount of digits specified by setprecision as opposed to specifying the numbers after the decimal point

// Exercise 3: By inserting "fixed" again and changing the number to 4, we now have an answer with 4 numbers after the decimal point.

/*
 Exercise 4 
 
    Add the following directive to the program: #include <string> in the header. Alter the program so that the program first asks for the name of the product (which can be read into a string object) so that the following sample run of the program will appear.
 Please input the name of the item
 Milk
 Please input the number of items bought
 4
 Please input the price of each item
 1.97
 The item that you bought is Milk The total bill is $7.88
 Now altar the program, if you have not already done so, so that the name of an item could include a space within its string.
 Please input the name of the item
 Chocolate Ice Cream
 Please input the number of items bought
 4
 Please input the price of each item
 1.97
 The item that you bought is Chocolate Ice Cream The total bill is $7.88
 
 */

/*
 #include <iostream>
 #include <iomanip>
 #include <string>
 using namespace std;
 
 int main()
 {
    int quantity;
    float itemPrice;
    float totalBill;
    string item;
 
    cout << setprecision(2) << fixed << showpoint;
    // formatted output
    cout<< "Please input the name of the item " <<endl;
    cin>> item;
    cout << "Please input the number of items bought" << endl   ;
    // Fill in the input statement to bring in the quantity.
    cin >> quantity;
    // 22
    // Fill in the prompt to ask for the price.
    cout<< "Please enter the price of each item ";
    // Fill in the input statement to bring in the price of each item.
    cin>> itemPrice;
    // 10.98
    // Fill in the assignment statement to determine the total bill.
    totalBill= quantity*itemPrice;
    // 241.56
    // Fill in the output statement to print total bill,
    // with a label to the screen.
    cout<< "The item that you bought is " << item << endl;
    cout<< "Your total is $" << totalBill <<endl;
 
    return 0;
}
*/
/*
 
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
 
int main()
{
    int quantity;
    float itemPrice;
    float totalBill;
    string item;
 
    // contains the amount of items purchased
    // contains the price of each item
    // contains the total bill.
 
    cout << setprecision(2) << fixed << showpoint;
    // formatted output
    cout<< "Please input the name of the item " <<endl;
    getline(cin, item);
    cout << "Please input the number of items bought" << endl   ;
    // Fill in the input statement to bring in the quantity.
    cin >> quantity;
    // 22
    // Fill in the prompt to ask for the price.
    cout<< "Please enter the price of each item "<<endl;
    // Fill in the input statement to bring in the price of each item.
    cin>> itemPrice;
    // 10.98
    // Fill in the assignment statement to determine the total bill.
    totalBill= quantity*itemPrice;
    // 241.56
    // Fill in the output statement to print total bill,
    // with a label to the screen.
    cout<< "The item that you bought is " << item << endl;
    cout<< "Your total is $" << totalBill <<endl;
 
    return 0;
}
*/