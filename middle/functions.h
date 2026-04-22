#ifndef GUARD_FUNCTIONS_H
#define GUARD_FUNCTIONS_H
#pragma once

#include <string>
#include <vector>

using namespace std;

struct Student {
	string name;
	vector<int> scores;
};

double calculateAverage(vector<int>& grades);

#endif
