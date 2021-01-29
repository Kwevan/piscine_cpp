#ifndef FORM_HPP
#define FORM_HPP

# include <iostream>
# include <fstream>
# include <cstdlib>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	public:
  		Form();
		Form(const std::string &name, const int sGrade, const int eGrade);
		Form(const Form &copy);
		virtual ~Form();
		Form &operator=(const Form &copy);

		const std::string	&getName() const;
		const int			&getSGrade() const;
		const int			&getEGrade() const;
	
		bool					getIsSigned() const;
		std::string				getTarget() const;
		void setTarget(std::string &t);
		void				beSigned(Bureaucrat b);
		virtual void execute(Bureaucrat const & executor) const = 0;
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
		const std::string	name;
		bool				isSigned;
		const int			sGrade;
		const int			eGrade;
		std::string			target;
};

std::ostream &operator<<(std::ostream& out, Form &form);

#endif
