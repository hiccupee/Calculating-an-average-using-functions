// test6.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#define MAX_COUNT 50
#define __STDC_WANT_LIB_EXT1__ 1

using std::cout;
using std::cin;
using std::endl;

double Sum(double x[], size_t n)
{
	double sum = 0.0;
	for (size_t i = 0; i < n; ++i)
		sum += x[i];
	return sum;
}

double Average(double x[], size_t n)
{
	return Sum(x, n) / n;
}
size_t GetData(double *data, size_t max_count)
{
	size_t nValues = 0;
	cout << "How many values do you want to enter (Maximum " << max_count
		<< ")? ";
	cin >> nValues;
	if (nValues > max_count)
	{
		cout << "Maximum count exceeded. " << max_count << " item will be read.";
		nValues = max_count;
	}
	for (size_t i = 0; i < nValues; ++i)
		cin >> data[i];

	return nValues;
}

int main(void)
{
	double samples[MAX_COUNT] = { 0.0 };
	size_t sampleCount = GetData(samples, MAX_COUNT);
	double average = Average(samples, sampleCount);
	cout << "The average of the values you entered is: " << average << endl;

	return 0;
}

