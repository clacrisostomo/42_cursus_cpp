#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cstdio>

class Harl{

	public:

	Harl(void);
	~Harl(void); 

	void complain(std::string level);


	private:

	std::string index[4];

	void debug( void );
	void info ( void );
	void warning ( void );
	void error ( void );
};


#endif