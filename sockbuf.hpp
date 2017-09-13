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

#include <locale>
#include <iosbase>
#include <streambuf>

template <class charT, class traits = char_traits<charT> >
class sockbuf : public std::basic_streambuf<charT, traits>
{
    public:
        // typedef charT                                 char_type;
        // typedef traits                                traits_type;
        // typedef typename traits_type::int_type        int_type;
        // typedef typename traits_type::pos_type        pos_type;
        // typedef typename traits_type::off_type        off_type;


        sockbuf(); // default
        sockbuf(const rsockbuf& sock); // copy
        sockbuf(rsockbuf&& sock) = delete; // move
        ~sockbuf(); // destructor

    protected:
        void imbue(const std::locale& l);
        std::int_type overflow(std::int_type __overflow = std::traits_type::eof());
        std::int_type pback_fail(std::int_type __pback = std::traits_type::eof());
        std::pos_type seekoff(std::off_type __off
                            , std::ios_base::seekdir __seek
                            , std::ios_base::openmode __mode = std::ios_base::in | std::ios_base::out);
        std::pos_type seekpos(std::pos_type __pos
                            , std::ios_base::openmode __mode = std::ios_base::in | std::ios_base::out);
        std::basic_streambuf<std::char_type, std::traits_type>* setbuf(std::char_type* __charT
                                                                     , std::streamsize __size);
        std::streamsize showmanyc();
        int sync();
        std::int_type uflow();
        std::int_type underflow();
        std::streamsize xsgetn(std::char_type* __s
                             , std::streamsize __n);
        std::streamsize xsputn(const std::char_type* __s
                             ,       std::streamsize __n);
};