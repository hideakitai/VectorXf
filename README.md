# VectorXf
Vector class 2f, 3f, 4f (port of ofVecXf (openFrameworks)).
If you want the replacement of `std::vector` for Arduino, see [RingBuffer](https://github.com/hideakitai/RingBuffer).

## Usage

``` C++
#include <VectorXf.h>

void setup()
{
    Vec3f v1 (1, 2, 3);
    Vec3f v2 (3, 4, 5);
    Vec3f v3 = v1 * v2;

    Serial.println(v1.distance(v2));
    Serial.println(v3.length());
}
```


## APIs

see [openFrameworks VecXf documentation](https://openframeworks.cc///documentation/math/ofVec3f/).

## License

MIT
