#include "Animal.h"

string Animal::getName()
{
	return name;
}

string Animal::getCyr()
{
	return cry;
}

string Animal::getRace()
{
	return race;
}

void Animal::setName(string _name)
{
	name = _name;
}

void Animal::setCry(string _cry)
{
	cry = _cry;
}

void Animal::setRace(string _race)
{
	race = _race;
}

void Animal::displayInfo()
{
	cout << "������ �F" << name << endl;
	cout << "���� �F" << cry << endl;
	cout << "�푰 �F" << race << endl;
}


