#ifndef QUESTION_H
#define QUESTION_H

#include <iostream>

class Question
{
public:
	Question(const std::string& Question);
	int ask(int i, int allNumber);

	void setA(std::string arg)
	{
		a = arg;
	}
	void setB(std::string arg)
	{
		b = arg;
	}
	void setC(std::string arg)
	{
		c = arg;
	}
	void setD(std::string arg)
	{
		d = arg;
	}
	void setCorrectAnswer(std::string arg)
	{
		correctAnswer = arg;
	}

private:
	std::string question, a, b, c, d;
	std::string correctAnswer;
	std::string userAnswer;

};

#endif // QUESTION_H
