// 函数: sub_5b8bb0
// 地址: 0x5b8bb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax

if (arg4 == 0 || *(arg1 + 0xc0) == 0)
    eax.b = 0
    return eax

int32_t ecx = *(arg1 + 0xb0)
int32_t edx = 0

if (ecx s<= 0)
label_5b8bef:
    edx = 0xffffffff
else
    eax = *(arg1 + 0xb8)
    
    while (*eax != arg2)
        edx += 1
        eax = &eax[1]
        
        if (edx s>= ecx)
            goto label_5b8bef

int32_t esi_2 = *(arg1 + 0xb4)
int32_t ecx_1 = 0

if (esi_2 s<= 0)
label_5b8c14:
    ecx_1 = 0xffffffff
else
    eax = *(arg1 + 0xbc)
    
    while (*eax != arg3)
        ecx_1 += 1
        eax = &eax[2]
        
        if (ecx_1 s>= esi_2)
            goto label_5b8c14

if (edx == 0xffffffff || ecx_1 == 0xffffffff || (*(arg1 + 0xbc))[ecx_1 * 2 + 1] != 0x56)
    eax.b = 0
    return eax

*arg4 = *(*(arg1 + 0xc0) + ((esi_2 * edx + ecx_1) << 2))
int32_t eax_2
eax_2.b = 1
return eax_2
