// 函数: sub_4647b0
// 地址: 0x4647b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1[5] != 0xcc)
    (*arg1[0x6a])(arg1)
    arg1[0x23] = 0
    arg1[5] = 0xcc

while (*(arg1[0x6a] + 8) != 0)
    void* eax_3 = *arg1
    *(eax_3 + 0x14) = 0x30
    (*eax_3)(arg1)

int32_t eax_5
eax_5.b = arg1[0x11] != 0
arg1[5] = eax_5 + 0xcd
return 1
