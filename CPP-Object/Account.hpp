#pragma once
#include <string>

enum class AccountType
{
	business,
	privat,
	savings
};

class Account {
	int balance = 0;
	std::string number;
	std::string generateBankNumber();
	
public:
	AccountType type;
	Account(AccountType type); //konstruktor
	//Account(int type);
	std::string showBankNumber();
	int withdraw(int amount);
	void deposit(int amount);
	int getBalance();
	int showAccountCosts();
};
