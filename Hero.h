#pragma once
#include <iostream>
#include <string>
class Hero
{
public:
	Hero(int dmg);
	int GetDamage()const;
private:
	int _damage;
};
enum Gender {
	Male,
	Woman
};
class Mage:public virtual Hero {//-для ромбовидного наследование класы наследуються виртуально
public:
	Mage(int damage, Gender gen);
private:
	Gender _gen;
};
enum WarriorClass {
	Assasin,
	Gladiator
};
class Warrior :public virtual Hero {//-для ромбовидного наследование класы наследуються виртуально
public:
	Warrior(int damage, WarriorClass clas);
private:
	WarriorClass _clas;
};
class MagicGladiator: public Mage,Warrior {
public:
	MagicGladiator(int dmg,Gender gen,WarriorClass clas,std::string name);
private:
	std::string _name;
};