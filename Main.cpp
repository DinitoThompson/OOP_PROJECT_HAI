#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
#include <cstdio>
#include <string.h>
#include <cstdlib>

#include "OlderClasses/Admin.h"
#include "OlderClasses/Customer.h"
#include "OlderClasses/User.h"

#include "Class/Staff.h"
#include "Class/Student.h"
#include "Class/Course.h"
#include "Class/Programme.h"
#include "Utility/AdminUtil.h"
#include "Utility/StaffUtil.h"
#include "Utility/StudentUtil.h"

using namespace std;

/*
 * THIS IS AN OLD OOP PROJECT
 * BUT ITS STRUCTURE AND IMPLEMENTATION IS SIMILAR TO WHAT YOU NEED TO DO
 * GO THROUGH THE CODE, UNDERSTAND HOW IT WORKS AS A GROUP
 * THEN REFACTOR IF TO SUITE YOUR PROJECT
 *
 * THE FOLDER "Older Classes" SHOULD BE DELETED ONCE YOU FINISH YOUR PROJECT
 * ALL THOSE FILES BELONG TO MY OLD PROJECT
 * */

int main() {
    // Class Instances
    User user;
    Admin admin;
    Customer customer;

    // H&AI
    Student student;
    Course course;
    Programme programme;
    Date date;
    Staff staff;

    // H&AI Utility
    AdminUtil adminUtil;
    StaffUtil staffUtil;
    StudentUtil studentUtil;
    Utility utility;


    // Driver Variables
    int user_Opt;
    int orderC_Opt;
    int order_Opt;

    int customer_Opt;
    int admin_Opt;

    string user_Name;
    string user_Password;

    /*
     * Initial System Configuration
     * YOU CAN UNCOMMENT THE CODE BELOW
     * IT IS THE INITIAL SETUP FROM THE PROJECT*/

//    fflush(stdin);
//    utility.initial_Setup();
//    cin >> user_Opt;
//    adminUtil.initial_Config(user_Opt);

    do {
        system("cls");
        fflush(stdin);
        utility.user_Login();
        cin >> user_Opt;

        switch (user_Opt) {
            // Staff Instance
            case 1:
                system("cls");
                fflush(stdin);
                cout << "Welcome Staff !\n" << endl;
                system("pause");
                system("cls");

                cout << "Staff - Sign In \n" << endl;
                cout << "Enter Staff ID: ";
                cin >> user_Name;
                cout << "Enter Password: ";
                cin >> user_Password;

                if (user_Name == "staff" && user_Password == "staff") {
                    do {
                        system("cls");
                        fflush(stdin);

                        cout << "Welcome Sir / Ma'am ! \n\n" << endl;
                        admin.view_Menu();
                        cout << "\n\n" << endl;
                        admin.admin_Options();
                        cin >> admin_Opt;

                        switch (admin_Opt) {
                            case 1:
                                system("cls");
                                fflush(stdin);
                                admin.add_Item();
                                break;
                            case 2:
                                system("cls");
                                fflush(stdin);
                                admin.menu_Search();
                                break;
                            case 3:
                                system("cls");
                                fflush(stdin);
                                admin.edit_Menu();
                                break;
                            case 4:
                                system("cls");
                                fflush(stdin);
                                admin.delete_Menu();
                                break;
                            case 5:
                                system("cls");
                                fflush(stdin);
                                cout << "Returning to Main Menu." << endl;
                                break;
                            default:
                                system("cls");
                                fflush(stdin);
                                cout << "Incorrect Option" << endl;
                                break;
                        }
                    } while (admin_Opt != 5);
                } else {
                    system("cls");
                    fflush(stdin);
                    cout << "Incorrect Credentials.\n" << endl;
                    cout << "Returning to Main Menu.\n" << endl;
                    system("pause");
                }
                break;

                // Customer Instance
            case 2:
                system("cls");
                fflush(stdin);
                cout << "Welcome Valued Customer !\n" << endl;
                system("pause");
                system("cls");

                cout << "Sign In \n" << endl;
                cout << "Enter Username: ";
                cin >> user_Name;
                cout << "Enter Password: ";
                cin >> user_Password;

                if (user_Name == "cust1" && user_Password == "qwerty") {
                    do {
                        system("cls");
                        fflush(stdin);
                        cout << "Welcome Customer ! \n\n" << endl;
                        customer.view_Menu();
                        cout << "\n\n" << endl;
                        customer.customer_Options();
                        cin >> customer_Opt;

                        switch (customer_Opt) {
                            case 1:
                                system("cls");
                                fflush(stdin);
                                customer.create_Order();
                                break;

                            case 2:
                                system("cls");
                                fflush(stdin);
                                cout << "Search for Item. \n" << endl;
                                customer.menu_Search();
                                break;

                            case 3:
                                system("cls");
                                fflush(stdin);
                                customer.view_Order();
                                customer.order_Options();
                                cin >> order_Opt;

                                switch (order_Opt) {
                                    case 1:
                                        system("cls");
                                        fflush(stdin);
                                        customer.delete_Order();
                                        break;

                                    case 2:
                                        system("cls");
                                        fflush(stdin);
                                        customer.submit_Order();
                                        break;

                                    case 3:
                                        system("cls");
                                        fflush(stdin);
                                        cout << "Returning to Main Menu." << endl;
                                        break;

                                    default:
                                        system("cls");
                                        fflush(stdin);
                                        cout << "Incorrect Option." << endl;
                                        break;
                                }
                                break;

                            case 4:
                                system("cls");
                                fflush(stdin);
                                cout << "Returning to Front Page." << endl;
                                break;
                                fflush(stdin);

                            default:
                                system("cls");
                                cout << "Incorrect Option." << endl;
                                break;
                        }
                    } while (customer_Opt != 4);
                } else {
                    system("cls");
                    fflush(stdin);
                    cout << "Incorrect Credentials.\n" << endl;
                    cout << "Returning to Main Menu.\n" << endl;
                    system("pause");
                }
                break;

                //Exit
            case 3:
                system("cls");
                cout << "Good Bye !..." << endl;
                system("pause");
                break;

                //Invalid Option
            default:
                system("cls");
                cout << "Invalid Option." << endl;
                system("pause");
                break;
        }
    } while (user_Opt != 3);

    return 0;
}
