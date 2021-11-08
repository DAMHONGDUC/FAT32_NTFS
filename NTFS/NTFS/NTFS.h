#pragma once
#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include<vector>
#include<windows.h>
#include<iomanip>
#include<sstream>
using namespace std;

// Đọc sector, trả về trạng thái : 1 - đọc thành công, 0 - đọc thất bại
int ReadSector(LPCWSTR drive, int readPoint, BYTE *&sector);

// Đọc Partition Boot Sector 
void Read_PBS(BYTE *sector);

// Lấy "number" bytes từ vị trí "offset"
int64_t Get_Bytes(BYTE* sector, int offset, int number);

// In bảng ra sector
void Print_Sector(BYTE *sector);