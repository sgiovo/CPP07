#pragma once
#include <iostream>

template <class T>
class Array
{
	private:
		T 				*arr;
		unsigned int	size;
	public:
		Array(void);
		Array(unsigned int n){arr = new t[n](); dim = n;}
		
		Array(Array const & copy)
		{
			arr = new T[copy.size()];
			size=copy.size(); 
			for(int i=0; i<size; i++)
			{
				arr[i]=copy.getArr()[i];
			}
		}

		T	getArr(void){return arr;}
		int	size(void){return size;}

		Array & operator=(Array const & copy)
		{
			if (this = &copy)
				return *this;
			arr = new t[copy.size()];
			size = copy.size();
			for(int i=0; i<size; i++)
				arr[i]=copy.getArr()[i];
		}
		
		T	& operator[](unsigned int i)
		{
			if(i > size)
				throw Array::OutOfB();
			else
				return(arr[i]);
		}

		class OutOfB : public std::exception
		{
			virtual const char * what() const throw()
			{
				return "Out of Bound!";
			}
		};
};