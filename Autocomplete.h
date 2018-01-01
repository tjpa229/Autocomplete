
#include<iostream>
#include<string>
#include<vector>
using namespace std;


class Autocomplete
{
 public:
 	// inserts the newterm to the sequence	
	 void insert(Term newterm);

	 // returns all terms that start with the given prefix,
	 // in descending order of weight
	 vector<string> allMatches(string prefix);
	 
	// first: the index of the first query that equals
	 // the search key, or -1 if no such key
	 // last: the index of the last query that equals
	 // the search key, or -1 if no such key
	 void Search(string key, int& first, int& last);
	
	 // return the index number of the search key using binary search algorithm
	 int BS_helper(vector<Term>& terms, string key, int left, int right);
	 
	// display all the terms
	void print(vector<Term>& myvect);

	bool BinarySearch(vector<Term> v, string prefix);
	

	friend class Term;
 	private:
 	// choose your own data structure to represent the sequence of Term objects
		vector<Term> terms;
};
