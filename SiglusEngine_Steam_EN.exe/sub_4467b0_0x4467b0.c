// 函数: sub_4467b0
// 地址: 0x4467b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

WIN32_FIND_DATAA findFileData
int32_t eax_1 = __security_cookie ^ &findFileData
void* var_35c = &data_13517e0
data_1af4768 = 0
void var_218
sub_4c84d0(&var_218, "%s\*.ico")
HANDLE hFindFile = FindFirstFileA(&var_218, &findFileData)

if (hFindFile != 0xffffffff)
    FindClose(hFindFile)
    var_32c
    void* var_35c_3 = &var_32c
    void* var_360_1 = &data_13517e0
    sub_4c84d0(&var_218, "%s\%s")
    hFindFile = LoadImageA(nullptr, &var_218, IMAGE_ICON, 0, 0, LR_LOADFROMFILE)
    data_1af4768 = hFindFile

sub_5f02dd(eax_1 ^ &findFileData)
return hFindFile
