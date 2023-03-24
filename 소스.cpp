//저작자: 신예원 202201901 컴퓨터공학부

#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

void main() {
  string start = "--Start--\n";           //start 문자열 변수에 "--Start--" 할당
	string greeting = "Hello world!\n";     //greeting 문자열 변수에 "Hello world!" 할당
	string time = "It's lunch time now.\n"; //time 문자열 변수에 "It's lunch time now." 할당
	cout << start << greeting << time;      //"--Start--", "Hello world!", "It's lunch time now." 문자열 출력
	
	cout<< "It's 2 o'clock now";
	cout<< "It's... show time."<< endl;
}
