#include <iostream>
#include <string>
#include "employee.h"
#include "hourlyemployee.h"
#include "salariedemployee.h"
#include "temporaryemployee.h"

/*using std::cin;
using std::cout;
using std::endl;*/
using namespace std;
using SavitchEmployees::Employee;
using SavitchEmployees::TemporaryEmployee;
using SavitchEmployees::HourlyEmployee;
using SavitchEmployees::SalariedEmployee;

int menu();
string input(string input);
double inputNbr(string input);
HourlyEmployee getHourlyEmployee();
SalariedEmployee getSalariedEmployee();
TemporaryEmployee getTemporaryEmployee();

int main()
{

    while(menu());

    return 0;
}

//Function Definitions

string input(string input)
{
    string tempString;
    cout << "Enter " << input;
    //cin >> tempString;
    getline(cin, tempString);
    //tempString = "Ian Skelskey";
    cout << endl;
    //cout << tempString;
    return tempString;
}

double inputNbr(string input)
{
    string number;
    double tempNbr;
    cout << "Enter " << input;
    getline(cin, number);
    tempNbr = stod(number);
    //cin >> tempNbr;
    cout << endl;
    return tempNbr;
}

HourlyEmployee getHourlyEmployee()
{
    HourlyEmployee x;
    x.setName(input("Name :"));
    x.setSsn(input("SSN: "));
    x.setPosition(input("Position: "));
    x.setHours(inputNbr("Hours Worked: "));
    x.setRate(inputNbr("Hourly Wage: "));
    x.setNetPay(x.getRate()*x.getHours());
    x.printCheck();
    return x;
}

SalariedEmployee getSalariedEmployee()
{
    SalariedEmployee y;
    y.setName(input("Name :"));
    y.setSsn(input("SSN: "));
    y.setPosition(input("Position: "));
    y.setSalary(inputNbr("Weekly Salary: "));
    y.setNetPay(y.getSalary());
    y.printCheck();
    return y;
}

TemporaryEmployee getTemporaryEmployee()
{
    TemporaryEmployee z;
    z.setName(input("Name :"));
    z.setSsn(input("SSN: "));
    z.setPosition(input("Position: "));
    z.setStartDate(input("Start Date: "));
    z.setEndDate(input("End Date: "));
    z.setHours(inputNbr("Hours Worked: "));
    z.setRate(inputNbr("Hourly Wage: "));
    z.setNetPay(z.getRate()*z.getHours());
    z.printCheck();
    return z;
}

int menu()
{
    string select;
    int choice;

    cout << "Employee Check Printer" << endl << endl;
    cout << "To select employee type enter number from corresponding box." << endl;
    cout << "Hourly Employee [1]" << endl;
    cout << "Salaried Employee [2]" << endl;
    cout << "Temporary Employee [3]" << endl;
    cout << "Enter here: ";
    getline(cin, select);
    choice = stoi(select);

    HourlyEmployee x;
    SalariedEmployee y;
    TemporaryEmployee z;

    switch (choice)
    {
    case 1:
        getHourlyEmployee();
        break;
    case 2:
        getSalariedEmployee();
        break;
    case 3:
        getTemporaryEmployee();
        break;
    }
return 1;
}

/*    TemporaryEmployee joe;
    joe.setName("Mighty Joe");
    joe.setSsn("123-45-6789");
    joe.setRate(20.50);
    joe.setHours(40);
    joe.setStartDate("10-27-2017");
    joe.setEndDate("01-18-2018");
    cout << "Check for " << joe.getName()
         << " for " << joe.getHours() << " hours. \n";
    joe.printCheck();
    cout << endl;

    SalariedEmployee boss("Mr. Big Shot", "987-65-4321", 10500.50);
    cout << "Check for " << boss.getName() << endl;
    boss.printCheck();*/
