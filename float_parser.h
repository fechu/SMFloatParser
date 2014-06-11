//
//  float_parser.h
//  PlusPointsPro
//
//  Created by Sandro Meier on 01/06/14.
//  Copyright (c) 2014 Fidelis Factory. All rights reserved.
//

#ifndef __PlusPointsPro__float_parser__
#define __PlusPointsPro__float_parser__

#include <iostream>

class float_parser {
    
public:
    
    /**
     *  Parses a string containing a number and tries to express it as a float.
     *
     *  @param std::string The string containing the number
     *
     *  @return A float or FLT_MAX when the string could not be parsed.
     */
    float parse(std::string);
    
private:
    
    /**
     *  Parses a fraction
     *
     *  @param string String containing a fraction
     *
     *  @return The value of the fraction as a float or FLT_MAX on failure.
     */
    float parse_fraction(std::string);
    
    /**
     *  Parses a percentage value
     *
     *  @param std::string String containing a percentage value
     *
     *  @return The value as a float or FLT_MAX on failure.
     */
    float parse_percentage(std::string);
    
    /**
     *  Parse a float in a string. It can be delimited with a ",", a ".". An integer is also 
     *  parsed.
     *
     *  @param std::string String containing a number
     *
     *  @return The value as a float
     */
    float parse_float(std::string);
};

#endif /* defined(__PlusPointsPro__float_parser__) */
