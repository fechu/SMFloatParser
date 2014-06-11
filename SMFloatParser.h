//
//  SMFloatParser.h
//  PlusPointsPro
//
//  Created by Sandro Meier on 01/06/14.
//  Copyright (c) 2014 Fidelis Factory. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SMFloatParser : NSObject

/**
 *  Parses a string and try to get a float out of it.
 *
 *  Possible things to parse: 
 *  - Fraction      1/1
 *  - Percentage    98%
 *  - Floats        1.5
 *  - Floats w ","  1,6
 *  - Integers      2
 *
 *  @param number The string which the parser should parse.
 *
 *  @return The parsed number as a float or FLT_MAX if the parser could not get anything out of
 *  the string.
 */
- (float)parse:(NSString *)number;

@end
