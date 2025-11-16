// 函数: sub_458e55
// 地址: 0x458e55
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg3 u<= 1)
    return 

uint32_t i = arg3 u>> 1
uint32_t esi_1 = arg2
int32_t edi
int32_t var_24_1 = edi

if (i != 0)
    uint32_t j_1 = i * 2 + 1
    
    do
        i -= 1
        int32_t eax_2 = *(esi_1 + (i << 2))
        uint32_t j = j_1 - 2
        j_1 = j
        arg2 = i
        
        for (; j u< arg3; j = j * 2 + 1)
            int32_t ecx_1 = *(esi_1 + (j << 2))
            int32_t var_c_1 = ecx_1
            
            if (j + 1 u< arg3)
                int32_t eax_4 = *(esi_1 + (j << 2) + 4)
                
                if (arg1(eax_4, ecx_1, arg4) s> 0)
                    j += 1
                    var_c_1 = eax_4
            
            if (arg1(var_c_1, eax_2, arg4) s<= 0)
                break
            
            uint32_t ecx_2 = arg2
            arg2 = j
            *(esi_1 + (ecx_2 << 2)) = *(esi_1 + (j << 2))
        
        *(esi_1 + (arg2 << 2)) = eax_2
    while (i u> 0)

while (true)
    int32_t temp1_1 = arg3
    arg3 -= 1
    
    if (temp1_1 == 1)
        break
    
    arg2 = 0
    int32_t eax_9 = esi_1 + (arg3 << 2)
    int32_t edx_1 = *eax_9
    uint32_t edi_3 = 1
    *eax_9 = *esi_1
    
    if (arg3 u> 1)
        do
            int32_t ebx_1 = *(esi_1 + (edi_3 << 2))
            
            if (edi_3 + 1 u< arg3)
                int32_t eax_11 = *(esi_1 + (edi_3 << 2) + 4)
                
                if (arg1(eax_11, ebx_1, arg4) s> 0)
                    edi_3 += 1
                    ebx_1 = eax_11
            
            if (arg1(ebx_1, edx_1, arg4) s<= 0)
                break
            
            uint32_t ecx_5 = arg2
            int32_t eax_14 = *(esi_1 + (edi_3 << 2))
            arg2 = edi_3
            edi_3 = edi_3 * 2 + 1
            *(esi_1 + (ecx_5 << 2)) = eax_14
        while (edi_3 u< arg3)
    
    *(esi_1 + (arg2 << 2)) = edx_1
