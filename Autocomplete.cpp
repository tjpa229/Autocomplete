#include<iostream>
#include<string>
#include<vector>



using namespace std;

void Autocomplete::insert(Term newterm)
{
	terms.push_back(newterm);
	
}


vector<string> Autocomplete::allMatches(string prefix)

{
	vector<string> vect1;
	for (int i = 0; i < terms.size(); i++)
	{
		vect1[i] = this->terms[i].query;
	}
	vector<string> matches;
	for (int i = 0; i < vect1.size(); i++)
	{
		if (prefix == vect1[i])
		{
			matches[i] = vect1[i];
		}
	}
	for (int i = 0; i < matches.size(); i++)
	{
		cout << matches[i] << endl;
	}
}


void Autocomplete::print(vector<Term>& myvect)
{
	for(int i = 0; i < myvect.size(); i++)

	{
		
	}
	

}


void Autocomplete::Search(string key, int& first, int& last)

{


}


int Autocomplete::BS_helper(vector<Term>& terms, string key, int left, int right)

{


}



bool Autocomplete::BinarySearch(vector<Term> v, string prefix)
{
}
