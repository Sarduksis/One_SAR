# include <iostream>
using namespace std;

class Being {
	friend class Human;
	friend class Monster;
	friend class Battle;
	friend class Equip;

private:
	string name;
	int health; //��������
	int dexterity; //��������
	int strong; //����
	int	stamina; // ������������
	int	mentality; // ���������� �����������

};

class Human
{
public:
	Human() {};
	int Cashe; // ������
	int Inventori[]; // ���������

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