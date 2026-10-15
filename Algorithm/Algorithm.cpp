/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

float GetSum(int* data, int count)
{
	float sum = 0;
	for (int i = 0; i < count; i++)
	{
		sum += data[i];
	}
	return sum;
}
float GetAvg(int* data, int count)
{
	return GetSum(data, count) / count;
}
void main()
{
	printf("Input Target Value = ");
	int targetValue = -1;
	int targetIndex = -1;
	int targetCount = 0;
	scanf_s("%d", &targetValue);
	printf("Target = %d\n", targetValue);

	int a[10] = { 5,8,3,9,2,8,7,1,8,6 };
	int maxValue = -1;
	int maxIndex = -1;

	for (int i = 0; i < 10; i++) {
		if (a[i] > maxValue) maxValue = a[maxIndex = i];
		if (a[i] > targetValue) {
			if (targetCount++ == 0) targetIndex = i;
		}
	}

	printf("targetCount = %d \n", targetCount, targetIndex);
	printf("Max Value = %d Max Index = %d", maxValue, maxIndex);
	printf("\n");
	printf("Sum = %f", GetSum(a, 10));
	printf("\n");
	printf("Avg = %.2f", GetAvg(a, 10));
} */

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float GetSum(int* data, int count)
{
	float sum = 0;
	for (int i = 0; i < count; i++)
	{
		sum += data[i];
	}
	return sum;
}
float GetAvg(int* data, int count)
{
	return GetSum(data, count) / count;
}
void main()
{
	printf("Input Target Value = ");
	int targetValue = -1;
	int targetIndex = -1;
	int targetCount = 0;
	scanf_s("%d", &targetValue);
	printf("Target = %d\n", targetValue);

	int a[10] = { 5,8,3,9,2,8,7,1,8,6 };
	int maxValue = -1;
	int maxIndex = -1;

	for (int i = 0; i < 10; i++) {
		if (a[i] > maxValue) maxValue = a[maxIndex = i];
		if (a[i] > targetValue) {
			if (targetCount++ == 0) targetIndex = i;
		}
	}

	printf("targetCount = %d \n", targetCount, targetIndex);
	printf("Max Value = %d Max Index = %d", maxValue, maxIndex);
	printf("\n");
	printf("Sum = %f", GetSum(a, 10));
	printf("\n");
	printf("Avg = %.2f", GetAvg(a, 10));
}*/

/*#include <stdio.h>

void print_chars(char ch, int count) {
	for (int i = 0; i < count; i++) {
		printf("%c", ch);
	}
}

int main(void) {
	int height = 5;


	printf("직각삼각형\n");
	for (int i = 1; i <= height; i++) {
		print_chars('*', i);
		printf("\n");
	}
	printf("\n");


	printf("역삼각형\n");
	for (int i = height; i >= 1; i--) {
		print_chars('*', i);
		printf("\n");
	}
	printf("\n");


	printf("오른쪽 정렬 삼각형\n");
	for (int i = 1; i <= height; i++) {
		print_chars(' ', height - i);
		print_chars('*', i);
		printf("\n");
	}
	printf("\n");


	printf("피라미드\n");
	for (int i = 1; i <= height; i++) {
		print_chars(' ', height - i);
		print_chars('*', 2 * i - 1);
		printf("\n");
	}

	return 0;
}*/

/*#include <stdio.h>

void print_chars(char ch, int count) {
	for (int i = 0; i < count; i++) {
		printf("%c", ch);
	}
}

int main(void) {
	int count = 5;

	for (int i = 1; i <= count; i++) {
		print_chars(' ', count - i);
		print_chars('*', 2 * i - 1);
		printf("\n");
	}

	return 0;
} */


/*#include <stdio.h>

void main() {
	int n = 30528;
	int cnt = 0;
	if (n == 0)
		cnt = 1;
	while (n > 0) {
		cnt++;
		n /= 10;
	}
	printf("%d\n", cnt);
}*/

//목표 3 + 0 + 5 + 2 + 8

//10월 22일 알고리즘 시간에 시험


/*#include <stdio.h>

int main(void)
{
	int n = 30528;
	int sum = 0;

	while (n > 0) {
		sum += n % 10; 
		n /= 10;       
	}

	printf("%d\n", sum);

	return 0;
}*/


/*#include <stdio.h>

void main()
{
	int n = 12345;
	int cnt = 0;
	int sum = 0;
	if (n == 0)
		cnt = 1;
	while (n > 0) {
		cnt++;
		sum += n % 10;
		n /= 10;
	}
	printf("sum = %d\n", sum);
	printf("cont = %d\n", cnt);
	
}*/

//3 + 0 + 5 + 2 + 8

/*#include <stdio.h>

int main(void)
{
	int n = 12345;

	while (n > 0) {
		printf("%d", n % 10); 
		n /= 10;              
	}
	printf("\n");

	return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int count_passing(const int score[], int count);

int main(void) {
	int student_scores[10] = { 50, 75, 100, 45, 80, 90, 60, 70, 85, 95 };

	count_passing(student_scores, 10);

	return 0;
}

enum {
	PASS_SCORE = 60
};
int count_passing(const int score[], int count) {
	int passCount = 0;
	for (int i = 0; i < count; i++) {
		if (score[i] >= PASS_SCORE) {
			passCount++;
		}
	}
	printf("Number of passing scores: %d\n", passCount);
	return passCount;
}*/

