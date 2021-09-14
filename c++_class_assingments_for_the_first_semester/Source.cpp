#include "Animal.h"

class Dog : public Animal
{
public:
	const string dogDefaultCry = "ワンワン";
	const string dogRace = "哺乳類";
};

class Cat :public Animal
{
public:
	const string catDefaultCry = "ニャー";
	const string catRace = "哺乳類";
};

class Bird : public Animal
{
public:
	const string birdDefaultCry = "チュンチュン";
	const string birdRace = "鳥類";
};


int main() 
{
	//set each animal data
	Dog dog;
	dog.setName("ポチ");
	dog.setCry(dog.dogDefaultCry);
	dog.setRace(dog.dogRace);
	
	Cat cat;
	cat.setName("にゃん太郎");
	cat.setCry(cat.catDefaultCry);
	cat.setRace(cat.catRace);

	Bird bird;
	bird.setName("ムックル");
	bird.setCry(bird.birdDefaultCry);
	bird.setRace(bird.birdRace);

	//output
	dog.displayInfo();
	cout << endl;
	cat.displayInfo();
	cout << endl;
	bird.displayInfo();
}