#pragma once

#ifdef MYLIBRARY_EXPORTS
#define MYLIBRARY_API __declspec(dllexport)  // ��� ���������� ����������
#else
#define MYLIBRARY_API __declspec(dllimport) // ��� ������������� ����������
#endif

extern "C" {
    MYLIBRARY_API int* sumArrays(int* arr1, int* arr2, const int size);
}