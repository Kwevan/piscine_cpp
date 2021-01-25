#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy
{
	protected:
		int hp;
		std::string type;
	public:
		Enemy();
		virtual ~Enemy();
		Enemy(int hp, std::string const & type);
		Enemy(const Enemy &copy);
		std::string getType() const;
		int getHP() const;
        virtual void takeDamage(int);
		Enemy &operator=(const Enemy &copy);

 private:
};

#endif
