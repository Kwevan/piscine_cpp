#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() 
{}

Bureaucrat::Bureaucrat(const std::string &aname, int agrade) : name(aname), grade(agrade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat() 
{}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) 
{
  *this = copy;
}

Bureaucrat  &Bureaucrat::operator=(const Bureaucrat &copy) 
{
	this->grade = copy.grade;
	return (*this);
}

const std::string &Bureaucrat::getName()
{
	return (name);
}

int Bureaucrat::getGrade()
{
	return (grade);
}

void Bureaucrat::increment()
{
	if (grade == 1)
		throw Bureaucrat::GradeTooHighException();
	grade--;
}

void Bureaucrat::decrement()
{
	if (grade == 150)
		throw Bureaucrat::GradeTooLowException();
	grade++;

}

std::ostream &operator<<(std::ostream &out, Bureaucrat &bur) {
  return (out << bur.getName() << ", bureaucrat grade " << bur.getGrade() << std::endl);
}
