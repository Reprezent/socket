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

#include <istream>

#include "basic_isocket.hpp"

template <class charT, class traits = char_traits<charT> >
basic_isocket::basic_isocket()
    : buf()
    , std::basic_istream<charT, traits>::basic_istream(&buf)
{
    // std::basic_istream<charT, traits>::Init(&buf);
}


template <class charT, class traits = char_traits<charT> >
basic_isocket::basic_isocket(const basic_isocket& sock)
{

}


template <class charT, class traits = char_traits<charT> >
basic_isocket::basic_isocket(basic_isocket&& sock)
{

}


basic_isocket::~basic_isocket()
{

}