#include <iostream>
#include <string>
using namespace std;

class Animal
{
private:
	string name;
	string cry;//����
	string race;//�푰
public:
	//getter
	string getName();
	string getCyr();
	string getRace();

	//setter
	void setName(string _name);
	void setCry(string _cry);
	void setRace(string _race);

	//�����̏�Ԃ�\������֐�
	void displayInfo();
};

