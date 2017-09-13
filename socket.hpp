// 
// socket Library (C++ 11)
//
// Version 0.1 (Last Updated: 9/12/2017)
//
// Description:
//    This class implements a Client Socket utility for use within
//    any type of program.
//
// Author:
//	  Richard "Alex" Riedel
//


#pragma once


#include <iostream>

class socket
{
	public:
		socket();
		socket(const socket& sock);
		socket(socket&& sock);
		~socket();

		// socket& operator<<(socket& sock, std::string output);
		// socket& operator>>(socket& sock, std::string input);
	protected:
	private:

};
