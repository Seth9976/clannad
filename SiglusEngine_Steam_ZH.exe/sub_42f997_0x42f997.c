// 函数: sub_42f997
// 地址: 0x42f997
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
int32_t edi
int32_t var_14 = edi
int32_t* edi_1 = arg3
int32_t ecx = *edi_1
int32_t* eax_1 = arg2 + ecx
int32_t ebx = eax_1[4]
int32_t edx = eax_1[1]

if (ebx == 0)
    ebx += 1

if (edx s>= 0)
    if (edx s<= 3)
        int32_t eax_9 = *eax_1
        int32_t edx_2
        
        if (eax_9 == 1 || eax_9 == 2 || eax_9 == 3)
            edx_2 = 4
        else
            edx_2 = 0
            ebx = 0
        
        int32_t eax_14 = eax_1[6] * eax_1[5]
        *edi_1 = ecx + 0x1c
        *arg4 = eax_14 * ebx
        return eax_14 * edx_2 * ebx
    
    if (edx == 4)
        int32_t eax_8 = *eax_1
        int32_t* eax_7
        
        if (eax_8 s< 0xa || (eax_8 s> 0xe && eax_8 != &data_f30000))
            eax_7 = 4
        else
            eax_7 = nullptr
        
        *edi_1 = ecx + 0x14
        *arg4 = ebx
        return eax_7 * ebx
    
    if (edx == 5)
        int32_t* eax_2 = eax_1[5]
        int32_t* esi_1 = arg4
        arg4 = nullptr
        *edi_1 = ecx + 0x18
        *esi_1 = 0
        
        if (eax_2 != 0)
            arg3 = eax_2
            int32_t* i
            
            do
                arg4 += sub_42f997(arg2, edi_1, &var_8)
                *esi_1 += var_8
                i = arg3
                arg3 -= 1
            while (i != 1)
        
        *esi_1 *= ebx
        return arg4 * ebx

return 0
