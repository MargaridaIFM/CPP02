/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mi-matias <mi-matias@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 18:51:36 by mi-matias         #+#    #+#             */
/*   Updated: 2025/04/30 21:55:22 by mi-matias        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point();
        Point(const Fixed xfloat, const Fixed yfloat);
        Point(const Point &other);
        Point& operator = (const Point& other);
        ~Point();
        
        Fixed get_x() const;
        Fixed get_y() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif