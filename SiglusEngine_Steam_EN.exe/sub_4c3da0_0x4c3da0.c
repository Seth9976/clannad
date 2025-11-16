// 函数: sub_4c3da0
// 地址: 0x4c3da0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

uint32_t uMode
int32_t eax_1 = __security_cookie ^ &uMode
int32_t result = 0
uMode = SetErrorMode(SEM_FAILCRITICALERRORS)

if (arg3 != 0)
    void fileName
    sub_4c36f0(&fileName, arg2, arg3, arg4, &fileName)
    WIN32_FIND_DATAA findFileData
    HANDLE hFindFile = FindFirstFileA(&fileName, &findFileData)
    
    if (hFindFile != 0xffffffff)
        FindClose(hFindFile)
        result.b = (findFileData.dwFileAttributes.b & 0x10) != 0
        result += 1

SetErrorMode(uMode)
sub_5f02dd(eax_1 ^ &uMode)
return result
