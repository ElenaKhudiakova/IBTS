// dllmain.cpp : Определяет точку входа для приложения DLL.
#include "pch.h"
#include "LR_1.h"
#include "iostream"



int __stdcall Group()
{	
	static int Group = 571227;
	return Group;
}

void __stdcall FIO()
{
	setlocale(LC_ALL, "rus");
	const char* a = "Худякова Елена Алексеевна";
	std::cout << a;
}