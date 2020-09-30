/*  generateCSV.cpp
*
*   sep/2020 - Teresa Costa
*
*   Summary: Creates a new csv file with data */

#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

void csvOneColum(string, unsigned int);
void csvTwoColum(string, unsigned int);

int main() {

	csvOneColum("basic.csv", 100);
	csvTwoColum("less_basic.csv", 100);
    return 0;
}

// Fills one column with data
void csvOneColum(string filename, unsigned int lastNumb){

	ofstream myFile(filename);

	for (unsigned int n = 0 ; n < lastNumb ; n++){
		myFile << n << "\n";
	}

	cout << "File Created!" << endl;

    myFile.close();
}

//Fills two columns with data
void csvTwoColum(string filename, unsigned int lastNumb){

	ofstream myFile(filename);

	for (unsigned int n = 0 ; n < lastNumb ; n++){
		myFile << n << ","
		       << n << "\n";
	}

	cout << "File Created!" << endl;

    myFile.close();
}
