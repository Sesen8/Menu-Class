/**
 * Title:   Lab 3 - Menu class Implementation: menu.cpp
 *
 * Purpose: ** your purpose here **
 * Class:   CSC 2430 Winter 2022
 * Author:  ** your name here **
 */


#include "menu.h"

/**
 * The Menu constructor. Notice there is no default constructor. Notice that three streams can be sent to this
 * constructor, they will set _output, _input and _errorStream respectively. When you want to output something to
 * the screen you will use _output. For example:
 * _output << _menuTitle << endl;
 * That statement would send the title of the menu to whatever output stream has be set, by default cout.
 * @param numberOfOptions the number of options the menu will have, remember to include the separators
 * @param output the stream that will be used to send the normal output, by default cout
 * @param input the stream that will be used to receive the normal input, by default cin
 * @param errorStream the stream that will be used to send error output, by default cerr
 */
Menu::Menu(int numberOfOptions, ostream &output, istream &input, ostream &errorStream):
    _numberOfOptions(numberOfOptions),
    _output(output),
    _input(input),
    _errorStream(errorStream){

    // --------> YOU NEED TO IMPLEMENT THIS METHOD

    // This method is incomplete, you still need to write some code here!
}
/**
 * Class destructor, in charge of cleaning the memory
 */
Menu::~Menu() {
// --------> YOU NEED TO IMPLEMENT THIS METHOD

}
/**
 * Finds the maximum length of all menu options, the purpose is to be able to find how many
 * characters are needed for the separators
 * @return the length of the largest menu option (includes option and text)
 */
size_t Menu::MaxMenuLength() const {
// --------> YOU NEED TO IMPLEMENT THIS METHOD
    return 0;
}

/**
 * Sets the error message
 * @param errorMessage The error message when the user inputs a string when a number is expected
 */
void Menu::SetErrorMessage(const string &errorMessage) {
// --------> YOU NEED TO IMPLEMENT THIS METHOD
}

/**
 * Sets the invalid option error message
 * @param invalidMessage The error message when the user inputs an option that is not in the menu
 */
void Menu::SetInvalidOption(const string &invalidMessage) {
// --------> YOU NEED TO IMPLEMENT THIS METHOD

}

/**
 * Sets the input type of the Menu
 * @param type What kind of input the Menu will have, see line 33 to see the available options
 */
void Menu::SetInputType(InputType type) {
// --------> YOU NEED TO IMPLEMENT THIS METHOD

}

/**
 * Sets the title of the Menu
 * @param title menu title
 */
void Menu::SetTitle(const string &title) {
// --------> YOU NEED TO IMPLEMENT THIS METHOD

}

/**
 * Gets the Error Message
 * @return The error message when the user inputs a string when a number is expected
 */
string Menu::GetErrorMessage() const {
// --------> YOU NEED TO IMPLEMENT THIS METHOD
    return std::string();
}

/**
 * Gets the Invalid Option error Message
 * @return The error message when the user inputs an option that is not in the menu
 */
string Menu::GetInvalidOption() const {
// --------> YOU NEED TO IMPLEMENT THIS METHOD
    return std::string();
}

/**
 * Gets the input type
 * @return What kind of input the Menu will have, see line 33 to see the available options
 */
InputType Menu::GetInputType() const {
// --------> YOU NEED TO IMPLEMENT THIS METHOD
    return INT;
}

/**
 * Gets the title
 * @return menu title
 */
string Menu::GetTitle() const {
// --------> YOU NEED TO IMPLEMENT THIS METHOD
    return std::string();
}

/**
 * This method is to add options to the menu. If the user sends an invalid optionNumber the method will return INVALID_MENU_INDEX. Users of this method
 * should never use as displayOption 99 or E, since they are reserved values for exiting.
 * @param optionNumber the slot where the menu is to be added. This represents the position in the array, the method needs to validate that it is a valid position 0<=optionNumber<_numberOfOptions
 * @param displayOption what the user needs to input to select a given menu option
 * @param menuOption the actual text that will be display as a menu option
 * @return INVALID_MENU_INDEX if optionNumber is greater than or equal than numberOfOptions, OVERWROTE_OPTION if there was something already in that array position, the optionNumber otherwise
 */
int Menu::AddMenuOption(unsigned int optionNumber, const string &displayOption, const string &menuOption) {
// --------> YOU NEED TO IMPLEMENT THIS METHOD
    return 0;
}

/**
 * This method adds a separator to the menu. The method will need to call MaxMenuLength to see how big the separator needs to be and set the separator character to '-'.
 * If the user sends an invalid separatorPosition the method will return INVALID_MENU_INDEX
 * @param separatorPosition the slot position where the separator is going to be stored. The method needs to validate that it is a valid position 0<=separatorPosition<numberOfOptions
 * @return INVALID_MENU_INDEX if separatorPosition >= _numberOfOptions, OVERWROTE_OPTION if the slot had something already in that position, separatorPosition otherwise
 */
int Menu::AddSeparator(unsigned int separatorPosition) {
// --------> YOU NEED TO IMPLEMENT THIS METHOD
    return 0;
}

/**
 * This is the main driver of the class! This method will do the following operations:
 * 1. Output the Title
 * 2. Show all the menu options and separators
 * 3. Wait for the user to input the selection
 * 4. Return the user selection, or error appropriately
 * Remember you are outputting to _output, you are reading from _input and you are sending errors to _errorStream!
 * Furthermore, you will need to check what type of input the menu has, depending on that you will read numbers, a character or string.
 *      If your _inputType is INT and the user inputs a letter (or something that is not a number) then Run will return INPUT_ERROR
 *      If your _inputType is INT and the user inputs a number that is not an available option then run will return INVALID_INPUT
 *      If your _inputType is CHAR and the user inputs a string of more than one letter then Run will return INPUT_ERROR
 *      If your _inputType is CHAR and the user inputs a letter that is not an available option then run will return INVALID_INPUT
 *      If your _inputType is STRING and the user inputs a string that is not an available option then run will return INVALID_INPUT
 * @return the slot where the option has been stored (see optionNumber in AddMenuOption), if there is an error it will return the error value as noted above.
 */
int Menu::Run() const {
// --------> YOU NEED TO IMPLEMENT THIS METHOD
// This method is the driver of your class!
    return 0;
}
