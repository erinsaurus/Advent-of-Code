#include <fstream>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	// setup file system
	vector<int> input;
	int x;
	ifstream inputFile;

	// open file
	inputFile.open("input.txt");

	if (!inputFile)
	{
		cout << "Unable to open file.\n";
	}
	else
	{
		cout << "File open successful!\n";
		inputFile.close();
	}
	



	// perform calculations

	// output frequency

	return 0;
}