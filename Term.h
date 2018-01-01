
#include<iostream>
#include<string>

using namespace std;



class Term
{
 	public:
 	// default constructor
 	Term();
 	
	// initialize with the given query string and weight
 	Term(string query, long weight);
 	
	// compares two terms in descending order by weight
 	int byReverseWeightOrder(Term term1, Term term2);
 	
	// compares two terms in lexicographic order by query
 	int compareTo(Term term1, Term term2);
	 
	 // compares two terms in lexicographic order but using only
	 // the first r characters of each query
	 int byPrefixOrder(Term term1, int r);
	 
	 // displays the term in the following format:
	 // the weight, followed by a tab key, followed by the query
	 void print(Term term1);
	 
	 friend class Autocomplete;
	 

	private:
	 	string query;
	 	long weight;
};