//카멜 케이스는 소문자로 시작하고, 단어가 바뀔 때마다 대문자로 시작하는 표기법
	//스네이크 케이스는 단어 사이에 언더스코어(_)를 넣는 표기법
	//파스칼 케이스는 단어가 바뀔 때마다 대문자로 시작하는 표기법

//배송비 계산 함수 분리

/*#include<stdio.h>

int main(void) {
	int order_total = 29999;
	int shipping_fee = 0;
	if (order_total < 30000 ) {
		shipping_fee = 3000;
	}
	else {
		shipping_fee = 0;
	}
	printf("배송비: %d\n", order_total + shipping_fee);
	return 0;
}*/


//60점이상의 학생 수를 세는 함수

/*#include <stdio.h>

int main(void) {
	int student_scores[10] = { 50, 75, 100, 45, 80, 90, 60, 70, 85, 95 };
	int passCount = 0;
	for (int i = 0; i < 10; i++) {
		if (student_scores[i] >= 60) {
			passCount++;
		}
	}
	printf("Number of passing scores: %d\n", passCount);
	return 0;
}*/

//enum을 사용하여 배송비 계산 함수

/*#include <stdio.h>
	int main(void) {
	int order_total = 30000;
	int shipping_fee = 0;
	enum {
		FREE_SHIPPING_MIN = 30000,
		SHIPPING_FEE = 3000
	};
	if (order_total < FREE_SHIPPING_MIN) {
		shipping_fee = SHIPPING_FEE;
	}
	else {
		shipping_fee = 0;
	}
	printf("배송비: %d\n", order_total + shipping_fee);
	return 0;
}*/

//윤년 규칙

/*#include <stdio.h>


void main() 
	{
		int year = 1900;
		if (year % 400 == 0)
		{
			printf("o \n");
		}
		else if (year % 100 == 0)
		{
			printf("x \n");
		}
		else if (year % 4 == 0)
		{
			printf("o \n");
		}

		else
		{
			printf("x \n");


	}
}*/

//점수를 입력받아 등급 출력
/*#include <stdio.h>

void main() 
{
	int score = 0;
	printf("점수를 입력하세요: ");
	scanf_s("%d", &score);
	if (score >= 90) {
		printf("등급: A\n");
	}
	else if (score >= 80) {
		printf("등급: B\n");
	}
	else if (score >= 70) {
		printf("등급: C\n");
	}
	else if (score >= 60) {
		printf("등급: D\n");
	}
	else {
		printf("등급: F\n");
	}
}*/

//a = {3,4,4,7,9,2,5,6,8,8,1,2} 에서 가장 긴 연속 증가 구간의 길이를 구하는 프로그램
/*#include <iostream>
#include <vector>

// 값의 변화 상태를 나타내는 열거형(enum class) 정의
enum class Trend {
	INCREASING,
	NOT_INCREASING
};

int longestIncreasingSubarray(const std::vector<int>& arr) {
	if (arr.empty()) {
		return 0;
	}

	int maxLength = 1;
	int currentLength = 1;

	
	for (size_t i = 1; i < arr.size(); ++i) {
		Trend state;

		
		if (arr[i] > arr[i - 1]) {
			state = Trend::INCREASING;
		}
		else {
			state = Trend::NOT_INCREASING;
		}

		
		if (state == Trend::INCREASING) {
			currentLength++;
			if (currentLength > maxLength) {
				maxLength = currentLength;
			}
		}
		else {
			currentLength = 1; 
	}

	return maxLength;
}

int main() {

	std::vector<int> a = { 3, 4, 4, 7, 9, 2, 5, 6, 8, 8, 1, 2 };

	int result = longestIncreasingSubarray(a);

	std::cout << "가장 긴 연속 증가 구간의 길이: " << result << std::endl;

	return 0;
}*/

/*#include <stdio.h>

void main()
{
	int arr[] = { 3,4,4,7,9,2,5,6,8,8,1,2 };
	int  count = 1;
	int max_count = 1;
	for (int i = 1; i < 12; i++)
	{
		if (arr[i] > arr[i - 1])
		{
			count++;
		}
		else
		{
			count = 1;
		}

		if (count > max_count)
		{
			max_count = count;
		}

	}
	printf("가장 긴 연속 증가 구간의 길이: %d\n", max_count);
}*/

/*#include <stdio.h>

typedef enum {
	INCREASING,
	NOT_INCREASING
} Trend;

int main(void) {
	int arr[12] = { 3,4,4,7,9,2,5,6,8,8,1,2 };
	int n = 12;

	
	printf("배열: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	int max_length = 1;
	int current_length = 1;

	
	for (int i = 1; i < n; i++) {
		Trend state;

		
		if (arr[i] > arr[i - 1]) {
			state = INCREASING;
		}
		else {
			state = NOT_INCREASING;
		}

		if (state == INCREASING) {
			current_length++;
			if (current_length > max_length) {
				max_length = current_length;
			}
		}
		else {
			current_length = 1; 
		}
	}

	
	printf("가장 긴 연속 증가 구간의 길이: %d\n", max_length);

	return 0;
}*/

//실습시험
//다음주 이시간 

