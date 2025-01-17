﻿
#include<iostream>
#include <windows.h> 
using namespace std;
int a[1001][1101]; int b[1101];
int sum;
int main()
{
	LARGE_INTEGER head, tail, freq; // timers
	QueryPerformanceFrequency(&freq);
	QueryPerformanceCounter(&head);
	int n = 128; //此处的n为数据规模;
	for (int k = 1; k <= 5; k++) {  
		sum = 0;
		for (int i = 1; i <= n; i++) b[i] = i;
		for (int i = 1; i <= n; i++) sum += b[i];//此处为平凡算法
	}
	QueryPerformanceCounter(&tail);
	int second_time = (double)(tail.QuadPart - head.QuadPart) * 1.00 / (double)(freq.QuadPart);
	int micro_time = (double)(tail.QuadPart - head.QuadPart) / (double)(freq.QuadPart) * 1e6;
	cout << "The total time of the project is :" << second_time << " s and " << micro_time << " ms" << endl;
	system("pause");
	return 0;
}
