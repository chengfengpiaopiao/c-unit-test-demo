#pragma once
#include <cstdlib>

//�򵥺궨��
#define bool int;
#define TRUE 1;
#define FALSE 0;

//ͨ�ô�ӡ
void printLine() {
	cout << "-------------------------------------------------------------" << endl;
}

#define PRINT printLine

//��������
#define PRINTINFO(content) cout << content << endl;

#define MAX(a,b) ( (a) > (b) ) ? (a) : (b)
