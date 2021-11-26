#ifndef CPPPRINT_HPP
#define CPPPRINT_HPP

#include <Arduino.h>

namespace cppprint {
    class CPPPrt {
    private:
    public:
        template <typename T> struct Array { T *p; uint8_t count; };
        template <typename T> inline static CPPPrt::Array<T> array(T *p, uint8_t count) { CPPPrt::Array<T> a = { p, count }; return a; }
        template <typename T> CPPPrt& operator<<(T p);
        template <typename T> CPPPrt& operator<<(CPPPrt::Array<T> p);
    };

    extern CPPPrt sout;
}

#endif

