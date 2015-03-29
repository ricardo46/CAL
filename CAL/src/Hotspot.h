#ifndef _HOTSPOT_H_
#define _HOTSPOT_H_

#include <string>


using namespace std;

class Hotspot{
	string nome;
	double coordX, coordY;
public:
	Hotspot();
	Hotspot(string nome, double coordX, double coordY);

	string getNome();
	double getCoordX();
	double getCoordY();

	bool operator == (const Hotspot &h2) const;

	friend ostream & operator << (ostream &os, Hotspot &p);
};

#endif 