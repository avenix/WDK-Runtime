/**
 @file
 @author  Juan Haladjian <juan.haladjian@gmail.com>
 @brief This event detection algorithm finds peaks in an incoming stream of values
 
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

#ifndef ARF_PEAKDETECTOR_H
#define ARF_PEAKDETECTOR_H

#include "../core/Algorithm.h"
#include "../../dataStructures/Matrix.h"

namespace ARF {

class PeakDetector : public Algorithm {
private:
	int samplesSinceLastPeak = -1;
	float minPeakHeight;
	int minPeakDistance;
	float lastPeakValue = 0.0;
	
public:
	Data* execute(Data* data) override;
	PeakDetector(float minPeakHeight, int minPeakDistance);
};

}

#endif //ARF_PEAKDETECTOR_H