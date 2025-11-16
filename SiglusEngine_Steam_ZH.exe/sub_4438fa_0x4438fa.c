// 函数: sub_4438fa
// 地址: 0x4438fa
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
void* edx_2 = arg3 * 0x64 + *(arg2 * 0x64 + *(arg1 + 0x2c) + 4)
int32_t* eax_4 = (arg4 << 5) + *(edx_2 + 0x34)
eax_4[4] = arg6
eax_4[2] = edx_2
*eax_4 = 1
eax_4[3] = arg5
eax_4[5].w = arg2.w
*(eax_4 + 0x16) = arg3.w
int32_t ebx_1 = *(arg1 + 0xb0)
void* edi_3 = *(ebx_1 + (*(arg5 + 0x14) << 2))

if (*(edi_3 + 0x34) == 0)
    *(edi_3 + 0x34) = eax_4
else
    eax_4[6] = *(*(*(ebx_1 + (*(arg5 + 0x14) << 2)) + 0x34) + 0x18)
    eax_4[7] = *(*(*(arg1 + 0xb0) + (*(arg5 + 0x14) << 2)) + 0x34)
    *(*(*(*(*(arg1 + 0xb0) + (*(arg5 + 0x14) << 2)) + 0x34) + 0x18) + 0x1c) = eax_4
    *(*(*(*(arg1 + 0xb0) + (*(arg5 + 0x14) << 2)) + 0x34) + 0x18) = eax_4

if ((*(*(*(arg1 + 0xb0) + (*(arg5 + 0x14) << 2)) + 0x28) & 1) != 0)
    eax_4[1] = 1
    int32_t eax_5 = *(edx_2 + 0x58)
    
    if (eax_5 != 0xa000000 && eax_5 != 0xb000000)
        *(edx_2 + 4) = 1

if ((*(arg1 + 0x119) & 8) == 0 && *(arg1 + 0xb4) != 0)
    sub_4433cc(arg1)

return 0
