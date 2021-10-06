/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 14:23:38 by kzennoun          #+#    #+#             */
/*   Updated: 2021/10/06 14:30:40 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << (a < b) << std::endl;
	std::cout << (a > b) << std::endl;
	std::cout << (a <= b) << std::endl;
	std::cout << (a >= b) << std::endl;
	std::cout << (a == b) << std::endl;
	std::cout << (a != b) << std::endl;

	std::cout << (a + b) << std::endl;
	std::cout << (a - b) << std::endl;
	std::cout << (a * b) << std::endl;
	std::cout << (a / b) << std::endl;

	std::cout << a << std::endl;
	//std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	//std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	//std::cout << Fixed::max(a, b) << std::endl;
	return 0;

}

/*
•Six opérateurs de comparaison : >, <, >=, <=, == and !=.
•Quatre opérateurs arithmétiques : +, -, *, et /.
•Les opérateurs de pre-incrément, post-incrément, pré-décrément et post-décrément,
qui vont incrémenter et décrémenter la valeur du nombre à point fixe de la valeur
représentable lapluspetitetelleque1 +  > 1.
Ajoutez les overloads de fonctions membres statiques publiques à votre classe :
•La fonction membre statique min qui prend une référence sur deux nombres a point
fixe et qui renvoie une réference vers le plus petit, et un overload qui prend deux
references sur deux nombres à point fixe et qui renvoie une réference vers la plus
petite valeur.
•La fonction membre statique max qui prend une référence sur deux nombres à point
fixe et qui renvoie une réference vers le plus grand, et un overload qui prend une
reférence sur deux nombres à point fixe et qui renvoie une réference vers la plus
grande valeur.


*/