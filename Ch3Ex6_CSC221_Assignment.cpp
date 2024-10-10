/*
Title: Chapter 3 Exercise 6 - Ingredient Adjuster
File Name : Ch3Ex6_CSC221_Assignment
Programmer : Brion Blais
Date : 10 / 2024
Requirements :
        
    A cookie recipe calls for the following ingredients:
        • 1.5 cups of sugar
        • 1 cup of butter
        • 2.75 cups of flour
    The recipe produces 48 cookies with this amount of the ingredients. 
    Write a program that asks the user how many cookies he or she wants to make, then displays the number of cups of each ingredient needed for the specified number of cookies.

 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int BATCH_SIZE = 48;
    const double SUGAR_PER_COOKIE = (1.5 / BATCH_SIZE); //cups
    const double BUTTER_PER_COOKIE = (1.0 / BATCH_SIZE); //cups
    const double FLOUR_PER_COOKIE = (2.75 / BATCH_SIZE); //cups
    int cookiesToMake = 0;

    cout << "Please enter the number of cookies you would like to make.\n";
    cin >> cookiesToMake;
    
    if (cookiesToMake > 0) {
        cout << "\nFor " << cookiesToMake << " cookies, you will need " << setprecision(2) << fixed << SUGAR_PER_COOKIE * cookiesToMake << " cups of sugar, ";
        cout << BUTTER_PER_COOKIE * cookiesToMake << " cups of butter, and " << FLOUR_PER_COOKIE * cookiesToMake << " cups of flour." << endl;
    }
    else if (cookiesToMake < 0) {
        cout << "I can only make positive cookies!" << endl;
        cin >> cookiesToMake;
    }
    else {
        cout << "I guess you don't want to make any cookies!";
    }
}