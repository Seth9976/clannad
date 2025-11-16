// 函数: sub_536340
// 地址: 0x536340
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = arg2

if (*(arg1 + 0x10) u< edi)
    edi = *(arg1 + 0x10)

if (*(arg1 + 0x14) u>= 8)
    arg1 = *arg1

int32_t esi = arg4

if (edi u< arg4)
    esi = edi

int32_t result

if (esi == 0)
label_536381:
    result = 0
else
    int16_t* edx_1 = arg3
    
    while (*arg1 == *edx_1)
        arg1 += 2
        edx_1 = &edx_1[1]
        int32_t temp2_1 = esi
        esi -= 1
        
        if (temp2_1 == 1)
            goto label_536381
    
    uint32_t eax_2 = zx.d(*arg1)
    result = (sbb.d(eax_2, eax_2, eax_2.w u< *edx_1) & 0xfffffffe) + 1

if (result == 0)
    if (edi u< arg4)
        return 0xffffffff
    
    result.b = edi != arg4

return result
