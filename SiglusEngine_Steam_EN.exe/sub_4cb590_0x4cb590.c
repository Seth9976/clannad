// 函数: sub_4cb590
// 地址: 0x4cb590
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

data_1c04204 = 0
void* ecx = &data_20af854
PSTR i_1 = 0x40
PSTR i

do
    *(ecx - 4) = 0
    void* eax_1 = ecx + 0x34
    *(ecx + 0x19c) = 0
    int32_t j_1 = 7
    __builtin_memset(ecx, 0, 0x18)
    *(ecx + 0x48) = 0xff
    *(ecx + 0x16c) = 0
    *(ecx + 0x1a0) = 0
    *(ecx + 0x1b4) = 0
    int32_t j
    
    do
        *(eax_1 - 0x1c) = 0
        eax_1 += 4
        *(eax_1 - 4) = 0xff
        j = j_1
        j_1 -= 1
    while (j != 1)
    ecx += 0x3c0
    i = i_1
    i_1 -= 1
while (i != 1)
data_702788 = CreateSemaphoreA(i_1, 1, 1, i_1)
data_70277c = i_1
HANDLE result = CreateThread(i_1, i_1, sub_4cb3d0, i_1, i_1, &data_702780)
data_702784 = result
return result
