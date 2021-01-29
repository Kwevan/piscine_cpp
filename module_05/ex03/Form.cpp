#include "Form.hpp"

Form::Form() : name("default"), isSigned(false), sGrade(1), eGrade(1)
{}

Form::Form(const std::string &aname, const int aSGrade, const int aEGrade) : name(aname), isSigned(false), sGrade(aSGrade), eGrade(aEGrade)
{
	if (sGrade < 1 || eGrade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (sGrade > 150 || sGrade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Form::~Form() 
{}

Form::Form(const Form &copy) : name(copy.getName()), isSigned(copy.getIsSigned()), sGrade(copy.getSGrade()), eGrade(copy.getEGrade())
{
  *this = copy;
}

Form  &Form::operator=(const Form &copy) 
{
	this->isSigned = copy.isSigned;
	return (*this);
}

const std::string &Form::getName() const
{
	return (name);
}

const int &Form::getSGrade() const
{
	return (sGrade);
}
const int &Form::getEGrade() const
{
	return (eGrade);
}

bool Form::getIsSigned() const
{
	return (isSigned);
}

std::string Form::getTarget() const
{
	return (target);
}

void Form::setTarget(std::string &aTarget)
{
	target = aTarget;
}

void Form::beSigned(Bureaucrat b)
{
	int grade = b.getGrade();
	if (grade > sGrade)
		throw Bureaucrat::GradeTooLowException();
	isSigned = true;
}

std::ostream &operator<<(std::ostream &out, Form &form)
{
	out << "[ Form: " << form.getName() << " is " << (form.getIsSigned() ? "Signed" : "Unsigned") ;
	out << ", it requires: " << form.getSGrade() << " grades to be signed";	
	out << ", it requires: " << form.getEGrade() << " grades to be executed";	
	out<< " ]";
	return (out << std::endl);
}
