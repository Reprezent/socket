// 
// socket Library (C++ 11)
//
// Version 0.1 (Last Updated: 9/12/2017)
//
// Description:
//
// Author:
//	  Richard "Alex" Riedel
//

#pragma once


#include <ostream>

#include "sockbuf.hpp"

template <class charT, class traits = char_traits<charT> >
class basic_osocket : public basic_ostream<charT, traits>
{
public:
    basic_osocket();
    basic_osocket(const basic_osocket& sock);
    basic_osocket(basic_osocket&& sock) = delete;
    ~basic_osocket();


protected:
private:

    sockbuf<charT, traits> buf;

};