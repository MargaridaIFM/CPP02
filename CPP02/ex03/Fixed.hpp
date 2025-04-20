/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mi-matias <mi-matias@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 16:49:26 by mi-matias         #+#    #+#             */
/*   Updated: 2025/04/20 12:04:42 by mi-matias        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int value;
        static const int fractBits;
        
    public:
        Fixed();
        Fixed(const int vInt);
        Fixed(const float vFloat);
        Fixed(const Fixed &other); // copy constructer;
        Fixed& operator = (const Fixed& other);  //  Copy assignment operator  
        ~Fixed();

        int getRawBits() const;
        void setRawBits(int const raw);

        float toFloat(void) const;
        int toInt( void ) const;

        //comparison operator:
        bool operator>(const Fixed &other) const;
        bool operator<(const Fixed &other) const;
        bool operator>=(const Fixed &other) const;
        bool operator<=(const Fixed &other) const;
        bool operator==(const Fixed &other) const;
        bool operator!=(const Fixed &other) const;
        
        //arithmetic operators:
        Fixed operator+(const Fixed &other) const;
        Fixed operator-(const Fixed &other) const;
        Fixed operator*(const Fixed &other) const;
        Fixed operator/(const Fixed &other) const;

        //increment/decrement
        Fixed operator++();
        Fixed operator--();
        Fixed operator++(int);
        Fixed operator--(int);

        //overload member functions
        static Fixed &min(Fixed &a, Fixed &b); // first min
        static const Fixed &min(const Fixed &a, const Fixed &b); // second min
        static Fixed &max(Fixed &a, Fixed &b); //first max
        static const Fixed &max(const Fixed &a, const Fixed &b); // second max
};

std::ostream &operator<<(std::ostream& out, const Fixed &Fixed );

#endif
