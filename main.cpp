# include <iostream>
using namespace std;

class Being {
	friend class Human;
	friend class Monster;
	friend class Battle;
	friend class Equip;

private:
	string name;
	int health; //здоровье
	int dexterity; //ловкость
	int strong; //сила
	int	stamina; // выносливость
	int	mentality; // умственные способности

};

class Human
{
public:
	Human() {};
	int Cashe; // Золото
	int Inventori[]; // Инвентарь

private:

};

class Monster
{
public:
	Monster() {};
	~Monster();

private:

};

Monster::Monster()
{
}

Monster::~Monster()
{
}

class Battle; 

class Equip;