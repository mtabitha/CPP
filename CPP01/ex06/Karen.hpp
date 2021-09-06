#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>

class Karen
{
private:
	

    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
    void (Karen::*mass_f[4])(void);
public:
    Karen();
    void complain( std::string level );
};

#endif