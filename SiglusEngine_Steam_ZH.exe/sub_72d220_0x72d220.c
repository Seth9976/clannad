// 函数: sub_72d220
// 地址: 0x72d220
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg4
int32_t ecx = arg3 + eax
arg4 = ecx

if (ecx u> arg2[1] || eax u> arg2[3] || *arg2 == 0)
    *(*arg1 + 0x14) = 0x17
    eax = (**arg1)(arg1)
    ecx = arg4

int32_t edx = arg2[6]

if (arg3 u>= edx)
    eax = arg2[4] + edx

if (arg3 u< edx || ecx u> eax)
    if (*(arg2 + 0x22) == 0)
        *(*arg1 + 0x14) = 0x47
        eax = (**arg1)(arg1)
    
    if (*(arg2 + 0x21) != 0)
        eax = sub_72d020(eax, arg2, arg1, 1)
        *(arg2 + 0x21) = 0
    
    if (arg3 u<= arg2[6])
        eax = arg4 - arg2[4]
        
        if (arg4 - arg2[4] s< 0)
            eax = 0
        
        arg2[6] = eax
    else
        arg2[6] = arg3
    
    sub_72d020(eax, arg2, arg1, 0)
    ecx = arg4

int32_t edi_1 = arg2[7]

if (edi_1 u>= ecx)
label_72d336:
    
    if (arg5 != 0)
        *(arg2 + 0x21) = 1
else
    int32_t eax_9 = arg3
    
    if (edi_1 u< eax_9)
        if (arg5 != 0)
            *(*arg1 + 0x14) = 0x17
            (**arg1)(arg1)
            ecx = arg4
            eax_9 = arg3
        
        edi_1 = eax_9
    
    eax_9.b = arg5
    
    if (eax_9.b != 0)
        arg2[7] = ecx
    
    if (arg2[8].b != 0)
        int32_t ecx_3 = ecx - arg2[6]
        int32_t i = edi_1 - arg2[6]
        int32_t ebx_2 = arg2[2] << 7
        
        for (; i u< ecx_3; i += 1)
            _memset(*(*arg2 + (i << 2)), 0, ebx_2)
        
        goto label_72d336
    
    if (eax_9.b == 0)
        *(*arg1 + 0x14) = 0x17
        (**arg1)(arg1)
        return *arg2 + ((arg3 - arg2[6]) << 2)
    
    *(arg2 + 0x21) = 1

return *arg2 + ((arg3 - arg2[6]) << 2)
