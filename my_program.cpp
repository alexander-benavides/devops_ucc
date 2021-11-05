

#include <stdio.h>
#include <math.h>
#include <iostream>
#include <unistd.h>
using namespace std;

int main() {

	int ivalor = 20;
	int icontador = 0;
	int i = 0;
	double dsleep = 0;

	cout << "+------------- programa HILO ----------------+" << endl;
	for(i = 1; i <= ivalor; i++){
		icontador += i;
		dsleep=1-(1/i)

		cout << "ciclo for i + "<< icontador << "sleep =" << dsleep << endl;
			sleep(dsleep);
	}


	cout << "------------ fin de programa ------------" << endl;

	return 0;
}
