#include "customColorPicker.h"

customColorPicker::customColorPicker()
{


HSLAPixel customColorPicker::operator()(point p)
{
    center c = p.c;
    HSLAPixel colour = c.color;
    int hue = colour.h;
    hue = (hue + 180) % 360
    colour.h = hue;
    return colour;

}
