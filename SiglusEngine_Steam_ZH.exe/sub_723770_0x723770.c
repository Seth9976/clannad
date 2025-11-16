// 函数: sub_723770
// 地址: 0x723770
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i_7 = arg1[0xb]
int32_t i_8 = i_7
void* eax_3

do
    eax_3 = arg1[0xb] - 0x106 + i_7
    uint32_t edx_3 = arg1[0xf] - arg1[0x1d] - arg1[0x1b]
    
    if (arg1[0x1b] u>= eax_3)
        void* ecx = arg1[0xe]
        int32_t i_6 = i_7
        char* edx_4 = ecx + i_7
        
        if (i_7 != 0)
            int32_t i
            
            do
                eax_3.b = *edx_4
                ecx += 1
                *(ecx - 1) = eax_3.b
                edx_4 = &edx_4[1]
                i = i_6
                i_6 -= 1
            while (i != 1)
        
        int32_t i_4 = arg1[0x13]
        int32_t eax_4 = arg1[0x11]
        arg1[0x1c] -= i_7
        arg1[0x1b] -= i_7
        arg1[0x17] -= i_7
        int16_t* ecx_1 = eax_4 + (i_4 << 1)
        int32_t i_1
        
        do
            uint32_t eax_5 = zx.d(ecx_1[-1])
            ecx_1 = &ecx_1[-1]
            int16_t eax_6
            
            if (eax_5 u< i_7)
                eax_6 = 0
            else
                eax_6 = eax_5.w - i_7.w
            
            *ecx_1 = eax_6
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
        int32_t i_5 = i_7
        int16_t* ecx_2 = arg1[0x10] + (i_7 << 1)
        int32_t i_2
        
        do
            uint32_t eax_8 = zx.d(ecx_2[-1])
            ecx_2 = &ecx_2[-1]
            
            if (eax_8 u< i_7)
                eax_3 = nullptr
            else
                eax_3 = eax_8 - i_7
            
            *ecx_2 = eax_3.w
            i_2 = i_5
            i_5 -= 1
        while (i_2 != 1)
        edx_3 += i_7
    
    int32_t* ecx_3 = *arg1
    
    if (ecx_3[1] == 0)
        break
    
    uint32_t eax_9 = sub_7234a0(eax_3.b, arg1[0x1d] + arg1[0x1b] + arg1[0xe], ecx_3, edx_3)
    arg1[0x1d] += eax_9
    int32_t edi_1 = arg1[0x5ad]
    eax_3 = arg1[0x1d] + edi_1
    
    if (eax_3 u>= 3)
        void* eax_11 = arg1[0xe]
        int32_t ecx_5 = arg1[0x1b] - edi_1
        uint32_t edx_9 = zx.d(*(eax_11 + ecx_5))
        arg1[0x12] = edx_9
        eax_3 = (zx.d(*(eax_11 + ecx_5 + 1)) ^ edx_9 << (arg1[0x16]).b) & arg1[0x15]
        arg1[0x12] = eax_3
        
        if (edi_1 != 0)
            int32_t ebx = ecx_5
            int32_t i_3
            
            do
                int32_t edx_12 = ebx & arg1[0xd]
                int32_t ecx_8 = arg1[0x10]
                int32_t edi_4 =
                    (zx.d(*(arg1[0xe] + ebx + 2)) ^ arg1[0x12] << (arg1[0x16]).b) & arg1[0x15]
                int32_t eax_17 = arg1[0x11]
                arg1[0x12] = edi_4
                eax_17.w = *(eax_17 + (edi_4 << 1))
                *(ecx_8 + (edx_12 << 1)) = eax_17.w
                *(arg1[0x11] + (arg1[0x12] << 1)) = ebx.w
                ebx += 1
                arg1[0x5ad] -= 1
                i_3 = arg1[0x5ad]
                eax_3 = arg1[0x1d] + i_3
                
                if (eax_3 u< 3)
                    break
            while (i_3 != 0)
            i_7 = i_8
    
    if (arg1[0x1d] u>= 0x106)
        break
    
    eax_3 = *arg1
while (*(eax_3 + 4) != 0)

int32_t edx_13 = arg1[0x5b0]
int32_t ecx_10 = arg1[0xf]

if (edx_13 u< ecx_10)
    void* ebx_2 = arg1[0x1d] + arg1[0x1b]
    
    if (edx_13 u< ebx_2)
        void* ecx_11 = ecx_10 - ebx_2
        
        if (ecx_11 u> 0x102)
            ecx_11 = 0x102
        
        if (ecx_11 != 0)
            __builtin_memset(__builtin_memset(arg1[0xe] + ebx_2, 0, ecx_11 u>> 2 << 2), 0, 
                ecx_11 & 3)
        
        void* eax_20 = ecx_11 + ebx_2
        arg1[0x5b0] = eax_20
        return eax_20
    
    eax_3 = ebx_2 + 0x102
    
    if (edx_13 u< eax_3)
        void* ebx_4 = ebx_2 - edx_13 + 0x102
        void* ecx_15 = ecx_10 - edx_13
        
        if (ebx_4 u> ecx_15)
            ebx_4 = ecx_15
        
        if (ebx_4 != 0)
            eax_3 = nullptr
            __builtin_memset(__builtin_memset(arg1[0xe] + edx_13, 0, ebx_4 u>> 2 << 2), 0, 
                ebx_4 & 3)
        
        arg1[0x5b0] += ebx_4

return eax_3
