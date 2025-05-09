/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 16:49:21 by mi-matias         #+#    #+#             */
/*   Updated: 2025/05/09 09:51:28 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
    std::cout << "creating a\n";
    Fixed a;
    std::cout << "creating const b\n";
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << "a:" << a << std::endl;
    std::cout << "++a:"<< ++a << std::endl;
    std::cout << "a:" << a << std::endl;
    std::cout << "a++:" <<a++ << std::endl;
    std::cout << "a:" << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "max " << Fixed::max( a, b ) << std::endl;
    std::cout << "mni " << Fixed::min( a, b ) << std::endl;

    return 0;
}
