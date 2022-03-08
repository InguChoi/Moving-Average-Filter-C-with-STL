/*
 * CMovingAverageFilter.cpp
 *
 *  Created on: 2022. 3. 8.
 *      Author: user
 */

#include "CMovingAverageFilter.h"

CMovingAverageFilter::CMovingAverageFilter() {
	// TODO Auto-generated constructor stub

}

CMovingAverageFilter::~CMovingAverageFilter() {
	// TODO Auto-generated destructor stub

}

void CMovingAverageFilter::init(int size)
{
	this->size = size;
}

float CMovingAverageFilter::filter(float input)
{
	qData.push_back(input);


	if(qData.size() >= this->size)
	{
		sum = 0.0;

		for(int i=0; i<size; i++)
		{
			sum += qData.at(i);
		}

		qData.pop_front();
	}

	filterOut = sum / ((float)size);

	return filterOut;
}


