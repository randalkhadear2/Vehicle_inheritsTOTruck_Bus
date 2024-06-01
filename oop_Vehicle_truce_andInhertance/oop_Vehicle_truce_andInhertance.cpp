// oop_Vehicle_truce_andInhertance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class Vehicle { // abstracted class
protected:
	string Model;
	string Reg_number;
	int Speed;
	double Fule_capacity;
	double Fule_consumption;

public:
	Vehicle() {
		Model = "";
		Reg_number = "";
		Speed = 0;
		Fule_capacity = 0.0;
		Fule_consumption = 0.0;

	}
	Vehicle(string m , string num , int s , double fuleCAP , double fuleCON) {
		Model = m;
		Reg_number = num;
		Speed = s;
		Fule_capacity = fuleCAP;
		Fule_consumption = fuleCON;
	}
	void set_Model(string h) {
		Model = h;
	}
	string get_Model() {
		return Model;
	}



	void set_Reg_number(string h) {
		Reg_number = h;
	}
	string get_Reg_number() {
		return Reg_number;
	}
	///////////////////
	void set_Speed(int h) {
		Speed = h;
	}
	int get_Speed() {
		return Speed;
	}
/////////////////
	void set_Fule_capacity(double h) {
		Fule_capacity = h;
	}
	double get_Fule_capacity() {
		return Fule_capacity;
	}
//////////////////
	void set_Fule_consumption(double h) {
		Fule_consumption = h;
	}
	double get_Fule_consumption() {
		return Fule_consumption;
	}
	double fuelNeeded(int dis) {

		double fuelNeeded = Fule_consumption * dis;
		return fuelNeeded;
	}

	double distanceCovered(int hours) {
		double distance;
		distance = Speed * hours;
		return distance;
	}

	void display() {
		cout << " the Model is :" << Model << endl;
		cout << " the Reg number is :" << Reg_number << endl;
		cout << " the Speed is :" << Speed << endl;
		cout << " the Fule capacity is :" << Fule_capacity << endl;
		cout << " the Fule consumption is :" << Fule_consumption << endl;


	}
};
//	Tri(int b,int h):Shape(h){
//Vehicle(string m, string num, int s, double fuleCAP, double fuleCON) {

class Truck :public Vehicle {
	int cargo_weight_limit;
public:
	Truck() {
		cargo_weight_limit = 0;
	}
	Truck(int w , string m, string num, int s, double fuleCAP, double fuleCON) : Vehicle(m, num,  s,  fuleCAP,  fuleCON) {
		
		cargo_weight_limit = w;
	}
	void set_cargo_weight_limit(int w) {
		cargo_weight_limit = w;
	}
	int get_cargo_weight_limit() {
		return cargo_weight_limit;
	}
	//override
	void display(){
		Vehicle::display();  
		cout << "Cargo Weight Limit: " << cargo_weight_limit << endl;
	}
};




class Bus :public Vehicle {
	int Number_of_passengers;
public:
	Bus() {
		Number_of_passengers = 0;
	}
	Bus(int w, string m, string num, int s, double fuleCAP, double fuleCON) : Vehicle(m, num, s, fuleCAP, fuleCON) {
		Number_of_passengers = w;
	}
	void set_Number_of_passengers(int w) {
		Number_of_passengers = w;
	}
	int get_Number_of_passengers() {
		return Number_of_passengers;
	}
	//override
	void display() {
		Vehicle::display();
		cout << "Number of passengers: " << Number_of_passengers << endl;
	}
};

int main()
{
	Vehicle obj1("BMW" , "12345", 120 , 70.0 , 30.0);
	cout << endl;
	Truck T(150 , "KIA", "12345", 130, 70.0, 30.0);
	Bus B(200  , "marsides", "12345", 130, 70.0, 30.0);
	obj1.display();
	cout << endl;

	T.display();
	cout << endl;

	B.display();

}
