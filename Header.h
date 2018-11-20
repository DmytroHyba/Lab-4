#pragma once
#include<iostream>
#include<string>
using namespace std;
class Ladder {

private:
	int Volume;
	int Weight;
	string Material;

public:
	Ladder();
	Ladder(int Vol, int Weig, string Mat);

	int height;
	string name;

	void getInfo();

	~Ladder();
protected:
	int price;
	int number;
}; 
