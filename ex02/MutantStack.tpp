/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:49:03 by gchamore          #+#    #+#             */
/*   Updated: 2024/11/25 16:05:33 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &other) : std::stack<T>(other)
{}

template <typename T>
MutantStack<T>::~MutantStack()
{}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &other)
{
    if (this != &other)
	{
        std::stack<T>::operator=(other);
    }
    return *this;
}

template <typename T>
typename std::deque<T>::iterator MutantStack<T>::begin()
{
    return this->c.begin();
}

template <typename T>
typename std::deque<T>::const_iterator MutantStack<T>::begin() const
{
    return this->c.begin();
}

template <typename T>
typename std::deque<T>::iterator MutantStack<T>::end()
{
    return this->c.end();
}

template <typename T>
typename std::deque<T>::const_iterator MutantStack<T>::end() const
{
    return this->c.end();
}

template <typename T>
typename std::deque<T>::reverse_iterator MutantStack<T>::rbegin()
{
    return this->c.rbegin();
}

template <typename T>
typename std::deque<T>::const_reverse_iterator MutantStack<T>::rbegin() const
{
    return this->c.rbegin();
}

template <typename T>
typename std::deque<T>::reverse_iterator MutantStack<T>::rend()
{
    return this->c.rend();
}

template <typename T>
typename std::deque<T>::const_reverse_iterator MutantStack<T>::rend() const
{
    return this->c.rend();
}