#include <iostream>
#include "Hero.h"


int main() {
	setlocale(LC_ALL, "Russian");
	//������ ����������� ������ ������� 
	MagicGladiator MG(98, Gender::Male, WarriorClass::Gladiator, "Kano");
	std::cout << MG.GetDamage() << '\n';
	return 0;
}