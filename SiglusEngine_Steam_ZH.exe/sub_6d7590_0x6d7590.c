// 函数: sub_6d7590
// 地址: 0x6d7590
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* edi = *(arg3 + 0x128)
void* result = nullptr
void* i_1 = arg2
void* i_3 = nullptr
char* edx_1 = *(arg3 + 0x124) + 1
*edi = 3
void* eax = &edi[1]
char* edi_2 = *(arg3 + 0x120) + 1
char* var_10 = edx_1

if (i_1 != 0)
    void* i_2 = i_1
    void* ebx = eax
    void* i
    
    do
        eax.b = *edi_2
        edi_2 = &edi_2[1]
        void* ecx
        ecx.b = *edx_1
        edx_1 = &edx_1[1]
        eax.b u>>= 1
        ecx.b -= eax.b
        *ebx = ecx.b
        ebx += 1
        ecx = zx.d(ecx.b)
        
        if (ecx s>= 0x80)
            ecx = 0x100 - ecx
        
        result += ecx
        i = i_1
        i_1 -= 1
    while (i != 1)
    i_3 = i_2
    eax = ebx

if (i_3 u< arg4)
    int32_t edx_2 = edx_1 - edi_2
    void* ecx_2 = var_10 - edi_2
    int32_t eax_1 = eax - edi_2
    void* var_10_1 = ecx_2
    
    do
        uint32_t ecx_3 = zx.d(*(ecx_2 + edi_2))
        edi_2 = &edi_2[1]
        int32_t eax_4
        int32_t edx_3
        edx_3:eax_4 = sx.q(zx.d(edi_2[0xffffffff]) + ecx_3)
        int32_t ecx_4
        ecx_4.b = edi_2[edx_2 - 1]
        ecx_4.b -= ((eax_4 - edx_3) s>> 1).b
        edi_2[eax_1 - 1] = ecx_4.b
        uint32_t ecx_5 = zx.d(ecx_4.b)
        
        if (ecx_5 s>= 0x80)
            ecx_5 = 0x100 - ecx_5
        
        result += ecx_5
        
        if (result u> arg5)
            break
        
        ecx_2 = var_10_1
        i_3 += 1
    while (i_3 u< arg4)

return result
