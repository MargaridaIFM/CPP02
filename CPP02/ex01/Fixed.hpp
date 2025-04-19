/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mi-matias <mi-matias@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 16:49:26 by mi-matias         #+#    #+#             */
/*   Updated: 2025/04/19 20:47:50 by mi-matias        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <math.h>


class Fixed
{
    private:
        int value;
        static const int fractBits;
        
    public:
        Fixed();
        Fixed(const int vInt);
        Fixed(const float vFloat);
        Fixed(const Fixed& other); // copy constructer;
        Fixed& operator = (const Fixed& other);  //  Copy assignment operator  
        ~Fixed();

        int getRawBits() const;
        void setRawBits(int const raw);

        float toFloat(void) const;
        int toInt( void ) const;
            
};

std::ostream& operator<<(std::ostream& out, const Fixed &Fixed );

#endif