/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 12:27:45 by kzennoun          #+#    #+#             */
/*   Updated: 2021/12/02 12:25:16 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{

	public:

	Fixed();
	Fixed( Fixed const & src );
	Fixed( int const value);
	Fixed( float const value);
	~Fixed();
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	int		toInt(void) const;
	float	toFloat(void) const;

	Fixed &		operator=( Fixed const & rhs );
	Fixed		operator+( Fixed const & rhs );
	Fixed		operator-( Fixed const & rhs );
	Fixed		operator*( Fixed const & rhs );
	Fixed		operator/( Fixed const & rhs );
	Fixed &		operator++( void);
	Fixed 		operator++( int n );
	Fixed &		operator--( void );
	Fixed 		operator--( int n );
	bool		operator<(Fixed const & rhs) const;
	bool		operator>(Fixed const & rhs) const;
	bool		operator<=(Fixed const & rhs) const;
	bool		operator>=(Fixed const & rhs) const;
	bool		operator==(Fixed const & rhs) const;
	bool		operator!=(Fixed const & rhs) const;
	static Fixed &			min(Fixed &a, Fixed &b);
	static const Fixed &	min(Fixed const & a, Fixed const & b);
	static Fixed &			max(Fixed &a, Fixed &b);
	static const Fixed &	max(Fixed const & a, Fixed const & b);

	private:

	int					_value;
	static int const 	_fbits;

};
	std::ostream& operator<<( std::ostream & o, Fixed const & i );


#endif /* *********************************************************** FIXED_H */