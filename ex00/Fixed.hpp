/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 12:27:45 by kzennoun          #+#    #+#             */
/*   Updated: 2021/09/29 12:38:04 by kzennoun         ###   ########lyon.fr   */
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
	~Fixed();
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	Fixed &		operator=( Fixed const & rhs );

	private:

	int					_value;
	static int const 	_fbits;

};


#endif /* *********************************************************** FIXED_H */