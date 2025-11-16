// 函数: sub_4d6ae0
// 地址: 0x4d6ae0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg3
int32_t edi = data_1af413c

if (edi != 0)
    sub_4d6a50(arg1, arg2, arg3, arg4)

GlobalUnlock(*arg3)
HGLOBAL hMem = GlobalReAlloc(*arg3, arg4, 2)
*arg3 = hMem

if (hMem != 0)
    hMem = GlobalLock(hMem)
    *arg2 = hMem
else if (data_1c04c64 == 0)
    sub_4cfd70(0x1c04d68, 0x61ce48)
    hMem = sub_4cfd70(&data_1c04c68, "MEM_ERR")
    data_1c04c64 = 1

if (edi == 0)
    return hMem

sub_4d6500()
return ReleaseSemaphore(data_7027a8, 1, nullptr)
