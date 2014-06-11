//
//  SMFloatParser.m
//  PlusPointsPro
//
//  Created by Sandro Meier on 01/06/14.
//  Copyright (c) 2014 Fidelis Factory. All rights reserved.
//

#import "SMFloatParser.h"

#include <iostream>
#include "float_parser.h"


@implementation SMFloatParser {
    std::unique_ptr<float_parser> parser;
}

- (float)parse:(NSString *)number
{
    // Just pass the string to c++.
    std::string float_string([number UTF8String]);
    return parser->parse(float_string);
}

@end
