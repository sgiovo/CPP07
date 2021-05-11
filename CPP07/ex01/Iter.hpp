#pragma once
#include <iostream>

template <typename T>
void	iter(T(*array), int size, void (*func)(T&))
{
	for (int i=0; i < size; i++)
		func(array[i]);
	std::cout << std::endl;
} 

template <typename T>
void	print(T &t)
{
	std::cout << t << " ";
}

class Nholder
{
	private:
		char 	c;
	public:
		Nholder(void){c = '$';}
		Nholder(Nholder const & copy){*this = copy;}
		~Nholder(void){}
		Nholder & operator=(Nholder const & copy){c = copy.getC(); return *this;}
		char		getC(void)const{return c;}
		void		setC(char ch){c=ch;}
};

std::ostream & operator <<( std::ostream & out, Nholder const & holder ) { out << holder.getC(); return out; }