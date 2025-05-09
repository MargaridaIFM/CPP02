/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 16:49:21 by mi-matias         #+#    #+#             */
/*   Updated: 2025/05/09 08:57:18 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
    std::cout << "creating a\n";
    Fixed a;
    std::cout << "creating b(a)\n";
    Fixed b( a );
    std::cout << "creating c\n";
    Fixed c;
    std::cout << "c = b\n";
    c = b;
    // Fixed d( 5 );
    
    std::cout << "a:" << std::endl;
    std::cout << a.getRawBits() << std::endl;
    
    std::cout << "originals" << std::endl;
    std::cout <<"a: " << a.getRawBits() << std::endl;
    std::cout << "b: " << b.getRawBits() << std::endl;
    std::cout << "c: " << c.getRawBits() << std::endl;

    a.setRawBits(1234);
    b.setRawBits(5678);

    std::cout << "After setting raw bits:" << std::endl;
    std::cout <<"a: " << a.getRawBits() << std::endl;
    std::cout << "b: " << b.getRawBits() << std::endl;
    std::cout << "c: " << c.getRawBits() << std::endl;
    return 0;
}