#include <iostream>
#include "Account.hpp"


//zwraca staly numer



Account::Account(AccountType type)
{
	this->type = type;
	number = generateBankNumber();
}

std::string Account::showBankNumber()
{
	return number;
}

std::string Account::generateBankNumber()
{
	return "PL 12 9206 1022 2727 2052 0806 4469";
}




int Account::withdraw(int amount)
{
	if (amount > 0)
	{
		if (balance >= amount)
		{
			balance -= amount;
			return balance;
		}
		else
		{
			std::cout << "Not enough money in the account. Unable to withdraw" << std::endl;
			return balance;
		}
	}
	else
	{
		std::cout << "Error! You cannot withdraw less than 0." << std::endl;
		return 0;
	}

}

void Account::deposit(int amount)
{
	if (amount > 0)
	{
		balance += amount;
	}
	else
	{
		std:: cout << "Error! You cannot deposit less than 0." << std::endl;
	}
}

int Account::getBalance()
{
	return balance;
}


int Account::showAccountCosts()
{
	if (type == AccountType::business)
	{
		return 300;
	}
	else if (type == AccountType::privat)
	{
		return 200;
	}
	else if (type == AccountType::savings)
	{
		return 100;
	}
	else
	{
		return 0;
	}
	
}
