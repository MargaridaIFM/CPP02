/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mi-matias <mi-matias@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 16:49:26 by mi-matias         #+#    #+#             */
/*   Updated: 2025/04/19 17:44:34 by mi-matias        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string.h>

class Fixed
{
    private:
        int value;
        static const int fractBits;
        
    public:
        Fixed();
        Fixed(const Fixed& other); // copy constructer;
        Fixed& operator = (const Fixed& other);  //  Copy assignment operator  
        ~Fixed();

        int getRawBits() const;
        void setRawBits(int const raw);
            
};
#endif