#include "Enemy.hpp"

Enemy::Enemy() 
{}

Enemy::Enemy(int hp, const  std::string &type)
{
	this->hp = hp;
	this->type = type;
}

Enemy::~Enemy() 
{}

Enemy::Enemy(const Enemy &copy) 
{
  *this = copy;
}

Enemy  &Enemy::operator=(const Enemy &copy) 
{
	this->hp = copy.hp;
	this->type = copy.type;
	return (*this);
}

std::string Enemy::getType() const
{
	return (this->type);
}

int Enemy::getHP() const
{
	return (this->hp);
}

void Enemy::takeDamage(int dmg)
{
	if (dmg < 0)
		return ;
	this->hp -= dmg;
	if (this->hp< 0)
		this->hp = 0;
}
