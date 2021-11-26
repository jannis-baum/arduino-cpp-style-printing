#include "../include/cppprint.hpp"

using namespace cppprint;

template CPPPrt& CPPPrt::operator<<<char>              (char p);
template CPPPrt& CPPPrt::operator<<<unsigned char>     (unsigned char p);
template CPPPrt& CPPPrt::operator<<<short>             (short p);
template CPPPrt& CPPPrt::operator<<<unsigned short>    (unsigned short p);
template CPPPrt& CPPPrt::operator<<<int>               (int p);
template CPPPrt& CPPPrt::operator<<<unsigned int>      (unsigned int p);
template CPPPrt& CPPPrt::operator<<<long>              (long p);
template CPPPrt& CPPPrt::operator<<<unsigned long>     (unsigned long p);
template CPPPrt& CPPPrt::operator<<<float>             (float p);
template CPPPrt& CPPPrt::operator<<<double>            (double p);
template CPPPrt& CPPPrt::operator<<<const char*>       (const char* p);

template CPPPrt& CPPPrt::operator<<<char>              (CPPPrt::Array<char> p);
template CPPPrt& CPPPrt::operator<<<unsigned char>     (CPPPrt::Array<unsigned char> p);
template CPPPrt& CPPPrt::operator<<<short>             (CPPPrt::Array<short> p);
template CPPPrt& CPPPrt::operator<<<unsigned short>    (CPPPrt::Array<unsigned short> p);
template CPPPrt& CPPPrt::operator<<<int>               (CPPPrt::Array<int> p);
template CPPPrt& CPPPrt::operator<<<unsigned int>      (CPPPrt::Array<unsigned int> p);
template CPPPrt& CPPPrt::operator<<<long>              (CPPPrt::Array<long> p);
template CPPPrt& CPPPrt::operator<<<unsigned long>     (CPPPrt::Array<unsigned long> p);
template CPPPrt& CPPPrt::operator<<<float>             (CPPPrt::Array<float> p);
template CPPPrt& CPPPrt::operator<<<double>            (CPPPrt::Array<double> p);
template CPPPrt& CPPPrt::operator<<<const char*>       (CPPPrt::Array<const char*> p);

template <typename T> CPPPrt& CPPPrt::operator<<(T p) {
    Serial.print(p); return *this;
}

template <typename T> CPPPrt& CPPPrt::operator<<(CPPPrt::Array<T> p) {
    *this << "[";
    for (uint8_t i = 0; i < p.count; i++) {
        *this << *(p.p + i);
        if (p.count - i - 1) *this << ", ";
    }
    return *this << "]";
}

CPPPrt cppprint::sout;

