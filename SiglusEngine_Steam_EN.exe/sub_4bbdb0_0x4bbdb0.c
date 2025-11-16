// 函数: sub_4bbdb0
// 地址: 0x4bbdb0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

*arg6 = 0

if (arg3 != 0)
    int32_t result = *(arg3 + 4)
    
    if (result != 0)
        void* edx
        
        if (*arg4 != 0)
            edx = *arg5
        else
            HGLOBAL hMem = GlobalAlloc(GHND, result + 0x40)
            edx = GlobalLock(hMem)
            *arg4 = hMem
            *arg5 = edx
        
        void* ecx_2 = edx + result
        int32_t var_10 = 0
        void* esi_2 = arg3 + 8
        void* edi_1 = edx
        int32_t result_1 = result
    label_4bbe41:
        
        if (edi_1 s>= ecx_2)
        label_4bbe99:
            
            if (edi_1 != ecx_2)
            label_4bbea1:
                var_10 = 1
        else
            if (esi_2 s< arg2 + arg3)
                int16_t edx_1
                edx_1.b = *esi_2
                esi_2 += 1
                edx_1:1.b = 8
                
                while (edi_1 s< ecx_2)
                    if ((edx_1.b & 1) == 0)
                        int32_t eax_10
                        eax_10.w = *esi_2
                        void* esi_6 = edi_1 - (eax_10 u>> 4 << 2)
                        
                        if (esi_6 s< edx)
                            goto label_4bbea1_1
                        
                        int32_t ecx_6 = ((eax_10 & 0xf) + 1) << 2
                        
                        if (result_1 s< ecx_6)
                            goto label_4bbea1_1
                        
                        result_1 -= ecx_6
                        edi_1 = __builtin_memcpy(edi_1, esi_6, ecx_6 u>> 2 << 2)
                        esi_2 += 2
                    else
                        result_1 -= 4
                        *edi_1 = *esi_2
                        char* edi_2 = edi_1 + 2
                        void* esi_3 = esi_2 + 2
                        *edi_2 = *esi_3
                        void* edi_3 = &edi_2[1]
                        esi_2 = esi_3 + 1
                        *edi_3 = 0xff
                        edi_1 = edi_3 + 1
                    
                    edx_1.b u>>= 1
                    char temp0_1 = edx_1:1.b
                    edx_1:1.b -= 1
                    
                    if (temp0_1 == 1)
                        goto label_4bbe41
                
                goto label_4bbe99
            
        label_4bbea1_1:
            var_10 = 1
        
        *arg6 = var_10
        return result

return 0
