#include "Hotspot.h"

using namespace std;

Hotspot::Hotspot(){
	nome = "undefined";
	coordX = NULL;
	coordY = NULL;
}

Hotspot::Hotspot(string nome, double coordX, double coordY){
	this->nome = nome;
	this->coordX = coordX;
	this->coordY = coordY;
}

string Hotspot::getNome(){
	return this->nome;
}

double Hotspot::getCoordX(){
	return this->coordX;
}

double Hotspot::getCoordY(){
	return this->coordY;
}

bool Hotspot::operator==(const Hotspot &h) const{

	return nome == h.nome;
}

ostream & operator << (ostream &os, Hotspot &n){
	os << n.getNome();
	return os;
}