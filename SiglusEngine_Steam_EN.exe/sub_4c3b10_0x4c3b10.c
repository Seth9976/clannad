// 函数: sub_4c3b10
// 地址: 0x4c3b10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t uMode = SetErrorMode(SEM_FAILCRITICALERRORS)
int32_t edx
int32_t var_368 = edx
int32_t var_36c = arg1 + 0x61
int32_t result = 0
void fileName
sub_4c84d0(&fileName, "%c:\%s")
WIN32_FIND_DATAA findFileData
HANDLE hFindFile = FindFirstFileA(&fileName, &findFileData)

if (hFindFile != 0xffffffff)
    FindClose(hFindFile)
    result = 1

SetErrorMode(uMode)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
