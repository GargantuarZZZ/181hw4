
#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"
#include <string>

class Manager : public Employee {
	private:
		double bonus;

	public:
		Manager(const std::string& theName, double theWage, double theHours, double theBonus);
		double calcPay() const;
		void setBonus(double theBonus);
};

#endif // MANAGER_H