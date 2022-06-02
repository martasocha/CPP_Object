class IDCard
{

public:
	struct Date
	{
		int day, month, year;
	};
	IDCard(int dayOfBirth, int dayOfIssue)
	{
		birthDate.day = dayOfBirth;
		issueDate.day = dayOfIssue;
		//this->dayOfBirth = dayOfBirth;
		//this->dayOfIssue = dayOfIssue;
	}
	IDCard(Date birthDate, Date issueDate)
	{
		this->birthDate = birthDate;
		this->issueDate = issueDate;
	}
private:
	Date birthDate;
	Date issueDate;
};

void foo()
{
	IDCard mateusz(27, 2);

	IDCard::Date jakubBirth; //obiekt zagniezdzony
	jakubBirth.day = 27;

	IDCard::Date jakubIssue; //obiekt zagniezdzony
	jakubIssue.day = 27;

};