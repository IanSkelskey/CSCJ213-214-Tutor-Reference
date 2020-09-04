#include <string>
#include <cstdlib>
#include <iostream>
#include "hourlyemployee.h"
#include "temporaryemployee.h"
using std::string;
using std::cout;
using std::endl;

namespace SavitchEmployees
{

    TemporaryEmployee::TemporaryEmployee() : HourlyEmployee()
    {
        //deliberately empty
    }

    TemporaryEmployee::TemporaryEmployee(const string& theName, const string& theNumber, double wageRate,
                                         double theHours, const string& startDate, const string& endDate)
    {
        //deliberately empty
    }

    string TemporaryEmployee::getStartDate() const
    {
        return startDate;
    }

    string TemporaryEmployee::getEndDate() const
    {
        return endDate;
    }

    void TemporaryEmployee::setStartDate(const string& theDate)
    {
        startDate = theDate;
    }

    void TemporaryEmployee::setEndDate(const string& theDate)
    {
        endDate = theDate;
    }

    void TemporaryEmployee::printCheck()
    {
        setNetPay(getHours() * getRate());

        cout << "\n___________________________________\n";
        cout << "Pay to the order of " << getName() << endl;
        cout << "The Sum of " << getNetPay() << " Dollars\n";
        cout << "\n___________________________________\n";
        cout << "Check Stub: NOT NEGOTIABLE\n";
        cout << "Employee Number: " << getSsn() << endl;
        cout << "Temporary Employee. \nHours worked: " << getHours()
             << " Rate: " << getRate() << " Pay: " << getNetPay() << endl;
        cout << "Start Date: " << startDate << endl;
        cout << "End Date: " << endDate << endl;
        cout << "\n___________________________________\n";
    }
}
/*
void getStartDate();
void getEndDate();
void setStartDate(const string& theMonth, const string& theDay, const string& theYear);
void setEndDate(const string& theMonth, const string& theDay, const string& theYear);*/
