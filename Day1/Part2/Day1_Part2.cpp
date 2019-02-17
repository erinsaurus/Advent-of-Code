#include <fstream>
#include <vector>
#include <iostream>
using namespace std;

// add elements of vector sequentially
int calculate(vector<int> input)
{
	int total = input.front(); // starting element

	for (int i = 1; i < input.size(); i++)
	{
		total = total + input.at(i);
	}

	return total;
}

int main()
{
	// setup file system
	vector<int> input;
	int x;
	ifstream inputFile;

	inputFile.open("input.txt");

	if (!inputFile)
	{
		cout << "Unable to open file.\n";
	}

	// add file data to vector
	while (inputFile >> x)
	{
		input.push_back(x);
	}

	inputFile.close();

	int total = calculate(input);

	// output frequency
	cout << "Frequency: " << total << "\n";

	return 0;
}