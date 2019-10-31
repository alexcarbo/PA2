#include "fadeColorPicker.h"

fadeColorPicker::fadeColorPicker(double fade)
{
    fadeFactor = fade;
}

HSLAPixel fadeColorPicker::operator()(point p)
{
    Center c = p.c;
    HSLAPixel colour = c.color;
    int distSq = abs(c.x-p.x)**2 + abs(c.y-p.y)**2
    double newL = colour.l * (fadeFactor ** distSq)


}
