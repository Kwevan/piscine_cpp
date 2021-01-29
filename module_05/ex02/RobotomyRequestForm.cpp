#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robot", 72, 45) 
{}

RobotomyRequestForm::RobotomyRequestForm(std::string aTarget) : Form("Robot", 72, 45)
{
	setTarget(aTarget);
}

RobotomyRequestForm::~RobotomyRequestForm() 
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form(copy)
{
  *this = copy;
}

RobotomyRequestForm  &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy) 
{
	(void)copy;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	(void)executor;

	srand(time(NULL));
	if(rand() % 2)
	{
		std::cout << "\n** DRILL NOISE **" << std::endl;
		std::cout << this->getTarget() << " has been robotomized." << std::endl;
  	}
  else
    std::cout << "Robotomization failed..." << std::endl;
}
