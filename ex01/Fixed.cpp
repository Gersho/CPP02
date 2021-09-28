/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 12:27:55 by kzennoun          #+#    #+#             */
/*   Updated: 2021/09/28 16:23:14 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed & src )
{

	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}

Fixed::Fixed( int const value ) : _value(value)
{
	std::cout << "Int constructor called" << std::endl;
	
}

Fixed::Fixed( float const value )
{
	std::cout << "Float constructor called" << std::endl;
	_value = (int) value;	
}
/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{

	std::cout << "Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &				Fixed::operator=( Fixed const & rhs )
{
	// (void)rhs;
	// return *this;
	std::cout << "Assignation operator called" << std::endl;
	if ( this != &rhs )
	{
		this->_value = rhs.getRawBits();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Fixed const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}


/* ************************************************************************** */