#include "Iter.hpp"

int main()
{
	int 		i[7]={1, 2, 3, 4, 5, 6, 7};
	std::string str[5]={"ciao","caro/a","come","stai","?"};
	double		d[5] = {1.2, 2.46, 3.691, 4.8121, 5.10152};
	Nholder 	h[9];
	
	std::cout << std::endl;
	iter(i,7,print);

	std::cout << std::endl;
	iter(str,5,print);

	std::cout << std::endl;
	iter(d,5,print);

	std::cout << std::endl;
	iter(h, 9, print);

	std::cout << std::endl;

};