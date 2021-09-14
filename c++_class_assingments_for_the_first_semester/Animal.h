#include <iostream>
#include <string>
using namespace std;

class Animal
{
private:
	string name;
	string cry;//鳴き声
	string race;//種族
public:
	//getter
	string getName();
	string getCyr();
	string getRace();

	//setter
	void setName(string _name);
	void setCry(string _cry);
	void setRace(string _race);

	//動物の状態を表示する関数
	void displayInfo();
};

