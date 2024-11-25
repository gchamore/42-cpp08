/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:52:59 by gchamore          #+#    #+#             */
/*   Updated: 2024/11/06 13:19:46 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#define COLOR_RESET    "\033[0m"
#define COLOR_GREEN    "\033[1;32m"
#define COLOR_RED      "\033[1;31m"
#define COLOR_WHITE    "\033[1;37m"

#include <algorithm>
#include <exception>
#include <stdexcept>
#include <iostream>
#include <sstream>
#include <vector>
#include <ctime>

class Span
{
public:
    Span(int N);
    Span(const Span &other);
    ~Span();

    Span &operator=(const Span &other);
    void addNumber(int n);
	template <typename Iterator>
    void addNumbers(Iterator begin, Iterator end);
    int shortestSpan();
    int longestSpan();

private:
    unsigned int _maxSize;
    std::vector<int> _numbers;
};

#include "Span.cpp"

#endif