#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>
using namespace std;

class Player
{
public:
	Player();
	~Player();
	int getNumberOfCards();
	string m_PlayerName;
private:
	int m_NumberOfCards;
};

Player::Player()
{
	m_NumberOfCards = 5;
}

Player::~Player()
{
}
int Player::getNumberOfCards()
{
	return m_NumberOfCards;
}
class Character
{
public:
	Character();
	~Character();
	void Waking()
	{
		cout << "걷는다." << endl;
	}
	void inventory()
	{
		cout << "인벤토리를 연다" << endl;
	}
protected:

private:

};

Character::Character()
{
}

Character::~Character()
{
}

class Warrior:public Character
{
public:
	Warrior();
	~Warrior();
	void slash()
	{
		cout << "슬레쉬공격!!" << endl;
	}
private:

};

Warrior::Warrior()
{
}

Warrior::~Warrior()
{
}

class Magician:public Character
{
public:
	Magician();
	~Magician();
	void fireball()
	{
		cout << "파이어볼 발사!!" << endl;
	}
private:

};

Magician::Magician()
{
}

Magician::~Magician()
{
}
int main()
{
	Player kiseop;
	Warrior w1;
	Magician m1;

	w1.inventory();
	kiseop.m_PlayerName = "kim ki seop";
	cout << kiseop.getNumberOfCards() << endl;
	cout << kiseop.m_PlayerName << endl;

	return 0;
}