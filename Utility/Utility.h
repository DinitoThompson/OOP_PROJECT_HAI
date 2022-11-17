#ifndef PROGRAM_FILE_UTILITY_H
#define PROGRAM_FILE_UTILITY_H

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
#include <string.h>
#include <cstdlib>

using namespace std;

class Utility {

public:

    void user_Login() {
        cout << "**********************" << endl;
        cout << "*H&AI Electric System*" << endl;
        cout << "**********************" << endl;
        cout << "**  Select an User  **" << endl;
        cout << "**  1. Staff.       **" << endl;
        cout << "**  2. Student.     **" << endl;
        cout << "**  3. Exit.        **" << endl;
        cout << "**********************" << endl;
        cout << "Input: ";
    }

    void continue_Option() {
        system("cls");
        cout << "Do you want to continue." << endl;
        cout << "\t1 : Yes" << endl;
        cout << "\t2 : No" << endl;
        cout << "\tInput: ";
    }

    void initial_Setup() {
        cout << "**********************" << endl;
        cout << "*Initial-System-Config*" << endl;
        cout << "**********************" << endl;
        cout << "*#-of-Staff-to-Create*" << endl;
        cout << "**********************" << endl;
        cout << "Input: ";
    }

    bool verify_Staff(string firstName) {

    }
};


#endif //PROGRAM_FILE_UTILITY_H
