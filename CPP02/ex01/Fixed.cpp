/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mi-matias <mi-matias@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 17:43:10 by mi-matias         #+#    #+#             */
/*   Updated: 2025/04/19 20:48:07 by mi-matias        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed:: fractBits = 8;

Fixed::Fixed() : value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int vInt)
{
    std::cout << "Int constructor called" << std::endl;
    value = vInt << fractBits;
}

Fixed::Fixed(const float vFloat)
{
    std::cout << "Float constructor called" << std::endl;
    value = roundf(vFloat * (1 << fractBits));
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
    
}
Fixed &Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &other)
        this->value = other.value;
    return(*this);
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return(value);
}

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
} 
float Fixed::toFloat(void) const
{
    return(static_cast<float>(value) / (1 << fractBits));
}

int Fixed::toInt() const
{
    return(value >> fractBits);    
}

std::ostream& operator<<(std::ostream& out, const Fixed &Fixed )
{
    out << Fixed.toFloat();
    return (out);
}
