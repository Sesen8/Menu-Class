/**
 * Title:   Lab 3 - extracredit.cpp
 *
 * Purpose: Create and organize menu
 * Class:   CSC 2430 Winter 2022
 * Author:  Sesen Yonas
 */

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

    Menu* MenuNew;

    MenuNew = new Menu(7,cout,cin,cerr);

    MenuNew->SetErrorMessage("- - > Unrecognized Input < - -");
    MenuNew->SetInvalidOption("- - > Please Input One of the Given Choices < - -");
    MenuNew->SetInputType(INT);
    MenuNew->SetTitle("Working with Arrays");

    MenuNew->AddMenuOption(0,"1","Set Size of the Array");
    MenuNew->AddSeparator(1);
    MenuNew->AddMenuOption(2,"2","Add Number to Array");
    MenuNew->AddMenuOption(3,"3","List the Numbers");
    MenuNew->AddMenuOption(4,"4","Remove a Number");
    MenuNew->AddSeparator(5);
    MenuNew->AddMenuOption(6,"5","Calculate Average");

    int selectedOption;
    int sizeofArray = -1;

    double* createdArray = nullptr;
    int option = 0;

    while((selectedOption = MenuNew->Run()) != EXIT){


        // checks if user selected 1, creates array
        if (selectedOption == 0){
            if(createdArray != nullptr){
                delete[] createdArray;
                cout << "The created array will be lost" << endl;
            }
            cout << "Please input the maximum capacity of the array: ";
            cin >> sizeofArray;

            while(sizeofArray < 0){
                cout << "Please input the maximum capacity of the array: " << endl;
                cin >> sizeofArray;
            }
            createdArray = new double[sizeofArray];
            cout << "Array Created Successfully" << endl;
            option = 0;
        }



        // checks if user selected 2, adds numbers to array
        if (selectedOption ==2){
            if(createdArray == nullptr){
                cout << "Need to create array first!" << endl;
                continue;
            }
            double userAdd;
            if(option >= sizeofArray){
                cout <<"Array is full" << endl;
                continue;
            }
            cout << "Adding Number to Array" << endl;
            cout << "Please input the number you want to add: ";
            cin >> userAdd;


            createdArray[option] = userAdd;
            cout << "Number "<< userAdd<< " Added to Position "<<option<< " Successfully" << endl;
            option+=1;
        }


        // checks if user selected 3, lists added numbers
        if(selectedOption ==3){
            if(createdArray == nullptr){
                cout << "Need to create array first!" << endl;
                continue;
            }
            cout << "Listing Numbers" << endl;
            for(int i =0; i<option; i++){
                cout << i << " " << createdArray[i] << endl;
            }
        }


        // checks if user selected 4, removes selected number
        if(selectedOption ==4){
            if(createdArray == nullptr){
                cout << "Need to create array first!" << endl;
                continue;
            }
            for(int i =0; i<option; i++){
                cout << i << " " << createdArray[i] << endl;
            }

            cout <<"What is the position where you want to remove a number: ";
            int removePos;
            cin >> removePos;
            if (removePos >=0 && removePos < option){
                for (int i = removePos; i<option-1; i++){
                    createdArray[i] = createdArray[i+1];
                }
                cout << "Number in Position 0 Removed Successfully" << endl;
                option = option -1;
            }
            else {
                cout << "Invalid Position" << endl;
            }

        }


        // checks if user selected 5, calculates the average of array
        if (selectedOption == 6){
            if(createdArray == nullptr){
                cout << "Need to create array first!" << endl;
                continue;
            }
            double total = 0.0;
            for (int i = 0; i<option; i++){
                total+=createdArray[i];
            }
            double average = total/option;
            cout << "The average is " << average << endl;
        }


    }
    cout << "Finished the Program... Goodbye"<<endl<<endl;
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