
#include "Manager.h"

Manager::Manager(const std::string& theName, double theWage, double theHours, double theBonus):Employee(theName, theWage, theHours), bonus(theBonus){}

double Manager::calcPay() const {
    double basePay = Employee::calcPay();
    return basePay + bonus;
}

void Manager::setBonus(double theBonus) {
    bonus = theBonus;
}