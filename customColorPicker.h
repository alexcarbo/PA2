/**
 * @file customColorPicker.h
 * Definition of a custom color picker.
 *
 */
#ifndef CUSTOMCOLORPICKER_H
#define CUSTOMCOLORPICKER_H

#include "colorPicker.h"
#include "point.h"
#include "center.h"

/**
    Will pick the opposite colour on the colour wheel
 */
class customColorPicker : public colorPicker
{
  public:
    /**
     * Constructs a new customColorPicker.
     *
     */
    customColorPicker();

    /**
     * Picks the color for point p
    *
     * @param p
     * @return The color of p's center
     */
    virtual HSLAPixel operator()(point p);

};

#endif
