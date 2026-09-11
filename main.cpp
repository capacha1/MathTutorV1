/*Programmer(s) : Cameron Pacha and Fatima Lucas
Date..........: 2026.09.04
GitHub Repo...: https://github.com/capacha1/capacha1
Description...: A easy math tutor that for right now shows so funny facts and asks the users
                name and does a simple math problem.*/

#include <iostream>
#include <string>

using namespace std; // sets the standard namespace

//starts of the main function
int main() {
    //these strings declare new variables
    string userAnswer;
    string userName;
    //integers delcaring the new variable for the numbers
    int leftNum = 5;
    int rightNum = 3;


    cout << "Welcome to the Silly Simple Math Professor V1" << endl;

    //Assciiart used to make the big picture
    cout << R"(
        ----------------------------------------------------------------------
        __  __       _   _       ____             __
       |  \/  | __ _| |_| |__   |  _ \ _ __ ___  / _| ___  ___ ___  ___  _ __
       | |\/| |/ _` | __| '_ \  | |_) | '__/ _ \| |_ / _ \/ __/ __|/ _ \| '__|
       | |  | | (_| | |_| | | | |  __/| | | (_) |  _|  __/\__ \__ \ (_) | |
       |_|  |_|\__,_|\__|_| |_| |_|   |_|  \___/|_|  \___||___/___/\___/|_|
       ----------------------------------------------------------------------)"<< endl;

    cout << "Fun Math Facts:" << endl;
    cout << "Zero is the only number that can not be represented by Roman Numerals." << endl;
    cout << "The word hundred is the only number word with its letters in alphabetical order." << endl;
    cout << "Pie never ends." << endl;
    cout << "1 is not a prime number." << endl;

    cout << "-----------------------------------------------------------------------------" << endl;

    cout << "What is your name:" << endl;

    // grabs the input value you put for your name
    cin >> userName;

    // outputs text and outputs the userName you put in
    cout << "Welcome, " << userName << " to the Math Professor V1!" << endl << endl;

    // outputs text and outputs the userAnswer you put in
    cout << leftNum << "+" << rightNum << "=" << userAnswer << endl;
    // grabs the input value you put for the answer
    cin >> userAnswer;


    cout << "That's all for this version of the Math Professor V1. " << endl;

    cout << "Version 2 is coming whenever the next assignment is due..." << endl;

    cout << "End of program." << endl;
}