/*
 * CMovingAverageFilter.h
 *
 *  Created on: 2022. 3. 8.
 *      Author: ingu Choi
 */

#ifndef CMOVINGAVERAGEFILTER_H_
#define CMOVINGAVERAGEFILTER_H_

#include <iostream>
#include <deque>

using namespace std;

class CMovingAverageFilter {
public:
	CMovingAverageFilter();
	virtual ~CMovingAverageFilter();

	void init(int size);

	float filter(float input);


private:
	int size = 0;
	float sum = 0.0;
	float filterOut = 0.0;

	deque<float> qData;

};

#endif /* CMOVINGAVERAGEFILTER_H_ */
