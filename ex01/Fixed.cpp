/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 12:27:55 by kzennoun          #+#    #+#             */
/*   Updated: 2021/10/04 16:57:49 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

int const Fixed::_fbits = 8;

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

Fixed::Fixed( int const value )
{
	std::cout << "Int constructor called" << std::endl;
	_value = value << _fbits;
	
}

Fixed::Fixed( float const value )
{
	std::cout << "Float constructor called" << std::endl;
	_value = value * (1 << _fbits);	
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

std::ostream &			Fixed::operator<<( std::ostream & o, Fixed const & i )
{
	o << "Value = " << i.toFloat();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
int		Fixed::toInt(void) const
{
	return (_value >> _fbits);
}

float	Fixed::toFloat(void) const
{
	return (_value >> _fbits);
}


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