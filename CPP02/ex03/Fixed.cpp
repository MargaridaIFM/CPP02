/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mi-matias <mi-matias@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 17:43:10 by mi-matias         #+#    #+#             */
/*   Updated: 2025/04/20 12:17:13 by mi-matias        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed:: fractBits = 8;

Fixed::Fixed() : value(0)
{
   // std::cout << "Default constructor called" << std::endl;
}

Fixed:: Fixed(const int vInt)
{
    //std::cout << "Int constructor called" << std::endl;
    value = vInt << fractBits;
    
}
Fixed::Fixed(const float vFloat)
{
   // std::cout << "Float constructor called" << std::endl;
    value = roundf(vFloat * (1 << fractBits));
    
}
Fixed::Fixed(const Fixed &other)
{
    //std::cout << "Copy constructor called" << std::endl;
    *this = other;      
}
Fixed &Fixed::operator=(const Fixed &other)
{
    //std::cout << "Copy assignment operator called" << std::endl;
    if(this != &other)
        this->value = other.value;
    return(*this);
}

Fixed::~Fixed()
{
    //std::cout << "Destructor called" << std::endl;
}
int Fixed::getRawBits() const
{
    //std::cout << "getRawBits member function called" << std::endl;
    return(value);
}

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}
float Fixed::toFloat() const
{
    return(static_cast<float>(value) / (1 << fractBits));
}

int Fixed::toInt() const
{
    return(value >> fractBits);
}

bool Fixed::operator>(const Fixed &other) const
{
    return(this->value > other.value);
}

bool Fixed::operator<(const Fixed &other) const
{
    return(this->value < other.value);
}

bool Fixed::operator>=(const Fixed &other) const
{
    return(this->value >= other.value);
}

bool Fixed::operator<=(const Fixed &other) const
{
    return(this->value <= other.value);
}

bool Fixed::operator==(const Fixed &other) const
{
    return(this->value == other.value);
}
bool Fixed::operator!=(const Fixed &other) const
{
    return(this->value != other.value);
}

Fixed Fixed::operator+(const Fixed &other) const
{
    return(Fixed(this->toFloat() + other.toFloat()));
    // using only integer
    // Fixed temp(*this);
    // temp.value = temp.value +other.value;
    // return (temp);
}

Fixed Fixed::operator-(const Fixed &other) const
{
    // using the constructer that accept float numbers
    return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed &other) const
{
    // using the constructer that accept float numbers
    return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed &other) const
{
    // using the constructer that accept float numbers
    if(other.toFloat() != 0)
        return (Fixed(this->toFloat() / other.toFloat()));
    else
    {
        std::cerr << "Error: Cannot divide by 0!" << std::endl;
        return Fixed(0);
    }
}

Fixed Fixed::operator++()
{
    this->value++;
    return(*this);  
}

Fixed Fixed::operator--()
{
    this->value--;
    return(*this); 
}

Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    operator++();
    return(temp);
}
Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    operator--();
    return(temp);
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{  
    // nao necessito de compara em float por que o operador < e > ja comparam em float
    return(a < b) ? a : b;
}
const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    return(a < b) ? a : b;
}
Fixed& Fixed::max(Fixed &a, Fixed &b)
{  
    return(a > b) ? a : b;
}
const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    return(a > b) ? a : b;
}


std::ostream &operator<<(std::ostream &out, const Fixed &Fixed)
{
    out << Fixed.toFloat();
    return (out);
}