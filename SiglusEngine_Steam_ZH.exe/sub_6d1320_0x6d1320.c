// 函数: sub_6d1320
// 地址: 0x6d1320
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result
result.b = *(arg1 + 9)

if (result.b u< 8)
    int32_t i_6 = *arg1
    uint32_t eax = zx.d(result.b)
    int32_t i_7 = i_6
    int32_t eax_3
    
    if (eax == 1)
        void* esi_9 = ((i_6 - 1) u>> 3) + arg2
        void* edi_6 = arg2 - 1 + i_6
        int32_t edx_4 = 7 - ((i_6 - 1) & 7)
        
        if (i_6 != 0)
            int32_t i_5 = i_6
            int32_t i
            
            do
                eax_3.b = *esi_9
                i_6.b = edx_4.b
                eax_3.b u>>= i_6.b
                eax_3.b &= 1
                *edi_6 = eax_3.b
                
                if (edx_4 != 7)
                    edx_4 += 1
                else
                    edx_4 = 0
                    esi_9 -= 1
                
                edi_6 -= 1
                i = i_5
                i_5 -= 1
            while (i != 1)
    else if (eax == 2)
        void* esi_6 = ((i_6 - 1) u>> 2) + arg2
        void* edi_4 = arg2 - 1 + i_6
        int32_t edx_3 = (3 - ((i_6 - 1) & 3)) * 2
        
        if (i_6 != 0)
            int32_t i_4 = i_6
            int32_t i_1
            
            do
                eax_3.b = *esi_6
                i_6.b = edx_3.b
                eax_3.b u>>= i_6.b
                eax_3.b &= 3
                *edi_4 = eax_3.b
                
                if (edx_3 != 6)
                    edx_3 += 2
                else
                    edx_3 = 0
                    esi_6 -= 1
                
                edi_4 -= 1
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
    else if (eax == 4)
        char* esi_3 = ((i_6 - 1) u>> 1) + arg2
        char* edi_2 = arg2 - 1 + i_6
        int32_t edx_1 = (1 - ((i_6 - 1) & 1)) << 2
        
        if (i_6 != 0)
            int32_t i_3 = i_6
            int32_t i_2
            
            do
                eax_3.b = *esi_3
                i_6.b = edx_1.b
                eax_3.b u>>= i_6.b
                eax_3.b &= 0xf
                *edi_2 = eax_3.b
                
                if (edx_1 != 4)
                    edx_1 = 4
                else
                    edx_1 = 0
                    esi_3 -= 1
                
                edi_2 -= 1
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
    
    eax_3.b = *(arg1 + 0xa)
    eax_3.b <<= 3
    *(arg1 + 0xb) = eax_3.b
    result = zx.d(*(arg1 + 0xa)) * i_7
    *(arg1 + 9) = 8
    arg1[1] = result

return result
