


#include<iostream>
#include<string>
#include"Term.h"

using namespace std;


Term::Term()
{
	
}


Term::Term(string query, long weight)
{
	query = query;
	weight = weight;
}

Term::~Term()
{

}



int Term::byReverseWeightOrder(Term term1, Term term2)

{
	int result;
	if(term1.weight > term2.weight)
	{
		result = 1;
	}
	else if(term1.weight < term2.weight)
	{
		result = -1;
	}	
	else if(term1.weight == term2.weight)
	{
		result = 0;
	}
	return result;
}
	

int Term::compareTo(Term term1, Term term2)
{
	int result;
	if (term1.query > term2.query)
	{
		result = 1;
	}
	else if(term1.query < term2.query)
	{
		result = -1;
	}	
	else if(term1.query == term2.query)
	{
		result = 0;
	}
	return result;
	
}

void Term::print(Term term1)

{

	cout<<term1.weight<<"	"<<term1.query<<endl;


}









