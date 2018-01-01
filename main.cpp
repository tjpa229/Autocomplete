//project 3
//tirth patel
//purpose: to create a program that uses the logic of  a autocomplete me feature
// CS 216 section 005

#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include<vector>
#include"Autocomplete.h"
#include"Term.h"

using namespace std;

int main(int argc, char** argv)
{
	const int ARGUMENTS = 2;
	ifstream in_file;

	if (argc != ARGUMENTS)
	{
		cout << "It needs one command line argument: <input filename>!" << endl;
		return 1;
	}

	in_file.open(argv[1]);
	if (!in_file.good())
	{
		cout << "Failure in opening file: " << argv[1] << endl;
		return 2;
	}

	long weight;
	string query;
	Autocomplete myTerms;

	while (!in_file.eof())
	{
		in_file >> weight >> ws;
		getline(in_file, query);
		if (query != "")
		{
			Term newterm(query, weight);
			myTerms.insert(newterm);
		}
	}
	in_file.close();
	string prefix;
	
	cin >> prefix;
	while (prefix != "exit")
	{
		cout << "Please input the search query(type exit to quit): " << endl;
		myTerms.allMatches(prefix);
		myTerms.print();
		cin >> prefix;

	}

	
}