#include<iostream>
#include<string>

using namespace std;

//supercar를 상속하여 superbus 만들기
//멤버변수 승객 수를 저장할 passenger
//이를 증가, 감소할 멤버함수
//LoadPassenger, UnloadPassenger
//PrintCarInfo에 승객수를 추가하여 오버라이딩

class SuperCar
{

protected:
	string name;
	int speed;
	int gas;

public:
	SuperCar(string, int, int);

	
	void Move(int);
	void FillGas(int);
	void PrintCarInfo();

};

SuperCar::SuperCar(string inputName, int inputSpeed = 0, int inputGas = 0) 
{
	name = inputName;
	speed = inputSpeed;
	gas = inputGas;
}

class SuperBus : public SuperCar 
{

private:
	int passenger = 0;

public:
	SuperBus(string inputname, int inputspeed = 0 , int inputgas = 0, int inputpassenger = 0) : SuperCar(inputname, inputspeed, inputgas)
	{
		passenger = inputpassenger;
	}
	void PrintCarInfo();
	void LoadPassenger();
	void UnloadPassenger();
		
};


//SuperBus::SuperBus(string inputname, int inputSpeed = 0, int inputGas = 0, int inputpassenger = 0) 
//{
//	name = inputname;
//	speed = inputSpeed;
//	gas = inputGas;
//	passenger = inputpassenger;
//}


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
void SuperBus::LoadPassenger()
{
	passenger++;
}

void SuperBus::UnloadPassenger()
{
	passenger--;
}

void SuperBus::PrintCarInfo()
{
	cout << name << " " << speed << " " << gas << " " << passenger << endl;
}

int main()
{
	SuperCar car1("Lamvorghini");
	SuperBus bus1("BMW_bus", 100, 50);
	
	car1.PrintCarInfo();
	bus1.PrintCarInfo();

	bus1.LoadPassenger();
	bus1.LoadPassenger();
	bus1.LoadPassenger();

	bus1.PrintCarInfo();

	bus1.UnloadPassenger();
	bus1.UnloadPassenger();

	bus1.PrintCarInfo();

	return 0;
}