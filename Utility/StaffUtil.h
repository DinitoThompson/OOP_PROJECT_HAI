#ifndef PROGRAM_FILE_STAFFUTIL_H
#define PROGRAM_FILE_STAFFUTIL_H

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
#include <string.h>
#include <cstdlib>

using namespace std;

#include "Utility.h"
#include "Class/Student.h"
#include "Class/Programme.h"

class StaffUtil : Utility {

public:
    void staff_Login() {}

    void register_Student() {

        int idNumber;
        string firstName;
        string lastName;
        string address;
        Date dateEnrolled;
        string programmeCode;
        string enrollmentStatus;
        string contactNumber;
        string password;

        int day;
        string month;
        int year;


        cout << "Enter Student Info " << endl;

        cout << "   1. Enter ID Number: " << endl;
        cin >> idNumber;
        cout << "   2. Enter First Name: " << endl;
        cin >> firstName;
        cout << "   3. Enter Last Name: " << endl;
        cin >> lastName;
        cout << "   4. Enter Address: " << endl;
        cin >> address;
        cout << "   5. Enter Programme Code: " << endl;
        cin >> programmeCode;
        cout << "   6. Enter Enrollment Status: " << endl;
        cin >> enrollmentStatus;
        cout << "   7. Enter Contact Number: " << endl;
        cin >> contactNumber;
        cout << "   8. Enter Month Employed:  " << endl;
        cin >> month;
        cout << "   9. Enter Day Employed:  " << endl;
        cin >> day;
        cout << "   10. Enter Year Employed:  " << endl;
        cin >> year;
        cout << "   11. Enter Password: " << endl;
        cin >> password;

        dateEnrolled.setDay(day);
        dateEnrolled.setYear(year);
        dateEnrolled.setMonth(month);

        Student student = Student(idNumber, firstName, lastName, address, dateEnrolled, programmeCode, enrollmentStatus, contactNumber, password);

    }

    void create_Programme() {

        string programmeCode;
        string name;
        int maximumNumberOfCourse;
        string award;
        string accreditation;


        cout << "Enter Programme Code Info " << endl;

        cout << "   1. Enter Programme Code: " << endl;
        cin >> programmeCode;
        cout << "   2. Enter Name: " << endl;
        cin >> name;
        cout << "   3. Enter Maximum Number Of Courses: " << endl;
        cin >> maximumNumberOfCourse;
        cout << "   4. Enter Award: " << endl;
        cin >> award;
        cout << "   5. Enter Accredit   ation: " << endl;
        cin >> accreditation;

        Programme programme = Programme(programmeCode, name, maximumNumberOfCourse, award, accreditation);
    }

    void modify_Programme() {}

    void generate_StudentList() {}
};


#endif //PROGRAM_FILE_STAFFUTIL_H
