/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlavared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 17:06:38 by tlavared          #+#    #+#             */
/*   Updated: 2026/01/28 19:00:47 by tlavared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include "contact.hpp"

int	main(int argc, char *argv[])
{
	Contact contact;

	std::string number;
	std::string nickname;
	std::string secret;
	std::string first;
	std::string last;

	std::cout << "number: ";
	std::cin >> number;
	
	std::cout << "nickname: ";
	std::cin >> nickname;
	
	std::cout << "secret: ";
	std::cin >> secret;
	
	std::cout << "first: ";
	std::cin >> first;
	
	std::cout << "last: ";
	std::cin >> last;

	contact.setContact(number, nickname, secret, first, last);
	return (0);
}
