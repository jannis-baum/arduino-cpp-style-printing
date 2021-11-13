#ifndef PRINT_HPP
#define PRINT_HPP

#include <Arduino.h>

class Prt {
private:
public:
    template <typename T> struct Array { T *p; uint8_t count; };
    template <typename T> inline static Prt::Array<T> array(T *p, uint8_t count) { Prt::Array<T> a = { p, count }; return a; }
    template <typename T> Prt& operator<<(T p);
    template <typename T> Prt& operator<<(Prt::Array<T> p);
};

#endif

