/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 12:27:55 by kzennoun          #+#    #+#             */
/*   Updated: 2021/11/29 16:09:35 by kzennoun         ###   ########lyon.fr   */
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

Fixed::Fixed ( float const value )
{
	std::cout << "Float constructor called" << std::endl;
	_value = roundf(value * (1 << _fbits));	
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
	if ( this != &rhs )
	{
		this->_value = rhs.getRawBits();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Fixed const & i )
{
	o << i.toFloat();
	return o;
}

Fixed &		Fixed::operator+( Fixed const & rhs )
{
	Fixed *tmp = new Fixed(this->toFloat() + rhs.toFloat());

	return (*tmp);
}

Fixed &		Fixed::operator-( Fixed const & rhs )
{
	Fixed *tmp = new Fixed(this->toFloat() - rhs.toFloat());

	return (*tmp);
}

Fixed &		Fixed::operator*( Fixed const & rhs )
{
	Fixed *tmp = new Fixed(this->toFloat() * rhs.toFloat());

	return (*tmp);
}

Fixed &		Fixed::operator/( Fixed const & rhs )
{
	Fixed *tmp = new Fixed(this->toFloat() / rhs.toFloat());

	return (*tmp);
}

bool	Fixed::operator<(Fixed const & rhs) const
{
	return (this->toFloat() < rhs.toFloat());
}

bool	Fixed::operator>(Fixed const & rhs) const
{
	return (this->toFloat() > rhs.toFloat());
}

bool	Fixed::operator<=(Fixed const & rhs) const
{
	return (this->toFloat() <= rhs.toFloat());
}

bool	Fixed::operator>=(Fixed const & rhs) const
{
	return (this->toFloat() >= rhs.toFloat());
}

bool	Fixed::operator==(Fixed const & rhs) const
{
	return (this->toFloat() == rhs.toFloat());
}

bool	Fixed::operator!=(Fixed const & rhs) const
{
	return (this->toFloat() != rhs.toFloat());
}

Fixed&	Fixed::operator++( void ) {
	this->_value++;
	return *this;
}

Fixed	Fixed::operator++( int n ) {
	( void ) n;
	Fixed	res;

	res = ++*this;
	return res;
}

Fixed&	Fixed::operator--( void ) {
	this->_value--;
	return *this;
}

Fixed	Fixed::operator--( int n ) {
	( void ) n;
	Fixed	res;

	res = --*this;
	return res;
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
	return (_value / (float)(1 << _fbits));
}

Fixed &		min(Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	return b;
}

const Fixed &		min(Fixed const & a, Fixed const & b)
{
	if (a < b)
		return a;
	return b;
}

Fixed &		max(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	return b;
}

const Fixed &		max(Fixed const & a, Fixed const & b)
{
	if (a > b)
		return a;
	return b;
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