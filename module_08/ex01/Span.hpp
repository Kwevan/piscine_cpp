#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span {
	public:
		Span(unsigned int n);
		Span(const Span &copy);
		~Span();
		Span &operator=(const Span &copy);

		void addNumber(int n);
		int shortestSpan();
		int longestSpan();
 private:
		Span();
		unsigned int N;
		std::vector<int> mList;
};

#endif
