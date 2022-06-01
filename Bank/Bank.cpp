#include <iostream>
class Bank {
	std::string number;
	std::string* history;
	double balance = 0; // dobra praktyka wyzerowania zmiennej

	std::string generateBankNumber()
	{
		return "0000fdsfdsgsdg";
	}
public:
	Bank()
	{
		number = generateBankNumber();
	}

	Bank(double balance)
	{
		this->balance = balance;
		history = new std::string[100];
	}

	Bank(const Bank& old) //dynamicznie alokowana pamiêæ przepisywana jest miêdzy obiektami
	{
		this->balance = old.balance; // odwolanie do drugiego obiektu
		//copy history aaray
	}

	~Bank()
	{
		std::cout << "destruktor" << std::endl;
		delete history;
	}

	double withdraw(double amount)
	{
		double withdrew = amount;
		if (balance > amount)
		{
			balance -= amount;
		}
		else
		{
			withdrew = balance;
			balance = 0;
		}
		return withdrew;
	}
	double withdraw2(double amount)
	{
		if (balance > amount)
		{
			balance -= amount;
		}
		return balance;
	}


	void deposit(double amount)
	{
		balance += amount;
	}

	double getBalance();

	void setBalance(double balance)
	{
		this->balance = balance;
	}
};

double Bank::getBalance()
{
	return balance;
}

void foo()
{
	Bank inMethod();
}

int main()
{
	Bank savingAccount(100);
	Bank savingAccount2(savingAccount); //Bank savingAccount2 = savingAccount;
	std::cout << "savingAccount: " << savingAccount.getBalance() << std::endl;
	std::cout << "savingAccount2: " << savingAccount2.getBalance() << std::endl;
	Bank emptyAccount;
	{
		Bank sanother(savingAccount);
		foo();
	}

	// to jest obiekt dynamiczny
	std::cout << "dynamic objecy start" << std::endl;
	Bank* dynamic = new Bank(100);
	std::cout << "Some magic in between and detructor just after" << dynamic->getBalance() << std::endl; // wywo³ywanie metody dla zmiennej dynamicznej
	delete dynamic;
	std::cout << "dynamic object end" << std::endl;

	savingAccount.deposit(100);
	std::cout << savingAccount.getBalance() << std::endl;
	double cash = savingAccount.withdraw(50);
	std::cout << cash << " " << savingAccount.getBalance() << std::endl;
	cash = savingAccount.withdraw(100); //50
	std::cout << cash << " " << savingAccount.getBalance() << std::endl;

	int x = 5;
	int w = 5 + 1;
	std::cout << "dodatkowy blok kodu";
} 