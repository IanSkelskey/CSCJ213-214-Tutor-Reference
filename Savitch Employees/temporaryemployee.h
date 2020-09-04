#ifndef TEMPORARYEMPLOYEE_H
#define TEMPORARYEMPLOYEE_H

#include <string>
#include "hourlyemployee.h"

using std::string;

namespace SavitchEmployees
{

    class TemporaryEmployee : public HourlyEmployee
    {
    public:
        TemporaryEmployee();
        TemporaryEmployee(const string& theName, const string& theSsn, double theWageRate,
                          double theHours, const string& startDate, const string& endDate);
        string getStartDate() const;
        string getEndDate() const;
        void setStartDate(const string& theDate);
        void setEndDate(const string& theDate);
        void printCheck();
    private:
        string startDate;
        string endDate;
    };

}

#endif // TEMPORARYEMPLOYEE_H
