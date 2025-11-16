// 函数: sub_55c6f0
// 地址: 0x55c6f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg1[1]
int32_t edx_2 = (eax - *arg1) s>> 2

if (edx_2 u> arg2)
    int32_t eax_1 = eax + ((arg2 - edx_2) << 2)
    arg1[1] = eax_1
    return eax_1

if (edx_2 u< arg2)
    sub_55d250(arg1, arg2 - edx_2)
    int32_t edi_1 = arg1[1]
    int32_t eax_6 = (edi_1 - *arg1) s>> 2
    
    if (arg2 != eax_6)
        __builtin_memset(edi_1, 0, (arg2 - eax_6) << 2)
    
    int32_t ecx_2 = arg1[1]
    eax = ecx_2 + ((arg2 - ((ecx_2 - *arg1) s>> 2)) << 2)
    arg1[1] = eax

return eax
