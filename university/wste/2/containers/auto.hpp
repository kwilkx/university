#include <iostream>

using namespace std;

class car
{
	public:
	car(string Colour, int Speed)
		:colour(Colour)
		,speed(Speed)
	{
		
	}
	
	virtual void go()
	{
		cout << colour << " car is going with " << speed << " km/h." << endl;
	}
	
	protected:
		string colour;
		int speed;
};

class BMW : public car
{
	public:
	BMW(string Colour, int Speed)
		:car(Colour, Speed)
	{

	}
	
	virtual void go()
	{
		cout << colour << " BMW is going with " << speed << " km/h." << endl;
	}
};

class VW : public car
{
	public:
	VW(string Colour, int Speed)
		:car(Colour, Speed)
	{

	}

	virtual void go()
	{
		cout << colour << " VW is going with " << speed << " km/h." << endl;
	}
};

class AUDI : public car
{
	public:
	AUDI(string Colour, int Speed)
		:car(Colour, Speed)
	{

	}
	
	virtual void go()
	{
		cout << colour << " AUDI is going with " << speed << " km/h." << endl;
	}
};

