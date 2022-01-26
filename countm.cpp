#include <fstream>
#include <iostream>
using namespace std;

int main(){
	ofstream file;
	file.open ("log.txt");
	cout << "log created" << endl;
	int i = 0;
	while (1){
		file << i << "\n";
		i++;
	}
	file.close();
	return 7;
}
