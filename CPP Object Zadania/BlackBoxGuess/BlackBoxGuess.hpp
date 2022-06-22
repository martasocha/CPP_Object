#pragma once

#pragma once

class BlackBoxGuess
{
	int hiddenNumber;
public:
	BlackBoxGuess(int range);
	int is(int guess);
	//int isExact(int guess);
	//int isBigger(int guess)
};