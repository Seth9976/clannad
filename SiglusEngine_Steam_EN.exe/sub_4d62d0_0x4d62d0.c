// 函数: sub_4d62d0
// 地址: 0x4d62d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_9 = data_20c0500
data_20c0500 = eax_9 + 0x20

if (eax_9 == 0)
    HGLOBAL hMem = GlobalAlloc(GHND, (eax_9 + 0x20) * 0x14)
    data_20c04f8 = hMem
    int32_t eax_3 = GlobalLock(hMem)
    data_20c04fc = eax_3
    return eax_3

GlobalUnlock(data_20c04f8)
HGLOBAL hMem_1 = GlobalReAlloc(data_20c04f8, data_20c0500 * 0x14, 2)
data_20c04f8 = hMem_1

if (hMem_1 != 0)
    int32_t eax_8 = GlobalLock(hMem_1)
    data_20c04fc = eax_8
    return sub_4d1ba0(eax_8, 0x280, eax_8 + eax_9 * 0x14, 0)

if (data_1c04c64 != hMem_1)
    return hMem_1

sub_4cfd70(0x1c04d68, 0x61cb2c)
void* eax_7 = sub_4cfd70(&data_1c04c68, "MemCheckReAlloc_ERR")
data_1c04c64 = 1
return eax_7
