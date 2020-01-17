/**
@file
@author  Juan Haladjian <juan.haladjian@gmail.com>
@brief This feature extraction algorithm returns the minium of a Signal

ARF MIT License
Copyright (c) <2019> <Juan Haladjian>

Permission is hereby granted, free of charge, to any person obtaining a copy of this software
and associated documentation files (the "Software"), to deal in the Software without restriction,
including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense,
and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so,
subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial
portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT
LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

*/
#ifndef STD_h
#define STD_h

#include "Algorithm.h"
#include "../../utils/ARFTypedefs.h"

namespace ARF {

class STD : public Algorithm {
public:
	
	/**
	Returns the standard deviation of the input Signal
	
	@param data A Signal
	@return The standard deviation of the Signal
	*/
	Data* execute(Data * data) override;
};

}

#endif /* STD_h */
