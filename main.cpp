#include <stdio.h>
#include <Windows.h>
#include <mmsystem.h>
#include <stdlib.h>
#include <iostream>
#include "resource.h"


using namespace std;
#pragma comment (lib,"winmm.lib")

int main(void)
{
	double start, stop, durationTime;
	start = clock();
	//设置延时函数

	int sum = 999;//笑脸打印次数

	if (0 == PlaySound(MAKEINTRESOURCE(IDR_WAVE1), NULL, SND_RESOURCE | SND_ASYNC))
	{
		printf("playsound false");
	}
	//播放音乐
	system("cls");
	Sleep(5000);
	cout << "你好呀" << endl;
	//打印
	cout << "生日快乐" << endl;
	Sleep(2000);
	cout << "我的朋友" << endl;
	Sleep(2000);
	cout << "恭喜你，17岁了！" << endl;
	Sleep(2000);
	cout << "愿你在未来的一年里" << endl;
	Sleep(2000);

	cout << "事事如意" << endl;
	Sleep(2000);

	cout << "天天开心" << endl;
	Sleep(2000);

	cout << "健健康康" << endl;
	Sleep(2000);
	cout << "Happy birthday!" << endl;
	Sleep(2000);
	cout << "From jaj" << endl;
	cin.get();

	system("cls");

	for (int i = 0; i <= sum; i++)
	{
		printf(": )\n");
		system("color 06");
		//循环打印换行
		Sleep(200);
	}
	return (0);
}