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

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#define COLOR_RESET    "\033[0m"
#define COLOR_GREEN    "\033[1;32m"
#define COLOR_RED      "\033[1;31m"
#define COLOR_WHITE    "\033[1;37m"

#include <algorithm>
#include <exception>
#include <stdexcept>
#include <iostream>
#include <sstream>

template <typename T>
typename T::iterator easyfind(T &container, int value);

#include "easyfind.tpp"

#endif
