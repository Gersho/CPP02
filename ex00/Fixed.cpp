/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 12:27:55 by kzennoun          #+#    #+#             */
/*   Updated: 2021/09/29 12:47:10 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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