#ifndef FORM_HPP
#define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	public:
		Form(const std::string &name, const int sGrade, const int eGrade);
		Form(const Form &copy);
		~Form();
		Form &operator=(const Form &copy);

		const std::string	&getName() const;
		const int			&getSGrade() const;
		const int			&getEGrade() const;
	
		bool					getIsSigned() const;
		void				beSigned(Bureaucrat b);
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
  		Form();
		const std::string	name;
		bool				isSigned;
		const int			sGrade;
		const int			eGrade;
};

std::ostream &operator<<(std::ostream& out, Form &form);

#endif
