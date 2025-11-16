// 函数: sub_74972a
// 地址: 0x74972a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

FILETIME systemTimeAsFileTime
systemTimeAsFileTime.dwHighDateTime = arg1
systemTimeAsFileTime.dwLowDateTime = arg1
GetSystemTimeAsFileTime(&systemTimeAsFileTime)
uint32_t dwHighDateTime = systemTimeAsFileTime.dwHighDateTime
bool c = systemTimeAsFileTime.dwLowDateTime u< 0
data_b94f08 = systemTimeAsFileTime.dwLowDateTime
data_b94f0c = adc.d(dwHighDateTime, 0, c)
return 0
