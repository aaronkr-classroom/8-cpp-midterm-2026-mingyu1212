#include "functions.h"

double calculateAverage(vector<int>& grades) {
	int total = 0; // 더하기 전 점수

	
	for (int i = 0; i < grades.size(); i++) {
		total += grades[i]; // 총 점수
	}

	return (double)total / grades.size(); // 평균 반환
}
