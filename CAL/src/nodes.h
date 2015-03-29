#ifndef _NODES_H_
#define _NODES_H_

#include <string>
#include <vector>
#include "Links.h"
using namespace std;


template <class T> class Links;

template <class T>
class Nodes {
	T info;
	vector<Links<T>  > adj;
	bool visited;
public:
	Nodes(T in);
	T getInfo();
};

template <class T>
Nodes<T>::Nodes(T in) : info(in), visited(false){}

template <class T>
T Nodes<T>::getInfo(){
	return info;
}





#endif