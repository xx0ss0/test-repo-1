//저작자: 신예원 202201901 컴퓨터공학부

#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

void main() {
	string greeting = "hello world\n";      //greeting 문자열 변수에 "hello world" 할당
	string time = "It's lunch time now.\n"; //time 문자열 변수에 "It's lunch time now." 할당
	printf("\n");                           //줄바꿈     
	cout << greeting;                       //"hello world" 문자열 출력
	cout << time;                           //"It's lunch time now." 문자열 출력
}
