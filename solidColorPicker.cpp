#include "solidColorPicker.h"

solidColorPicker::solidColorPicker()
{
/* your code here  :)  */
}

HSLAPixel solidColorPicker::operator()(point p)
{
    Center c = p.c;
    HSLAPixel color = c.color;
    return color;

}
