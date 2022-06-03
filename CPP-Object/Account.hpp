#pragma once
#include <string>

class Account {
	int balance = 0;
	std::string number;
	std::string generateBankNumber();
public:
	enum class AccountType: char
	{
		business,
		privat,
		savings
	};
	Account(); //konstruktor
	//Account(int type);
	std::string showBankNumber();
	int withdraw(int amount);
	void deposit(int amount);
	int getBalance();
	int showAccountCosts(AccountType type);
};
