/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 12:27:45 by kzennoun          #+#    #+#             */
/*   Updated: 2021/09/28 16:19:48 by kzennoun         ###   ########lyon.fr   */
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

	private:

	int					_value;
	static int const 	_fbits = 8;

};


#endif /* *********************************************************** FIXED_H */