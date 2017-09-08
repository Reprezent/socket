// 
// rsocket Library (C++ 11)
//
// Version 0.1 (Last Updated: 8/10/2017)
//
// Description:
//    This class implements a Client Socket utility for use within
//    any type of program.
//
// Author:
//	  Richard "Alex" Riedel
//


#pragma once

class rsocket
{
	public:
		rsocket();
		rsocket(const rsocket& socket);
		rsocket(rsocket&& socket);
		~rsocket();

		rsocket& operator<<(rsocket& socket, std::string output);
		rsocket& operator>>(rsocket& socket, std::string input);
	protected:
	private:

};
