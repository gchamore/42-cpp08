/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:49:03 by gchamore          #+#    #+#             */
/*   Updated: 2024/11/25 15:55:14 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(int N)
{
    if (N <= 0)
	{
        throw std::invalid_argument("Size must be a positive integer.");
    }
    _maxSize = static_cast<unsigned int>(N);
}

Span::Span(const Span &other) : _maxSize(other._maxSize), _numbers(other._numbers)
{}

Span::~Span() 
{}

Span &Span::operator=(const Span &other)
{
    if (this != &other)
	{
        _maxSize = other._maxSize;
        _numbers = other._numbers;
    }
    return *this;
}

void Span::addNumber(int n)
{
    if (_numbers.size() >= _maxSize)
	{
        throw std::out_of_range("Cannot add more numbers, Span is full.");
    }
    _numbers.push_back(n);
}

template <typename Iterator>
void Span::addNumbers(Iterator begin, Iterator end)
{
    if (std::distance(begin, end) + _numbers.size() > _maxSize)
    {
        throw std::out_of_range("Cannot add more numbers, Span will exceed its maximum size.");
    }
    _numbers.insert(_numbers.end(), begin, end);
}

int Span::shortestSpan()
{
    if (_numbers.size() < 2)
	{
        throw std::logic_error("Not enough numbers to find a span.");
    }
    std::vector<int> sorted(_numbers);
    std::sort(sorted.begin(), sorted.end());
    int shortest = sorted[1] - sorted[0];
    for (std::vector<int>::iterator it = sorted.begin() + 1; it != sorted.end(); ++it)
	{
        int span = *it - *(it - 1);
        if (span < shortest) 
		{
            shortest = span;
        }
    }
    return shortest;
}

int Span::longestSpan()
{
    if (_numbers.size() < 2) 
	{
        throw std::logic_error("Not enough numbers to find a span.");
    }
    int min = *std::min_element(_numbers.begin(), _numbers.end());
    int max = *std::max_element(_numbers.begin(), _numbers.end());
    return max - min;
}