#include "../include/print.hpp"

template Prt& Prt::operator<<<char>              (char p);
template Prt& Prt::operator<<<unsigned char>     (unsigned char p);
template Prt& Prt::operator<<<short>             (short p);
template Prt& Prt::operator<<<unsigned short>    (unsigned short p);
template Prt& Prt::operator<<<int>               (int p);
template Prt& Prt::operator<<<unsigned int>      (unsigned int p);
template Prt& Prt::operator<<<long>              (long p);
template Prt& Prt::operator<<<unsigned long>     (unsigned long p);
template Prt& Prt::operator<<<float>             (float p);
template Prt& Prt::operator<<<double>            (double p);
template Prt& Prt::operator<<<const char*>       (const char* p);

template Prt& Prt::operator<<<char>              (Prt::Array<char> p);
template Prt& Prt::operator<<<unsigned char>     (Prt::Array<unsigned char> p);
template Prt& Prt::operator<<<short>             (Prt::Array<short> p);
template Prt& Prt::operator<<<unsigned short>    (Prt::Array<unsigned short> p);
template Prt& Prt::operator<<<int>               (Prt::Array<int> p);
template Prt& Prt::operator<<<unsigned int>      (Prt::Array<unsigned int> p);
template Prt& Prt::operator<<<long>              (Prt::Array<long> p);
template Prt& Prt::operator<<<unsigned long>     (Prt::Array<unsigned long> p);
template Prt& Prt::operator<<<float>             (Prt::Array<float> p);
template Prt& Prt::operator<<<double>            (Prt::Array<double> p);
template Prt& Prt::operator<<<const char*>       (Prt::Array<const char*> p);

template <typename T> Prt& Prt::operator<<(T p) {
    Serial.print(p); return *this;
}

template <typename T> Prt& Prt::operator<<(Prt::Array<T> p) {
    *this << "[";
    for (uint8_t i = 0; i < p.count; i++) {
        *this << *(p.p + i);
        if (p.count - i - 1) *this << ", ";
    }
    return *this << "]";
}

