#include "Hero.h"

Hero::Hero(int dmg):_damage(dmg){}

int Hero::GetDamage() const{
	return _damage;
}

Mage::Mage(int damage, Gender gen):Hero(damage),_gen(gen){}

Warrior::Warrior(int damage, WarriorClass clas):Hero(damage),_clas(clas){}

//MagicGladiator::MagicGladiator(int dmg, Gender gen, WarriorClass clas, std::string name)
//	:Warrior(dmg, clas), Mage(dmg, gen), _name(name){}  - данный конструтор является не рабочим из-за того , что компилятор не сможет понять 
// dmg брать из класса Warrior или Mage. для этого наследование этих классов, от начального класса Hero делаем виртуальным, а dmg прокидываем в 
//начальный класс Hero
MagicGladiator::MagicGladiator(int dmg, Gender gen, WarriorClass clas, std::string name)
	:Warrior(dmg,clas),Mage(dmg,gen),_name(name),Hero(dmg){}
