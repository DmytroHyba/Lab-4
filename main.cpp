#include<iostream>
#include<string>
#include"Header.h"
using namespace std;
Ladder::Ladder(int Vol, int Weig, string Mat)
{
	Volume = Vol;
	Weight = Weig;
	Material = Mat;
}
void Ladder::getInfo()
{
	cout << "Volume";
	cin >> Volume;
	cout << "Weight";
	cin >> Weight;
	cout << "Material";
	cin >> Material;
	cout << endl;
	cout << "Volume " << Volume << endl;
	cout << "Weight " << Weight << endl;
	cout << "Material " << Material << endl;
}
Ladder::Ladder()
{
}
Ladder::~Ladder()
{
}
using namespace std;
int main() {
	Ladder first;
	first.getInfo();
	cin.get();
	getchar();
}
