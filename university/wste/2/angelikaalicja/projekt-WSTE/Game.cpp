#include "Game.h"
#include "operating_functions.h"
#include "UserInOut.h"
#include "quiz.h"

Game::Game()
{

}

Game::~Game()
{

}

int Game::play(bool playAll)
{
	bool keepPlaying = false;

	do
	{
		Quiz newQuiz(selectCorrectLevel(playAll));

		if (!newQuiz.readFile())
		{
			newQuiz.play(playAll);
			newQuiz.showResult();
		}

		if (false == playAll)
		{
			keepPlaying = keepingPlaying();
		}

	} while (keepPlaying);

	return 0;
}

std::string Game::selectCorrectLevel(bool ignoreLeveling)
{
	std::string level;

	if (ignoreLeveling == false)
	{
		// three chances to select proper level
		// if that fails read all levels
		for (int i = 0; i < 3; ++i)
		{
			level = selectLevel();
			if (level == "1" || level == "2" || level == "3")
				return level;
			UserInOut::setOutput("Wrong choice:" + level + "\n");
		}
	}

	return "";
}

