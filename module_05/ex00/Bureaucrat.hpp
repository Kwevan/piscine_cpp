#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat {
	public:
		Bureaucrat(const std::string &name, int gade);
		Bureaucrat(const Bureaucrat &copy);
		~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat &copy);

		const std::string	&getName();
		int					getGrade();
		void				increment();
		void				decrement();
		class GradeTooHighException : public std::exception
		{
			public:
			virtual	const char* what() const throw()
			{
				return ("Too High");
			}
		};
		class GradeTooLowException : public std::exception
		{
			public:

			virtual	const char* what() const throw()
			{
				return ("Too Low");
			}
		};
	private:
  		Bureaucrat();
		const std::string	name;
		int					grade;
};

std::ostream &operator<<(std::ostream& out, Bureaucrat &bur);

#endif
