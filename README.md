# SMFloatParser

A small class that parses a string and returns it's float value. 

## Examples

	"12%" 	-> 0.12
	"1/2"	-> 0.50
	"1,2"	-> 1.20
	"3"		-> 3.00
	"2.3"	-> 2.3
	
## Installation

If you are using `git` for version control in your project, you can use 

	git submodule add https://github.com/fechu/SMFloatParser.git <path>
	
to add it as a submodule.

As an alternative you can just drop the `*.h`, `*.mm` and `.cpp` into your Xcode project and start using them.



## Usage

1. Import `SMFloatParser`
2. Call the `parse:` method with string
3. There's no step 3

## License (MIT)

The MIT License (MIT)

Copyright (c) 2014 Sandro Meier & Roman Brunner

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.