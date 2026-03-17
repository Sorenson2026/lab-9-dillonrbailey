//Dillon Bailey
//3/17/2026
//ENGR 1405
//Garth Sorensen

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//This program reads studnets names form a file with one name per line.
//After all are read, it will report which name is first and last alphabetically, and how many there are.

int main()
{
	ifstream inputFile; 
	string filename;
	string name;
	int count = 0;
	string firstname = "zzzzzzzz";
	string lastname;

	//Greeting
	cout << "Hello! Thank you for generating your names with us.\n";

	//Get Filename From User
	cout << "Please enter a Filename: ";
	cin >> filename;

	//Open File
	inputFile.open(filename);

	//If Opened, process it
	if (inputFile)
	{
		//Read and display file names.
		while (inputFile >> name)
		{
			if (name < firstname)
			{
				firstname = name;
			}
			if (name > lastname)
			{
				lastname = name;
			}
			count++;
		}

		// Close File.
		inputFile.close();

		// Output Information
		cout << "Count: " << count << endl;
		cout << "First name: " << firstname << endl;
		cout << "Last name: " << lastname << endl;
	}
	else
	{
		//Display an error message
		cout << "Error opening the file.\n";
	}
	return 0;
}