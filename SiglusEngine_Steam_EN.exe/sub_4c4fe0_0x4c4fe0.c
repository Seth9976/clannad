// 函数: sub_4c4fe0
// 地址: 0x4c4fe0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

uint32_t numberOfBytesWritten = arg1
HANDLE hFile = data_1bfdd28

if (arg1 == 0)
    return 

BOOL eax = sub_4cfc80(arg1)

if (eax != 1 && hFile != 0xffffffff)
    SetFilePointer(hFile, 0, nullptr, FILE_END)
    WriteFile(hFile, arg1, eax - 1, &numberOfBytesWritten, nullptr)
