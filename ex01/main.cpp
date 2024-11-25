/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:53:13 by gchamore          #+#    #+#             */
/*   Updated: 2024/11/25 15:51:18 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// int main()
// {
// 	std::cout << COLOR_GREEN << "\nTest with 5 values with max 5\n" << COLOR_RESET << std::endl;
// 	try
// 	{
// 		Span sp(5);

// 		sp.addNumber(6);
// 		sp.addNumber(3);
// 		sp.addNumber(17);
// 		sp.addNumber(18);
// 		sp.addNumber(11);
// 		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
//     	std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
// 	}
// 	catch (const std::exception &e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}

// 	std::cout << COLOR_GREEN << "\nTest with 100000 with max 100000\n" << COLOR_RESET << std::endl;
// 	try
// 	{
// 		Span sp(100000);
//         std::srand(static_cast<unsigned int>(std::time(0)));

//         for (int i = 0; i < 100000; ++i)
// 		{
//             int random_number = std::rand() % 1000001;
//             sp.addNumber(random_number);
//         }

// 		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
//     	std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
// 	}
// 	catch (const std::exception &e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}

// 	std::cout << COLOR_GREEN << "\nTest with 378 with max 378 with addNumbers\n" << COLOR_RESET << std::endl;
// 	try
// 	{
// 		Span sp(378);

// 		std::srand(static_cast<unsigned int>(std::time(0)));

// 		std::vector<int> random_numbers;
// 		for (int i = 0; i < 378; ++i)
// 		{
// 			random_numbers.push_back(std::rand() % 379);
// 		}

// 		sp.addNumbers(random_numbers.begin(), random_numbers.end());

// 		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
// 		std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
// 	}
// 	catch (const std::exception &e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}

// 	std::cout << COLOR_RED << "\nTest with 6 values with max 5\n" << COLOR_RESET << std::endl;
// 	try
// 	{
// 		Span sp(5);

// 		sp.addNumber(6);
// 		sp.addNumber(3);
// 		sp.addNumber(17);
// 		sp.addNumber(18);
// 		sp.addNumber(11);
// 		sp.addNumber(19);
// 		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
//     	std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
// 	}
// 	catch (const std::exception &e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}

// 	std::cout << COLOR_RED << "\nTest with 5 values with max -5\n" << COLOR_RESET << std::endl;
// 	try
// 	{
// 		Span sp(-5);

// 		sp.addNumber(6);
// 		sp.addNumber(3);
// 		sp.addNumber(17);
// 		sp.addNumber(18);
// 		sp.addNumber(11);
// 		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
//     	std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
// 	}
// 	catch (const std::exception &e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}

// 	std::cout << COLOR_RED << "\nTest with 0 values with max 5\n" << COLOR_RESET << std::endl;
// 	try
// 	{
// 		Span sp(5);

// 		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
//     	std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
// 	}
// 	catch (const std::exception &e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}

// 	std::cout << COLOR_RED << "\nTest with 1 value with max 5\n" << COLOR_RESET << std::endl;
// 	try
// 	{
// 		Span sp(5);

// 		sp.addNumber(6);

// 		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
//     	std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
// 	}
// 	catch (const std::exception &e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}

// 	std::cout << COLOR_RED << "\nTest with 100000 with max 99999\n" << COLOR_RESET << std::endl;
// 	try
// 	{
// 		Span sp(99999);
//         std::srand(static_cast<unsigned int>(std::time(0)));

//         for (int i = 0; i < 100000; ++i)
// 		{
//             int random_number = std::rand() % 1000001;
//             sp.addNumber(random_number);
//         }

// 		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
//     	std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
// 	}
// 	catch (const std::exception &e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}

// 	std::cout << std::endl;
// 	return 0;
// }

int main()
{
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
return 0;
}