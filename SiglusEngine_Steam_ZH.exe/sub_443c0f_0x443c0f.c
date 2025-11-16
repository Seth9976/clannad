// 函数: sub_443c0f
// 地址: 0x443c0f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int32_t* esi = arg2
void* edx = *esi
int32_t var_8_1 = ecx
int32_t* ecx_1 = edx + arg1
int32_t ebx = ecx_1[4]
int32_t eax_1 = ecx_1[1]
int32_t edi
int32_t var_18 = edi

if (ebx == 0)
    ebx += 1

if (eax_1 s>= 0)
    if (eax_1 s<= 3)
        int32_t eax_6 = ecx_1[5]
        int32_t eax_7 = ecx_1[6]
        int32_t ecx_10 = *ecx_1
        int32_t ecx_14
        int32_t edi_2
        
        if (ecx_10 == 1 || ecx_10 == 2 || ecx_10 == 3)
            edi_2 = 4
            ecx_14 = 4
        else
            edi_2 = 0
            ecx_14 = 0
        
        *esi = edx + 0x1c
        *arg3 += ecx_14 * eax_7 * eax_6 * ebx
        return eax_7 * eax_6 * edi_2 * ebx
    
    if (eax_1 == 4)
        int32_t ecx_8 = *ecx_1
        int32_t* eax_5
        
        if (ecx_8 s< 0xa || ecx_8 s> 0xe)
            eax_5 = 4
        else
            eax_5 = nullptr
        
        *esi = edx + 0x14
        *arg3 += ebx << 2
        return eax_5 * ebx
    
    if (eax_1 == 5)
        int32_t* ecx_2 = ecx_1[5]
        int32_t* edi_1 = arg3
        arg3 = nullptr
        *esi = edx + 0x18
        int32_t eax_2 = *edi_1
        
        if (ecx_2 != 0)
            arg2 = ecx_2
            int32_t* i
            
            do
                arg3 += sub_443c0f(arg1, esi, edi_1)
                i = arg2
                arg2 -= 1
            while (i != 1)
        
        int32_t eax_4 = *edi_1
        *edi_1 = (eax_4 - eax_2) * (ebx - 1) + eax_4
        return arg3 * ebx

return 0
