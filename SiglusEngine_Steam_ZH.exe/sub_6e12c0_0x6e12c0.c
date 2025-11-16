// 函数: sub_6e12c0
// 地址: 0x6e12c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax_8
void* ecx_2
int32_t* edx

if (arg4 == 0)
    edx = arg1
    void* ecx_3 = edx[1]
    ecx_2 = ecx_3 + arg2
    eax_8 = adc.d(0, arg3, ecx_3 + arg2 u< ecx_3)
else
    if (arg4 == 1)
        int32_t eax_10 = sub_749feb(*arg1, arg2, arg3, FILE_CURRENT)
        int32_t eax_11 = neg.d(eax_10)
        return sbb.d(eax_11, eax_11, eax_10 != 0)
    
    if (arg4 != 2)
        return 0xffffffff
    
    edx = arg1
    int32_t eax_4 = edx[2]
    
    if (eax_4 == 0)
        int32_t eax_5 = sub_749feb(*edx, arg2, arg3, FILE_END)
        int32_t eax_6 = neg.d(eax_5)
        return sbb.d(eax_6, eax_6, eax_5 != 0)
    
    int32_t ecx_1 = edx[1] + eax_4
    ecx_2 = ecx_1 - arg2
    eax_8 = sbb.d(0, arg3, ecx_1 u< arg2)

int32_t eax_13 = sub_749feb(*edx, ecx_2, eax_8, FILE_BEGIN)
int32_t eax_14 = neg.d(eax_13)
return sbb.d(eax_14, eax_14, eax_13 != 0)
