#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
	public:
		Array<T>()
		{
			array = NULL;
			mySize = 0;
		}
		Array<T>(unsigned int n)
		{
			array = new T[n];
			mySize = n;
		}

		~Array<T>()
		{
			if (array)	
			delete []array;
		}

		unsigned int size() const {return mySize;};

		 T  &operator[] (unsigned int index) const
		{
			if (!mySize || index >= mySize)
				throw OutOfBoundsException();
			
			return (array[index]);
		}
		Array<T>(const Array<T> &copy)
		{
			array = NULL;
			mySize = 0;
			*this = copy;
		}

	 const Array<T> &operator=(const Array<T> &copy)
	{
		if (array)
			delete[] array;
		mySize = copy.size();
			if (mySize)
			{
				array = new T[mySize]();
				for (unsigned int i = 0; i < mySize; i++)
					array[i] = copy.array[i];
			}
		return (*this);
		};

		class OutOfBoundsException : public std::exception
		{
			public:
			virtual	const char* what() const throw()
			{
				return ("Out of bounds");
			}
		};
	void print()
	{
		if (mySize)
			for (unsigned int i = 0; i < mySize; i++)
				std::cout << "[ " << array[i] << " ] " << "\n";
		std::cout << "\n";
	}

	private:
			T *array;
			unsigned int mySize;
};

#endif
