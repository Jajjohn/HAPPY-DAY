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
	//������ʱ����

	int sum = 999;//Ц����ӡ����

	if (0 == PlaySound(MAKEINTRESOURCE(IDR_WAVE1), NULL, SND_RESOURCE | SND_ASYNC))
	{
		printf("playsound false");
	}
	//��������
	system("cls");
	Sleep(5000);
	cout << "���ѽ" << endl;
	//��ӡ
	cout << "���տ���" << endl;
	Sleep(2000);
	cout << "�ҵ�����" << endl;
	Sleep(2000);
	cout << "��ϲ�㣬17���ˣ�" << endl;
	Sleep(2000);
	cout << "Ը����δ����һ����" << endl;
	Sleep(2000);

	cout << "��������" << endl;
	Sleep(2000);

	cout << "���쿪��" << endl;
	Sleep(2000);

	cout << "��������" << endl;
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
		//ѭ����ӡ����
		Sleep(200);
	}
	return (0);
}