#ifndef _LINKS_H_
#define _LINKS_H_
using namespace std;

#include <vector>
#include <iostream>
#include <fstream>
#include "nodes.h"


template <class T> class Nodes;

template <class T>
class Links {
	Nodes<T> * dest;
	double weight;
public:
	Links(Nodes<T> *d, double w);
	friend class Nodes<T>;
};

template <class T>
Links<T>::Links(Nodes<T> *d, double w) : dest(d), weight(w){}




#endif