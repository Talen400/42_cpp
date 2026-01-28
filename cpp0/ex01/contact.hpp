#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
	private:
		std::string _number;
		std::string _nickname;
		std::string _secret;
		std::string _first_name;
		std::string _last_name;
		//bool _is_init;
	public:
		void setContact(
				std::string number,
				std::string nickname,
				std::string secret,
				std::string first,
				std::string last);
		std::string getContact(void) const;
};

#endif
