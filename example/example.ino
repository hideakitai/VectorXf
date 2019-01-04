#include <VectorXf.h>

void setup()
{
    Serial.begin(115200);
    delay(2000);

    Vec3f v1 (1, 2, 3);
    Vec3f v2 (3, 4, 5);
    Vec3f v3 = v1 * v2;
    Serial.println(v1.distance(v2));
    Serial.println(v3.length());
}

void loop()
{
}
