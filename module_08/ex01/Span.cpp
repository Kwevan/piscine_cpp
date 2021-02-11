#include "Span.hpp"

Span::Span()
{}

Span::Span(unsigned int n)
{
	N = n;
}

Span::~Span() 
{}

Span::Span(const Span &copy) 
{
  *this = copy;
}

Span  &Span::operator=(const Span &copy) 
{
	N  = copy.N;
  	mList = copy.mList;
	return (*this);
}

void Span::addNumber(int in)
{
	if (mList.size() >= N)
		throw std::runtime_error("container in is full !");
	mList.push_back(in);	
}

int Span::shortestSpan()
{
	if (mList.size() < 2)
		throw std::runtime_error("Container len should be at least 2 !");
	std::vector<int> tmpL = mList;
	std::sort(tmpL.begin(), tmpL.end());
	int a = tmpL.front();
    std::rotate(tmpL.begin(), tmpL.begin() + 1, tmpL.end());
	int b = tmpL.front();
	return (b - a);
}

int Span::longestSpan()
{
	if (mList.size() < 2)
		throw std::runtime_error("Container len should be at least 2 !");
	std::vector<int> tmpL = mList;
	std::sort(tmpL.begin(), tmpL.end());
	int min = tmpL.front();
	int max = tmpL.back();
	
	return (max - min);
}
