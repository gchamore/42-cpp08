/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:53:13 by gchamore          #+#    #+#             */
/*   Updated: 2024/11/25 14:29:49 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iostream>

int main()
{
	// Test with vector wich will be found
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);
	try
	{
		std::cout << COLOR_WHITE << "\nValues in vec: ";
		for (std::vector<int>::size_type i = 0; i < vec.size(); ++i)
		{
            std::cout << vec[i] << " ";
        }
		std::cout << std::endl;
		int searchValue = 3;
		std::cout << "Searching for: " << searchValue << COLOR_RESET << std::endl;
		std::vector<int>::iterator it = easyfind(vec, searchValue);
		std::cout << COLOR_GREEN << "\n✔ Found: " << *it << COLOR_RESET << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << COLOR_RED <<  e.what() << COLOR_RESET << "\n" << std::endl;
	}
	// Test with list wich will not be found
	
    std::list<int> lst;
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);
    lst.push_back(40);
    lst.push_back(50);
    try
	{
		std::cout << COLOR_WHITE << "\nValues in vec: ";
		for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
		{
            std::cout << *it << " ";
        }
		std::cout << std::endl;
		int searchValue = 25;
		std::cout << "Searching for: " << searchValue << COLOR_RESET << std::endl;
        std::list<int>::iterator it = easyfind(lst, searchValue);
        std::cout << COLOR_GREEN << "\n✔ Found: " << *it << COLOR_RESET << std::endl;
    }
	catch (const std::exception &e)
	{
        std::cout << COLOR_RED <<  e.what() << COLOR_RESET << "\n" << std::endl;
    }
    return 0;
}
