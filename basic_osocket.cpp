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

#include <ostream>

#include "basic_osocket.hpp"

template <class charT, class traits = char_traits<charT> >
basic_osocket::basic_osocket()
    : buf()
    , std::basic_ostream<charT, traits>::basic_ostream(&buf)
{
    // std::basic_ostream<charT, traits>::Init(&buf);
}


template <class charT, class traits = char_traits<charT> >
basic_osocket::basic_osocket(const basic_osocket& sock)
{

}


template <class charT, class traits = char_traits<charT> >
basic_osocket::basic_osocket(basic_osocket&& sock)
{

}


basic_osocket::~basic_osocket()
{

}