#include<iostream>
#include<string>

using namespace std;

class SuperCar
{
public:
	SuperCar(string, int, int);
	void Move(int);
	void FillGas(int);
	void PrintCarInfo();

private:
	string name;
	int speed;
	int gas;
};

SuperCar::SuperCar(string inputName, int inputSpeed = 0, int inputGas = 0)
{
	name = inputName;
	speed = inputSpeed;
	gas = inputGas;

}

void SuperCar::Move(int a)
{
	speed += a;
	gas -= a;
}

void SuperCar::FillGas(int a)
{
	gas = a;
}

void SuperCar::PrintCarInfo()
{
	cout << name << " " << speed << " " << gas << endl;
}

void main()
{
	SuperCar car1("Lamvorghini");
	SuperCar car2("Auid",100);
	SuperCar car3("BMW", 50, 40);

	car1.PrintCarInfo();
	car2.PrintCarInfo();
	car3.PrintCarInfo();

	cout << endl;

	car2.FillGas(35);
	car3.Move(30);

	car1.PrintCarInfo();
	car2.PrintCarInfo();
	car3.PrintCarInfo();
}