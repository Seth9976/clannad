// 函数: sub_443af4
// 地址: 0x443af4
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t edi
int32_t var_10 = edi
int32_t* edi_1 = arg2
int32_t ecx_1 = *edi_1
int32_t* eax_1 = arg1 + ecx_1
int32_t ebx = eax_1[4]
int32_t edx = eax_1[1]

if (ebx == 0)
    ebx += 1

if (edx s>= 0)
    if (edx s<= 1)
        int32_t eax_15 = *eax_1
        int32_t eax_19
        int32_t edx_7
        
        if (eax_15 == 1 || eax_15 == 2 || eax_15 == 3)
            eax_19 = 4
            edx_7 = 4
        else
            eax_19 = 0
            edx_7 = 0
        
        *edi_1 = ecx_1 + 0x1c
        *arg3 += (edx_7 * ebx) << 2
        return (eax_19 * ebx) << 2
    
    if (edx s<= 3)
        int32_t eax_9 = *eax_1
        int32_t eax_13
        int32_t edx_4
        
        if (eax_9 == 1 || eax_9 == 2 || eax_9 == 3)
            eax_13 = 4
            edx_4 = 4
        else
            eax_13 = 0
            edx_4 = 0
        
        *edi_1 = ecx_1 + 0x1c
        *arg3 += (edx_4 * ebx) << 4
        return (eax_13 * ebx) << 4
    
    if (edx == 4)
        int32_t eax_7 = *eax_1
        int32_t eax_8
        
        if (eax_7 s< 0xa || eax_7 s> 0xe)
            eax_8 = 4
        else
            eax_8 = 0
        
        *edi_1 = ecx_1 + 0x14
        *arg3 += ebx << 2
        return eax_8 * ebx
    
    if (edx == 5)
        int32_t* eax_2 = eax_1[5]
        int32_t* esi_1 = arg3
        arg3 = nullptr
        *edi_1 = ecx_1 + 0x18
        int32_t ecx_3 = *esi_1
        
        if (eax_2 != 0)
            arg2 = eax_2
            int32_t* i
            
            do
                arg3 += sub_443af4(arg1, edi_1, esi_1)
                i = arg2
                arg2 -= 1
            while (i != 1)
        
        int32_t eax_4 = *esi_1
        *esi_1 = (eax_4 - ecx_3) * (ebx - 1) + eax_4
        return arg3 * ebx

return 0
