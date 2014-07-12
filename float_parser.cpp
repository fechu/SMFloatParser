//
//  float_parser.cpp
//  PlusPointsPro
//
//  Created by Sandro Meier on 01/06/14.
//  Copyright (c) 2014 Fidelis Factory. All rights reserved.
//

#include "float_parser.h"
#include "math.h"
#include <regex>

using namespace std;

#pragma mark - Implementation

float float_parser::parse(string weight) {
    
    
    // Loop through the string and try to find out what it is...
    for (string::size_type i = 0; i < weight.size(); i++) {
        char current_character = weight.at(i);
        
        // We test the character for different characters.
        // Some of them show us that is of a given type. E.g. when containing a / it is a fraction
        switch (current_character) {
            case '/':
            {
                // Needs to be a fraction
                return parse_fraction(weight);
            }
                
            case '.':
            {
                // A number
                return parse_float(weight);
            }
            
            case ',':
            {
                // A number
                return parse_float(weight);
            }
                
            case '%':
            {
                // Percentage
                return parse_percentage(weight);
            }
                
            default:
                break;
        }
        
    }
    
    // We couldn't find a clear sign in the string.
    // Last try: Get a number out of the string.
    return parse_float(weight);
}

float float_parser::parse_fraction(string fraction)
{
    // The regular expression which describes a valid fraction of the form "number/number" e.g.(1/2)
    // The fraction has to be at the beginning of the string. Everything after the second number
    // will be ignored.
    string pattern = "^([0-9]+)\\/([0-9]+)";
    regex rx(pattern);
    
    // Let's get a result
    cmatch result;
    bool success = regex_search(fraction.c_str() ,result, rx);
    
    if (!success) {
        return __FLT_MAX__;
    }
    
    // Let's go further and get the actual value.
    string upper = result[1];
    string lower = result[2];
    
    // Divide and return
    return stof(upper) / stof(lower);
}

float float_parser::parse_percentage(string percentage)
{
    // Regex matching a percentage
    string pattern = "^([0-9]+)%";
    regex rx(pattern);
    
    // Parse
    cmatch result;
    bool success = regex_search(percentage.c_str(), result, rx);
    
    if (!success) {
        return __FLT_MAX__;
    }
    
    // We got a match
    string percentage_value = result[1];
    
    return stof(percentage_value) / 100;
}

float float_parser::parse_float(string float_string)
{
    // Check for an empty string. An empty string cannot be parsed
    if (float_string == "") {
        return __FLT_MAX__;
    }
    
    // First we replace "," (comma) with dots. This allows us to use
    // `stof` later on.
    string::size_type position = float_string.find_first_of(',');
    if (position != string::npos) {
        // Replace that comma
        float_string.at(position) = '.';
    }
    
    // Try to parse the float with stof.
    // We need to put it into a try/catch block becuase it throws an exception if it cannot parse
    // anything in the string.
    float result = __FLT_MAX__;
    try {
        result = fabs(stof(float_string));
    } catch (exception& e) {
        // Just ignore the exception
    }
    
    return result;
}
