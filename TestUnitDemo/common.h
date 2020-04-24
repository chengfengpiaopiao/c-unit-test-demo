#pragma once
#include <cstdlib>

//简单宏定义
#define bool int;
#define TRUE 1;
#define FALSE 0;

//通用打印
void printLine() {
	cout << "-------------------------------------------------------------" << endl;
}

#define PRINT printLine

//带参数宏
#define PRINTINFO(content) cout << content << endl;

#define MAX(a,b) ( (a) > (b) ) ? (a) : (b)
