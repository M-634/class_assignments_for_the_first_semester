#include "Animal.h"

class Dog : public Animal
{
public:
	const string dogDefaultCry = "��������";
	const string dogRace = "�M����";
};

class Cat :public Animal
{
public:
	const string catDefaultCry = "�j���[";
	const string catRace = "�M����";
};

class Bird : public Animal
{
public:
	const string birdDefaultCry = "�`�����`����";
	const string birdRace = "����";
};


int main() 
{
	//set each animal data
	Dog dog;
	dog.setName("�|�`");
	dog.setCry(dog.dogDefaultCry);
	dog.setRace(dog.dogRace);
	
	Cat cat;
	cat.setName("�ɂ�񑾘Y");
	cat.setCry(cat.catDefaultCry);
	cat.setRace(cat.catRace);

	Bird bird;
	bird.setName("���b�N��");
	bird.setCry(bird.birdDefaultCry);
	bird.setRace(bird.birdRace);

	//output
	dog.displayInfo();
	cout << endl;
	cat.displayInfo();
	cout << endl;
	bird.displayInfo();
}