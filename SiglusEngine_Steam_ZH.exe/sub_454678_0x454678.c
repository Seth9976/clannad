// 函数: sub_454678
// 地址: 0x454678
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_8 = edi
int32_t eax_1

if (arg2 s>= 0)
    eax_1 = sub_4538a9(arg1, arg2, 1, 1)
    
    if (eax_1 == 0)
        return 0x8876086c
else
    eax_1 = not.d(arg2)

int32_t ecx_2 = *(*(eax_1 + 4) + 0x10)

if (arg4 u> ecx_2 || arg3 u> ecx_2)
    return 0x8876086c

*(*(*(arg1 + 0xb0) + (*(eax_1 + 0x14) << 2)) + 0x48) = arg3
*(*(*(arg1 + 0xb0) + (*(eax_1 + 0x14) << 2)) + 0x4c) = arg4
return 0
