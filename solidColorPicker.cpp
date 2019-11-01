#include "solidColorPicker.h"

solidColorPicker::solidColorPicker()
{
/* your code here  :)  */
}

HSLAPixel solidColorPicker::operator()(point p)
{
    center c = p.c;
    HSLAPixel color = c.color;
    return color;

}
