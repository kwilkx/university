#include "quiz.h"
#include "UserInOut.h"
#include <fstream>
#include <sstream>
#include <random>
#include <algorithm>

Quiz::Quiz(const std::string& quizLevel) :
		quizFileName(quizLevel), result(0)
{
	dataFile = "quiz_" + quizFileName + ".txt";
}

int Quiz::readFile()
{
	std::ifstream quiz(dataFile.c_str());

	if (quiz.good() == false)  // inaczej if(!quiz)
	{
		UserInOut::setOutput("Ups! Data file is missing!\n");
		return 1;
	}

	unsigned int readLine = 0;
	std::string text;

	while (getline(quiz, text))
	{
		if (readLine % 6 == 0)
			questions.push_back(Question(text));
		if (readLine % 6 == 1)
			questions.back().setA(text);
		if (readLine % 6 == 2)
			questions.back().setB(text);
		if (readLine % 6 == 3)
			questions.back().setC(text);
		if (readLine % 6 == 4)
			questions.back().setD(text);
		if (readLine % 6 == 5)
			questions.back().setCorrectAnswer(text);
		readLine++;
	}

	quiz.close();
	return 0;
}

void Quiz::play(bool PlayAll)
{
	if (false == PlayAll)
	{
		UserInOut::setOutput("\nPlaying! Level: " + quizFileName + "\n");
	}

	result = 0;

	std::random_shuffle(questions.begin(),questions.end());

	for (unsigned int i = 0; i < questions.size(); ++i)
	{
		result += questions[i].ask(i, questions.size());
	}
}

void Quiz::showResult()
{
	std::stringstream s;
	s << "\nResult: " << result << "/" << questions.size() - 1 << std::endl;
	UserInOut::setOutput(s.str());
}
