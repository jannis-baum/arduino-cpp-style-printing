# C++ style printing for [PlatformIO](https://github.com/platformio)

Prefer `cout << "Hello World" << endl;` over wonky `Serial.print()`'s? This is what you need!

Bring easy & elegant C++ style printing to the [PlatformIO](https://github.com/platformio) framework.

## Usage

Add this repository's URL to your `.platformio.ini`'s `lib_deps`. To get started, create and keep an instance of `Prt`; this will be the equivalent of `<iostream>`'s `std::cout`.

```cpp
Prt out;
```

From there on out, whenever you would `Serial.print` something, just use your newly created instance as you would the familiar `std::cout`.

```cpp
out << "Hello World!" << 123 << "\n";
```

for example will print `Hello World!123` and break the line as expected.

### Arrays

There is an easy way to print arrays as well. Simply call the `array<T>(T *p, uint8_t count)` method on your instance of `Prt` and use it along with arbitrary other types or arrays in the streamline.

```cpp
int myArray[] = {1, 2, 3};
out << "Look at my array: " << out.array<int>(myArray, 3) << "\n";
```

will print `Look at my array: [1, 2, 3]` as expected.

### Custom types and objects

This can easily be expanded to print any custom classes' instances by adding definitions for how to print them. See `source/print.cpp` for examples of standard types.

