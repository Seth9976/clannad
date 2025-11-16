// 函数: sub_4b3269
// 地址: 0x4b3269
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
int32_t edi_2 = arg2 | arg3
int32_t result = __endthreadex(edi_2)

if (result s< 0)
    return result

if ((edi_2 & 0x2000) != 0 && zx.d((*(arg1 + 0xc8)).w) u>= 0x200)
    int32_t eax_4
    
    if ((*(*(*(arg1 + 0x10) + (*((*(arg1 + 0x14))[arg4] + 4) << 2)) + 4) & 0x10) == 0)
        void* ecx_5 = *((arg4 << 2) + *(arg1 + 0x14))
        int32_t ecx_6 = *(ecx_5 + 0x10)
        eax_4 = (*(ecx_5 + 0xc) & 0x7ff) | 0xb0000000
        
        if (ecx_6 != 0)
            if (ecx_6 == 1)
                eax_4 |= 0x550000
            else if (ecx_6 == 2)
                eax_4 |= 0xaa0000
            else if (ecx_6 == 3)
                eax_4 |= 0xff0000
    else
        eax_4 = 0xf0e40800
    
    __endthreadex(eax_4)

return 0
