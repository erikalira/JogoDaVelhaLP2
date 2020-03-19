#ifndef IOEXCEPTION_H_INCLUDED
#define IOEXCEPTION_H_INCLUDED

#include <exception>
using namespace std;

class IOException : public exception
{
    public:
        IOException(string m): msg(m){}
        virtual const char* what() const throw()
        {
            return msg.c_str();
        }
        virtual ~IOException() throw(){}

    private:
        string msg;
};


#endif // IOEXCEPTION_H_INCLUDED
