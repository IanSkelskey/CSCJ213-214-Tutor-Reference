#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using std::string;

namespace SavitchEmployees
{
    class Employee
    {
    public:
        Employee();
        Employee(const string& theName, const string& theSsn);
        string getName() const;
        string getSsn() const;
        string getPosition() const;
        double getNetPay() const;
        void setName(const string& newName);
        void setSsn(const string& newSsn);
        void setPosition(const string& newPosition);
        void setNetPay(double newNetPay);
        void printCheck() const;
    private:
        string name;
        string ssn;
        string position;
        double netPay;
    };

}//SavitchEmployees

#endif // EMPLOYEE_H
