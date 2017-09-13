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

#include <istream>

#include "sockbuf.hpp"

template <class charT, class traits = char_traits<charT> >
class basic_isocket : public basic_istream<charT, traits>
{
public:
    basic_isocket();
    basic_isocket(const basic_isocket& sock);
    basic_isocket(basic_isocket&& sock) = delete;
    ~basic_isocket();


protected:
private:

    sockbuf<charT, traits> buf;

};