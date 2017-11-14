#ifndef GAME_H_
#define GAME_H_

#include <iostream>

class Game
{
public:
	Game();
	virtual ~Game();

	int play(bool PlayAllLevels);

private:
	std::string selectCorrectLevel(bool ignoreLeveling = false);
};

#endif /* GAME_H_ */
