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
			_arr = new T[0];
			_len = 0;
			std::cout << "\e[0;33mDefault Constructor called of Array\e[0m" << std::endl;
		}

		Array(unsigned int n)
		{
			_arr = new T[n];
			_len = n;
			for (unsigned int i = 0; i < _len; i++) {
  				_arr[i] = 0;
  			}
			std::cout << "\e[0;33mDefault Constructor called of Array\e[0m" << std::endl;
		}

		Array(const Array &copy)
		{
			_arr = new T[copy._len];
			if (copy._len == 0) {
				_len = 0;
			}
			else {
				for (unsigned int i = 0; i < copy._len; i++) {
  					_arr[i] = copy._arr[i];
  				}
				_len = copy._len;
			}
			std::cout << "\e[0;33mCopy Constructor called of Array\e[0m" << std::endl;
		}
		
		// Destructor
		~Array()
		{
			delete _arr;
			std::cout << "\e[0;31mDestructor called of Array\e[0m" << std::endl;
		}

		
		// Operators
		Array &operator=(const Array &copy)
		{
			if (copy._len == 0) {
				delete _arr;
				_arr = new T[0];
				_len = 0;
			}
			else {
				delete _arr;
				_arr = new T[copy._len];
				for (unsigned int i = 0; i < copy._len; i++) {
  					_arr[i] = copy._arr[i];
  				}
				_len = copy._len;
			}
			return *this;
		}

		T &operator[](unsigned int index)
		{
			if (index >= _len)
				throw  Array::IndexOutOfRangeException();
			return (_arr[index]);
		}
		
		unsigned int size( void ) const
		{
			return _len;
		}

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