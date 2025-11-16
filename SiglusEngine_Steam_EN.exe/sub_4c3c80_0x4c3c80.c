// 函数: sub_4c3c80
// 地址: 0x4c3c80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

FILETIME fileTime
void var_18
void var_10
char* ecx
int32_t edx
int32_t result = sub_4c3ba0(&var_10, edx, ecx, arg1, &var_10, &var_18, &fileTime)

if (arg2 == 0)
    return result

FILETIME var_20
FileTimeToLocalFileTime(&fileTime, &var_20)
FileTimeToSystemTime(&var_20, arg2)
return result
