// Jay-alexander elliot
// September 2nd 2015
// ENGR 021 Monday 6:30-9:40 PM
// Purpose: demo program, calculates a right triangle.
//
/*
 *
 *
 *
 Pseudocode for this program:
 1. Declare and explain variables.
 2. ask the user for legs a and b.
 3. Use the general formula relating the lengths of sides of right triangle, which is a*a + b*B = c*c where a and
 b are legs at right angles to each other and c is the third leg
 4. Print out a, b, c each with it's own label.
 */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //declare variables needed
    float a,b,c;       // a, b, c are sides of right triangle
    // Get input
    cout << "enter side a:" <<endl;
    cin >>a;
    cout << "Enter side b: " << endl;
    cin >>b;

    // Do calculations
    c=sqrt(a*a + b*b);

    // Print output
    cout << "For a right triangle with" << endl;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    cout << "c=" << c << endl;

    //Say goodbye and end this run
    cout << "Thank you for using me!" <<endl;
    return 0; //returns control back to the operating system
}


