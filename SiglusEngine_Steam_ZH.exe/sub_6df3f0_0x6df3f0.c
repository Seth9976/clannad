// 函数: sub_6df3f0
// 地址: 0x6df3f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HANDLE esi = *arg1

if (esi != 0)
    WaitForSingleObject(esi, 0xffffffff)

arg1[0xa].b = arg2

if (esi == 0)
    return arg2

return ReleaseSemaphore(esi, 1, nullptr)
