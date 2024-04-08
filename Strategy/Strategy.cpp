#include <iostream>
#include <string>

using namespace std;

class TransportStrategy abstract
{
public:
	virtual void Ride(double price, int time) abstract;
};

class Bike : public TransportStrategy
{
public:
	void Ride(double price, int time) override
	{
		cout << "Transport: Bike" << endl;
		cout << "Price: " << price << "$" << endl;
		cout << "Time: " << time << " hour" << endl;
		cout << "----------" << endl << endl;
	}
};

class Bus : public TransportStrategy
{
public:
	void Ride(double price, int time) override
	{
		cout << "Transport: Bus" << endl;
		cout << "Price: " << price << "$" << endl;
		cout << "Time: " << time << " hour" << endl;
		cout << "----------" << endl << endl;
	}
};

class Car : public TransportStrategy
{
public:
	void Ride(double price, int time) override
	{
		cout << "Transport: Car" << endl;
		cout << "Price: " << price << "$" << endl;
		cout << "Time: " << time << " hour" << endl;
		cout << "----------" << endl << endl;
	}
};

class Choice
{
	TransportStrategy* transport;
public:
	void SetStrategy(TransportStrategy* transportstrategy)
	{
		this->transport = transportstrategy;
	}
	void Show(double price, int time)
	{
		transport->Ride(price, time);
	}
};
int main()
{
	Choice choice;
	Bike bike;
	choice.SetStrategy(&bike);
	choice.Show(0, 6);

	Bus bus;
	choice.SetStrategy(&bike);
	choice.Show(5, 2);

	Car car;
	choice.SetStrategy(&bike);
	choice.Show(10, 1);

	system("pause");
	return 0;
}