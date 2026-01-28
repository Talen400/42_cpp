#include "contact.hpp"

void	Contact::setContact(
		std::string number,
		std::string nickname,
		std::string secret,
		std::string first_name,
		std::string last_name)
{
	_number = number;
	_nickname = nickname;
	_secret = secret;
	_first_name = first_name;
	_last_name = last_name;
}

void	Contact::getContact(void)
{
	
}
