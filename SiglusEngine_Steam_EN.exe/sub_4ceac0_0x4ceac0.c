// 函数: sub_4ceac0
// 地址: 0x4ceac0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = sub_4d0f10(arg3, "PDT10")

if (result == 0)
    int32_t eax = *(arg3 + 0x10)
    int32_t ecx = *(arg3 + 0xc)
    result = ((eax + 1) * ecx) << 2
    
    if (result != 0)
        BOOL ecx_1 = *arg2
        BOOL var_20_1 = ecx_1
        BOOL var_1c
        BOOL var_14
        BOOL eax_4
        
        if (ecx_1 != 0)
            eax_4 = *arg4
        else
            var_1c = ecx_1
            var_14 = ecx_1
            sub_4d6960(result, &var_14, &var_1c, result, "PDT_UNPACK10_DATA")
            var_20_1 = var_1c
            eax_4 = var_14
        
        var_1c = eax_4
        var_14 = eax_4
        void* eax_6 = *(arg3 + 0x1c)
        
        if (eax_6 == 0)
            eax_6 = *(arg3 + 8)
        
        void* i = &arg3[0x20]
        BOOL edi_1 = var_14
        int16_t edx_1 = 0
        
        while (i s< eax_6 + arg3)
            edx_1:1.b = edx_1:1.b
            
            if (edx_1:1.b != 0)
                if ((edx_1.b & 0x80) == 0)
                    int32_t eax_9
                    eax_9.w = *i
                    edi_1 = __builtin_memcpy(edi_1, edi_1 - (((eax_9 u>> 4) + 1) << 2), 
                        ((eax_9 & 0xf) + 1) << 2)
                    i += 2
                else
                    *edi_1 = *i
                    char* edi_2 = edi_1 + 2
                    void* esi_1 = i + 2
                    *edi_2 = *esi_1
                    i = esi_1 + 1
                    edi_1 = &edi_2[2]
                
                edx_1.b <<= 1
                edx_1:1.b -= 1
            else
                edx_1.b = *i
                i += 1
                edx_1:1.b = 8
        
        BOOL ebx_2 = var_1c
        *arg7 = 0
        int32_t ecx_9
        int32_t edx_3
        
        if (*(arg3 + 0x1c) == 0)
            edx_3 = eax
            char* eax_23 = ebx_2 + 3
            int32_t i_4 = edx_3 * ecx
            
            if (i_4 s> 0)
                int32_t i_1
                
                do
                    *eax_23 = 0xff
                    eax_23 = &eax_23[4]
                    i_1 = i_4
                    i_4 -= 1
                while (i_1 != 1)
            
            ecx_9 = ecx
        else
            *arg7 = 1
            var_14 = ebx_2 + 3
            void* eax_18 = *(arg3 + 8) + arg3
            void* esi_5 = *(arg3 + 0x1c) + arg3
            BOOL edi_4 = var_14
            int16_t edx_2 = 0
            
            while (esi_5 s< eax_18)
                edx_2:1.b = edx_2:1.b
                
                if (edx_2:1.b != 0)
                    if ((edx_2.b & 0x80) == 0)
                        int32_t eax_19
                        eax_19.w = *esi_5
                        uint32_t ecx_8 = zx.d(eax_19.b)
                        eax_19.b = eax_19:1.b
                        eax_19:1.b = 0
                        int32_t i_2 = ecx_8 + 2
                        int32_t esi_8 = edi_4 - ((eax_19 + 1) << 2)
                        
                        do
                            *edi_4 = *esi_8
                            esi_8 += 4
                            edi_4 += 4
                            i_2 -= 1
                        while (i_2 != 0)
                        
                        esi_5 += 2
                    else
                        *edi_4 = *esi_5
                        esi_5 += 1
                        edi_4 += 4
                    
                    edx_2.b <<= 1
                    edx_2:1.b -= 1
                else
                    edx_2.b = *esi_5
                    esi_5 += 1
                    edx_2:1.b = 8
            
            edx_3 = eax
            ecx_9 = ecx
            int32_t i_5 = edx_3 * ecx_9
            
            if (i_5 s> 0)
                void* eax_22 = ebx_2 + 1
                int32_t i_3
                
                do
                    uint32_t edi_7 = zx.d(*(eax_22 + 2))
                    
                    if (edi_7 == 0)
                        *(eax_22 - 1) = 0
                        *(eax_22 + 1) = 0
                    else
                        uint32_t edx_5 = zx.d(*eax_22)
                        *(eax_22 - 1) =
                            *(*(data_1cd4348 + (zx.d(*(eax_22 - 1)) << 2)) + (edi_7 << 2))
                        uint32_t edx_6 = zx.d(*(eax_22 + 1))
                        *eax_22 = *(*(data_1cd4348 + (edx_5 << 2)) + (edi_7 << 2))
                        *(eax_22 + 1) = *(*(data_1cd4348 + (edx_6 << 2)) + (edi_7 << 2))
                    
                    eax_22 += 4
                    i_3 = i_5
                    i_5 -= 1
                while (i_3 != 1)
                edx_3 = eax
                ecx_9 = ecx
        
        if (*arg2 == 0)
            *arg2 = var_20_1
            *arg4 = ebx_2
        
        *arg5 = ecx_9
        result = arg6
        *result = edx_3

return result
