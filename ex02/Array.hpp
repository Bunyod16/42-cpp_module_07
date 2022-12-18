#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template <typename T>
class Array
{
	public:
		// Constructors
		Array()
		{
			*_arr = 0;
			_len = 0;
			std::cout << "\e[0;33mDefault Constructor called of Array\e[0m" << std::endl;
		}
		Array(unsigned int n)
		{
			_arr = new T[n];
			_len = n;
			std::cout << "\e[0;33mDefault Constructor called of Array\e[0m" << std::endl;
		}
		Array(const Array &copy)
		{
			(void) copy;
			std::cout << "\e[0;33mCopy Constructor called of Array\e[0m" << std::endl;
		}
		
		// Destructor
		~Array()
		{
			std::cout << "\e[0;31mDestructor called of Array\e[0m" << std::endl;
		}

		
		// Operators
		T &operator[](unsigned int index)
		{
			if (index >= _len)
				throw  Array::IndexOutOfRangeException();
			return _arr[index];
		}
		
		unsigned int size( void ) const;

		class IndexOutOfRangeException : public std::exception
		{
			public:
				virtual const char * what () const throw()
				{
					return ("Index out of range");
				}
		};


	private:
		T	*_arr;
		unsigned int _len;
};

#endif