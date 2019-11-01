#include "fadeColorPicker.h"

fadeColorPicker::fadeColorPicker(double fade)
{
    fadeFactor = fade;
}

HSLAPixel fadeColorPicker::operator()(point p)
{
    center c = p.c;
    HSLAPixel colour = c.color;
    int distSq = sqrt(pow(abs(c.x-p.x), 2) + pow(abs(c.y-p.y), 2));
    double newL = colour.l * pow(fadeFactor, distSq);
    colour.l  = newL;
    return colour;
}
