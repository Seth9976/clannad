// 函数: sub_448560
// 地址: 0x448560
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

uint32_t uMode
int32_t eax_1 = __security_cookie ^ &uMode
void* const edi = &data_611fb0

for (void* i = &data_108fa68; i s< &data_108fe90; )
    sub_4cfd70(*edi * 0x208 + &data_134cec0, i)
    i += 0x4c
    edi += 4

int32_t var_36c = 0x1350bb0
char* var_370 = &data_1352000
uMode = SetErrorMode(SEM_FAILCRITICALERRORS)
int32_t ebx = 0
void fileName
sub_4c84d0(&fileName, "%s\%s")
WIN32_FIND_DATAA findFileData
HANDLE hFindFile = FindFirstFileA(&fileName, &findFileData)

if (hFindFile != 0xffffffff)
    FindClose(hFindFile)
    ebx.b = (findFileData.dwFileAttributes.b & 0x10) != 0
    ebx += 1

SetErrorMode(uMode)
int32_t eax_3 = data_1333e08

if (ebx == 2)
    eax_3 = 1

data_1333e08 = eax_3
char const* const var_36c_4 = "gameexe.ini"
char* var_370_2 = &data_1352208
uMode = SetErrorMode(SEM_FAILCRITICALERRORS)
int32_t ebx_1 = 0
sub_4c84d0(&fileName, "%s\%s")
HANDLE hFindFile_1 = FindFirstFileA(&fileName, &findFileData)

if (hFindFile_1 != 0xffffffff)
    FindClose(hFindFile_1)
    ebx_1.b = (findFileData.dwFileAttributes.b & 0x10) != 0
    ebx_1 += 1

SetErrorMode(uMode)
int32_t eax_5 = data_1333e0c

if (ebx_1 == 1)
    eax_5 = 1

data_1333e0c = eax_5
int32_t var_36c_8 = 0x1350390
char* var_370_4 = &data_1352410
uMode = SetErrorMode(SEM_FAILCRITICALERRORS)
int32_t ebx_2 = 0
sub_4c84d0(&fileName, "%s\%s")
HANDLE hFindFile_2 = FindFirstFileA(&fileName, &findFileData)

if (hFindFile_2 != 0xffffffff)
    FindClose(hFindFile_2)
    ebx_2.b = (findFileData.dwFileAttributes.b & 0x10) != 0
    ebx_2 += 1

SetErrorMode(uMode)
int32_t eax_7 = data_1333e10

if (ebx_2 == 2)
    eax_7 = 1

data_1333e10 = eax_7
int32_t var_36c_12 = 0x134e310
char* var_370_6 = &data_1352618
uMode = SetErrorMode(SEM_FAILCRITICALERRORS)
int32_t ebx_3 = 0
sub_4c84d0(&fileName, "%s\%s")
HANDLE hFindFile_3 = FindFirstFileA(&fileName, &findFileData)

if (hFindFile_3 != 0xffffffff)
    FindClose(hFindFile_3)
    ebx_3.b = (findFileData.dwFileAttributes.b & 0x10) != 0
    ebx_3 += 1

SetErrorMode(uMode)
int32_t eax_9 = data_1333e14

if (ebx_3 == 2)
    eax_9 = 1

data_1333e14 = eax_9
int32_t var_36c_16 = 0x1350fc0
char* var_370_8 = &data_1352820
uMode = SetErrorMode(SEM_FAILCRITICALERRORS)
int32_t ebx_4 = 0
sub_4c84d0(&fileName, "%s\%s")
HANDLE hFindFile_4 = FindFirstFileA(&fileName, &findFileData)

if (hFindFile_4 != 0xffffffff)
    FindClose(hFindFile_4)
    ebx_4.b = (findFileData.dwFileAttributes.b & 0x10) != 0
    ebx_4 += 1

SetErrorMode(uMode)
int32_t result = data_1333e18

if (ebx_4 == 2)
    result = 1

data_1333e18 = result
sub_5f02dd(eax_1 ^ &uMode)
return result
