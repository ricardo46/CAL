#include "Utilitarios.h"
#include "Graph.h"
#include "Hotspot.h"
#include <string>

using namespace std;


int main(){

	Graph<Hotspot> g1;
	ifstream file;

	//Fazer o LOAD
	file.open("nodes.txt");
	string n, x, y;
	while (!file.eof()){
		file >> n;
		file >> x;
		file >> y;
		
		Hotspot h1(n, stod(x), stod(y));
		g1.addNode(h1);
	}

	file.close();
	//

	for (unsigned int i = 0; i < g1.getVertexSet().size(); i++){
		cout << g1.getVertexSet()[i]->getInfo() << endl;
	}
	
	cout << calc_dist(g1.getVertexSet());
	
	
	system("pause");
	return 0;
}