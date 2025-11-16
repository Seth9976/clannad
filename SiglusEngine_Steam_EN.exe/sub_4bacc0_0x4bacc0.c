// 函数: sub_4bacc0
// 地址: 0x4bacc0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edi_1 = data_131310c - data_20740e4

if (edi_1 u> 0xfa)
    edi_1 = 0xfa

if (data_12dc610 != 0)
    if (data_703840 != 0)
        edi_1 = 0
else if (data_1392700 != 0 || data_703840 != 0)
    edi_1 = 0

for (void* i = &data_2074108; i s< 0x2074468; i += 0x90)
    *i += edi_1
    
    if (*i u>= *(i - 4))
        sub_4ba9a0(i - 0x20)
    
    *(i + 0x1c) += edi_1
    int32_t eax_3
    
    if (*(i + 0x1c) u>= *(i + 0x18))
        eax_3 = sub_4baae0(i - 0x20)
    else
        eax_3 = 0
    
    int32_t ecx_3 = *(i + 0x14)
    
    if (ecx_3 s> 0)
        *(i - 0x18) = 0
    else if (ecx_3 s< 0)
        *(i - 0x18) = 1
    
    if (eax_3 == 0)
        int32_t ecx_4 = *(i + 0xc)
        uint32_t ebx_2 = *(i + 0x10) + edi_1
        *(i + 0x10) = ebx_2
        
        if (ecx_4 != 0)
            int32_t edx_1 = 0
            uint32_t temp1_1 = modu.dp.d(edx_1:ebx_2, ecx_4)
            ebx_2 = divu.dp.d(edx_1:ebx_2, ecx_4)
            *(i + 0x10) = temp1_1
        else
            *(i + 0x10) = ecx_4
        
        int32_t eax_6 = *(i - 8)
        int32_t edx_3
        
        if (eax_6 s> 0)
            edx_3 = *(i - 0xc)
        else if (eax_6 s>= 0)
            edx_3 = *(i - 0x10)
        else
            edx_3 = *(i - 0x14)
        
        int32_t ecx_5 = edx_3
        
        if (*(i - 0x18) != 0)
            ecx_5 = neg.d(ecx_5)
        
        int32_t eax_7 = *(i - 0x20)
        
        if (eax_7 s> edx_3)
            int32_t eax_8 = eax_7 - ebx_2
            *(i - 0x20) = eax_8
            
            if (eax_8 s< edx_3)
                *(i - 0x20) = edx_3
        else if (eax_7 s< edx_3)
            int32_t eax_9 = eax_7 + ebx_2
            
            if (eax_9 s> edx_3)
                eax_9 = edx_3
            
            *(i - 0x20) = eax_9
        
        int32_t eax_10 = *(i - 0x1c)
        
        if (eax_10 s> ecx_5)
            int32_t eax_11 = eax_10 - ebx_2
            *(i - 0x1c) = eax_11
            
            if (eax_11 s< ecx_5)
                *(i - 0x1c) = ecx_5
        else if (eax_10 s< ecx_5)
            int32_t eax_12 = eax_10 + ebx_2
            
            if (eax_12 s> ecx_5)
                eax_12 = ecx_5
            
            *(i - 0x1c) = eax_12
    
    sub_4babf0(i + 0x28, edi_1)

int32_t result = data_131310c
data_20740e4 = result
return result
