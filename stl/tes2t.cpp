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
		cout << "�ȴ´�." << endl;
	}
	void inventory()
	{
		cout << "�κ��丮�� ����" << endl;
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
		cout << "����������!!" << endl;
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
		cout << "���̾ �߻�!!" << endl;
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