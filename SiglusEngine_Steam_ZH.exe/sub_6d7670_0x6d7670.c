// 函数: sub_6d7670
// 地址: 0x6d7670
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0
char* edi = *(arg3 + 0x128)
char* esi_1 = *(arg3 + 0x124) + 1
uint32_t i_1 = arg2
char* ecx_1 = *(arg3 + 0x120) + 1
*edi = 4
void* edx = &edi[1]
uint32_t i_2 = 0
char* edi_1 = ecx_1
char* var_c = esi_1

if (i_1 != 0)
    i_2 = i_1
    uint32_t i
    
    do
        uint32_t eax
        eax.b = *esi_1
        esi_1 = &esi_1[1]
        eax.b -= *edi_1
        edi_1 = &edi_1[1]
        *edx = eax.b
        edx += 1
        uint32_t ecx_3 = zx.d(eax.b)
        
        if (ecx_3 s>= 0x80)
            ecx_3 = 0x100 - ecx_3
        
        result += ecx_3
        i = i_1
        i_1 -= 1
    while (i != 1)

if (i_2 u< arg4)
    char* eax_2 = var_c
    void* edi_2 = edi_1 - eax_2
    void* ecx_4 = ecx_1 - eax_2
    void* var_2c_1 = edi_2
    void* edx_1 = edx - esi_1
    bool cond:0_1
    
    do
        uint32_t ecx_5 = zx.d(*(edi_2 + eax_2))
        var_c = &var_c[1]
        uint32_t edx_3 = zx.d(*(ecx_4 + eax_2))
        uint32_t eax_3 = zx.d(*eax_2)
        uint32_t edi_4 = ecx_5 - edx_3
        char var_10 = eax_3.b
        uint32_t ecx_7 = eax_3 - edx_3
        int32_t eax_5
        int32_t edx_4
        edx_4:eax_5 = sx.q(edi_4)
        uint32_t eax_7 = (eax_5 ^ edx_4) - edx_4
        int32_t eax_9
        int32_t edx_5
        edx_5:eax_9 = sx.q(ecx_7)
        int32_t eax_11 = (eax_9 ^ edx_5) - edx_5
        int32_t eax_13
        int32_t edx_6
        edx_6:eax_13 = sx.q(ecx_7 + edi_4)
        int32_t ecx_10 = (eax_13 ^ edx_6) - edx_6
        uint32_t eax_14
        
        if (eax_7 s> eax_11 || eax_7 s> ecx_10)
            eax_14 = edx_3
            
            if (eax_11 s<= ecx_10)
                eax_14 = ecx_5
            
            var_10 = eax_14.b
        
        eax_14.b = *esi_1
        eax_14.b -= var_10
        *(edx_1 + esi_1) = eax_14.b
        esi_1 = &esi_1[1]
        uint32_t ecx_12 = zx.d(eax_14.b)
        
        if (ecx_12 s>= 0x80)
            ecx_12 = 0x100 - ecx_12
        
        result += ecx_12
        
        if (result u> arg5)
            break
        
        edi_2 = var_2c_1
        cond:0_1 = i_2 + 1 u< arg4
        i_2 += 1
        eax_2 = var_c
    while (cond:0_1)

return result
