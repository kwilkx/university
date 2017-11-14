#ifndef QUIZ_H
#define QUIZ_H

#include <string>
#include <vector>
#include "question.h"

class Quiz
{
public:
	Quiz(const std::string & quizLevel);
	void play(bool PlayAll);
	void showResult();
	int readFile();

private:
	std::string quizFileName;
	std::string dataFile;
	int result;
	std::vector<Question> questions;

};

#endif // QUIZ_H
