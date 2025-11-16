// 函数: sub_6b4390
// 地址: 0x6b4390
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void** lpFileName_1 = arg1
PWSTR lpFileName

if (lpFileName_1[5] u< 8)
    lpFileName = lpFileName_1
else
    lpFileName = *lpFileName_1

enum FILE_FLAGS_AND_ATTRIBUTES dwFileAttributes = GetFileAttributesW(lpFileName) & 0xfffffffe

if (lpFileName_1[5] u>= 8)
    lpFileName_1 = *lpFileName_1

BOOL result
result.b = SetFileAttributesW(lpFileName_1, dwFileAttributes) s> 0
return result
