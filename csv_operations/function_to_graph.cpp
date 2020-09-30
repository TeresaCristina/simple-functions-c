/*  function_to_graph.cpp
*
*   sep/2020 - Teresa Costa
*
*   Summary: Creates a new csv file with results from a function */

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;  // std::

// prototypes
unsigned int power (int, unsigned int);
void creates_csv(string filename, vector<unsigned int> datasetOne, vector<unsigned int> datasetTwo, unsigned int last);


int main(){

	vector<unsigned int> results;
	vector<unsigned int> exp;

	unsigned int lastExp = 30;  // for numb > 30 use int, long

	for (unsigned n = 0; n < lastExp; n++){
		results.push_back(power(2, n));
		//cout << n << " : " << power(2,n) << endl;
		exp.push_back(n);
	}

	creates_csv("PowerTwo.csv", results, exp, lastExp);

	cout << "File Created!" << endl;

	return 0;
}

// returns base^n = base * base * base *... * base
unsigned int power (int base, unsigned int n){
        unsigned int result = 1;
        if (n > 0){
                result = base * power(base , n-1);
        }
        return result;
}

// creates a csv using a dataset
void creates_csv(string filename, vector<unsigned int> datasetOne, vector<unsigned int> datasetTwo, unsigned int last){

    ofstream myFile(filename);  // or filename.c_str()

    for(unsigned int n = 0; n < last; n++)
    {
        myFile << datasetOne.at(n) << ","
        	   << datasetTwo.at(n) << ","
			   << "\n";
    }

    myFile.close();
}
