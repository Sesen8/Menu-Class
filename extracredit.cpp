
#include <iostream>
#include <iomanip>
#include "menu.h"

using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::fixed;
using std::setprecision;



int main(int argc, char* argv[]){

    cout << "Finished the Program... Goodbye" << endl << endl;
    return 0;
}



// EXTRA CREDIT IDEA
/**
 * Create a menu with the following options
 * 1. Set Size of the Array
 *  =========================
 * 2. Add Number to the Array
 * 3. List the Numbers
 * 4. Remove a Number
 *  ========================
 * 5. Calculate Average
 * 99. Exit
 *
 * AND the program that goes with it!  <------------ <------------- <--------------
 * What happens on each option:
 * 1. Creates a dynamic array of the size that the user inputs (frees the array if it was already created!)
 * >> None of the options below work if there is no array created!
 * 2. Reads a number from the user and adds it to the end of the array... if it fits, if it doesn't signals the error
 * 3. Shows all the numbers very nicely formatted in the screen
 * 4. Given the position of the number it removes it from the array, it pushes the numbers if it is not the last
 * 5. Calculates the average of the numbers in the array
 */