#include <fstream>
#include <vector>
#include <iostream>
using namespace std;

// add elements of vector sequentially
int findDuplicate(vector<int> input)
{
	vector<int> results;
	bool found = false;  // set true if duplicate frequency found
	int frequency = 0;
	int duplicate;
	int x = 0;

	while (!found)
	{
		cout << "Iteration: " << x << "\n";
		// calculate frequencies
		for (int i = 0; i < input.size(); i++)
		{
			frequency = frequency + input.at(i);
		//	cout << "Current frequency: " << frequency << "\n";

			// loop through results to find a duplicate
			for (int j = 0; j < results.size(); j++)
			{
				if (frequency == results.at(j))
				{
					duplicate = frequency;
					found = true;
					cout << "found it! " << duplicate << "\n";
				}
			}		
			// add to results vector if not found
			if (!found)
			{
			//	cout << "Not found yet.\n";
				results.push_back(frequency);
			}
			else
				break; //break loop if found
		}

		x++;
	}

	return duplicate;
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

	int duplicate = findDuplicate(input);

	// output frequency
	cout << "First frequency reached twice: " << duplicate << "\n";

	return 0;
}