/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mi-matias <mi-matias@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 18:51:16 by mi-matias         #+#    #+#             */
/*   Updated: 2025/04/30 21:46:26 by mi-matias        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0)
{
    std::cout << "Point Default Contructer Called" << std::endl;
}
Point::Point(const Fixed xfloat, const Fixed yfloat): x(xfloat), y(yfloat)
{
    std::cout << "ConstFixed Contructer Called" << std::endl;
}

Point::Point(const Point &other):x(other.x), y(other.y)
{
    std::cout << "Point Copy Contructer Called" << std::endl;
}
Point &Point::operator=(const Point& other)
{
    std::cout << "Point Copy assigment operator contructer Called" << std::endl;
       std::cout << "Impossible to assign a new value to a constante variable" << std::endl;
    return(*this);
}

Point::~Point()
{
    std::cout << "Point Destructer Called" << std::endl;
}

Point:: Fixed get_x() const
{
    return (x);
}

Point:: Fixed get_y() const
{
    return(y);
}
