#include "question.h"
#include "operating_functions.h"
#include <iostream>
#include <fstream>
#include <algorithm>
#include "UserInOut.h"

Question::Question(const std::string& Question) :
		question(Question)
{

}

int Question::ask(int number, int allNumber)
{
	UserInOut::setOutput(
			"\nPytanie nr:" + toString(number) + "/" + toString(allNumber) + ".: "
					+ question + "\n");
	UserInOut::setOutput("a) " + a + "\n");
	UserInOut::setOutput(b + "\n");
	UserInOut::setOutput(c + "\n");
	UserInOut::setOutput(d + "\n");

	do
	{
		UserInOut::setOutput("\nPlease, type your choice a/b/c/d: ");
		userAnswer = UserInOut::getInput();

		std::transform(userAnswer.begin(), userAnswer.end(), userAnswer.begin(),
				tolower);

	} while (userAnswer != "a" && userAnswer != "b" && userAnswer != "c"
			&& userAnswer != "d");

	UserInOut::setOutput(
			std::string("Score: ") + ((userAnswer == correctAnswer) ? "1" : "0")
					+ "\n");
	return (userAnswer == correctAnswer);
}
