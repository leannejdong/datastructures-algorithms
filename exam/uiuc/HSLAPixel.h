/**
 * @file HSLAPixel.h
 *
 * @author Leanne Dong
 * 	jdleanne@gmail.com
 */

#pragma once

#include <iostream>
#include <sstream>

namespace uiuc {

  // Put your HSLAPixel class definition here.
  // (Remember to end it with a semicolon!)
	class HSLAPixel{
	public:
		double h; // Hue of the pixel, in degree [0,360)
		double s; // Saturation of the pixel, in [0, 1]
		double l; // Luminance of the pixel, in [0,1]
		double a; // Alpha of the pixel, in [0,1]

		/**
		 * Construct a default HSLAPixel
		 */
		HSLAPixel();

		/**
		 * Construct a opaque HSLAPixel with given hue, saturation and luminance values
		 *
		 * @oaram hue Hue value for the new pixel
		 * @param saturation Saturation value for the new pixel 
		 * param luminance Luminance value for the new pixel 
		 */
		HSLAPixel(double hue, double saturation, double luminance);

		/**
		 * Construct a opaque HSLAPixel with given hue, saturation, luminance and alpha values.
		 *
		 * @oaram hue Hue value for the new pixel
		 * @param saturation Saturation value for the new pixel 
		 * @param luminance Luminance value for the new pixel 
		 * @param alpha Alpha value for the new pixel
		 */
		HSLAPixel(double hue, double saturation, double luminance, double alpha);

		HSLAPixel & operator=(HSLAPixel const & other);
	    bool operator== (HSLAPixel const & other) const ;
	    bool operator!= (HSLAPixel const & other) const ;
	    bool operator<  (HSLAPixel const & other) const ;
	};

	/**
   * Stream operator that allows pixels to be written to standard streams
   * (like cout).
   *
   * @param out Stream to write to.
   * @param pixel Pixel to write to the stream.
   */
	
	  std::ostream & operator<<(std::ostream & out, HSLAPixel const & pixel);
	  std::stringstream & operator<<(std::stringstream & out, HSLAPixel const & pixel);
}
