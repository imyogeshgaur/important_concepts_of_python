#include <iostream>
using namespace std;
class Employee
{
protected:
    string employeeId;
    string employeeName;
    string dateOfJoining;
    string contactNumber;
    string departmentOfEmployee;

public:
    Employee(string eid, string ename, string doj, string contactNo, string department)
    {
        this->employeeId = eid;
        this->employeeName = ename;
        this->dateOfJoining = doj;
        this->contactNumber = contactNo;
    }
    virtual void showValue() = 0;
};
class Manager : public Employee
{
protected:
    int salesRecord;
    float revenueGenerated;

public:
    Manager(string id, string name, string doj, string number, string dept, int sales) : Employee(id, name, doj, number, dept)
    {
        this->departmentOfEmployee = dept;
        this->salesRecord = sales;
        this->revenueGenerated = salesRecord * 0.89;
    }
    void showValue()
    {
        cout << "The Employee Id of the Employee is : " << employeeId << endl;
        cout << "The Name of the Employee is : " << employeeName << endl;
        cout << "The Date of Joing  of the Employee is : " << dateOfJoining << endl;
        cout << "The Contact Number of the Employee is : " << contactNumber << endl;
        cout << "The Department of the Employee is : " << departmentOfEmployee << endl;
        cout << "The Sales of the Employee is : " << salesRecord << endl;
        cout << "The Net Revenue Generated by the Employee is : " << revenueGenerated << endl;
    }
};
class Programmer : public Employee
{
protected:
    char ch;
    string languageToCode;
    string previousProjectName;

public:
    Programmer(string id, string name, string doj, string number, string dept, string ppn) : Employee(id, name, doj, number, dept)
    {
        this->departmentOfEmployee = dept;
        this->previousProjectName=ppn;
        cout << "We have SDE job in C++/Kotlin/Python/JavaScript/Dart only !!!" << endl;
        cout << "Press C/c for C++ \nPress D/d for Dart \nPress J/j for JavaScript \nPress K/k for Kotlin \nPress P/p for Python " << endl;
        cout<<"Enter Your Expertise Language : ";
        cin>>ch;
        switch (ch)
        {
        case 'C':
            this->languageToCode = "C++";
            break;
        case 'c':
            this->languageToCode = "C++";
            break;
        case 'D':
            this->languageToCode = "Dart";
            break;
        case 'd':
            this->languageToCode = "Dart";
            break;
        case 'J':
            this->languageToCode = "JavaScript";
            break;
        case 'j':
            this->languageToCode = "JavaScript";
            break;
        case 'K':
            this->languageToCode = "Kotlin";
            break;
        case 'k':
            this->languageToCode = "Kotlin";
            break;
        case 'P':
            this->languageToCode = "Python";
            break;
        case 'p':
            this->languageToCode = "Python";
            break;
        default:
            cout << "Wrong Input !!!";
            break;
        }
    }
    void showValue()
    {
        cout << "The Employee Id of the Employee is : " << employeeId << endl;
        cout << "The Name of the Employee is : " << employeeName << endl;
        cout << "The Date of Joing  of the Employee is : " << dateOfJoining << endl;
        cout << "The Contact Number of the Employee is : " << contactNumber << endl;
        cout << "The Department of the Employee is : " << departmentOfEmployee << endl;
        cout << "The Language Of Coding Of the Developer is : " << languageToCode << endl;
        cout << "The Employee has Done Past Project Named as : " << previousProjectName << endl;
    }
};
int main()
{
    Manager M("101011","Mukesh","12-July-2000","9868747638","Managment",456);
    M.showValue();
    Programmer P("101010","Yogesh","12-July-2020","9868747636","Development","Android App");
    P.showValue();
    return 0;
}