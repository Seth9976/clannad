// 函数: sub_40f482
// 地址: 0x40f482
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0
int32_t var_10 = 0
int32_t var_14 = 0
int32_t var_18 = 0
int32_t result_1 = sub_40b67c(arg1, &var_18, 0)
int32_t result = result_1

if (result_1 s>= 0)
    int32_t result_2 = sub_40b67c(arg2, &var_14, 0x10)
    result = result_2
    
    if (result_2 s>= 0)
        int32_t ecx_2 = *(arg1 + 0x264) * 6
        int32_t edi
        int32_t var_24_1 = edi
        int32_t esi_2
        int32_t edi_2
        edi_2, esi_2 = __builtin_memcpy(var_18, var_14, ecx_2 u>> 2 << 2)
        void* eax_2 = arg2
        __builtin_memcpy(edi_2, esi_2, ecx_2 & 3)
        
        if ((*(arg1 + 0x218) & 1) != 0 && (*(eax_2 + 0x218) & 1) != 0)
            int32_t ecx_8 = *(arg1 + 0x264) * 6
            int32_t esi_4
            int32_t edi_4
            edi_4, esi_4 = __builtin_memcpy(*(arg1 + 0x250), *(eax_2 + 0x250), ecx_8 u>> 2 << 2)
            __builtin_memcpy(edi_4, esi_4, ecx_8 & 3)
        
        if ((*(arg1 + 0x218) & 4) != 0 && (*(eax_2 + 0x218) & 4) != 0)
            int32_t ecx_13 = *(arg1 + 0x264) << 2
            int32_t esi_6
            int32_t edi_6
            edi_6, esi_6 = __builtin_memcpy(*(arg1 + 0x254), *(eax_2 + 0x254), ecx_13 u>> 2 << 2)
            __builtin_memcpy(edi_6, esi_6, ecx_13 & 3)
        
        if ((*(arg1 + 0x218) & 8) != 0 && (*(eax_2 + 0x218) & 8) != 0)
            int32_t ecx_18 = *(arg1 + 0x264) << 1
            int32_t esi_8
            int32_t edi_8
            edi_8, esi_8 = __builtin_memcpy(*(arg1 + 0x258), *(eax_2 + 0x258), ecx_18 u>> 2 << 2)
            __builtin_memcpy(edi_8, esi_8, ecx_18 & 3)
        
        if ((*(eax_2 + 0x218) & 0x10) == 0)
        label_40f61f:
            int32_t eax_9 = *(arg1 + 0x23c)
            
            if (eax_9 u> 0)
                if ((*(arg1 + 0x218) & 2) != 0 && (*(arg2 + 0x218) & 2) != 0)
                    __builtin_memcpy(*(arg1 + 0x244), *(arg2 + 0x244), eax_9 << 1)
                
                if ((*(arg1 + 0x218) & 0x20) == 0)
                    int32_t result_3 = sub_40bed2(arg2, &var_10, 0x10)
                    result = result_3
                    
                    if (result_3 s>= 0)
                        int32_t result_4 = sub_40bed2(arg1, &var_c, 0)
                        result = result_4
                        
                        if (result_4 s>= 0)
                            int32_t ecx_34 = *(arg1 + 0x238) * *(arg1 + 0x23c)
                            int32_t esi_13
                            int32_t edi_13
                            edi_13, esi_13 = __builtin_memcpy(var_c, var_10, ecx_34 u>> 2 << 2)
                            __builtin_memcpy(edi_13, esi_13, ecx_34 & 3)
        else
            if ((*(arg1 + 0x218) & 0x10) != 0 && *(arg1 + 0x260) == *(eax_2 + 0x260))
                goto label_40f5f9
            
            j__free(*(arg1 + 0x25c))
            int32_t eax_4 = *(arg2 + 0x260)
            *(arg1 + 0x260) = eax_4
            int32_t eax_7 = sub_745f3f(eax_4 * 0x14)
            *(arg1 + 0x25c) = eax_7
            
            if (eax_7 != 0)
                *(arg1 + 0x218) |= 0x10
                eax_2 = arg2
            label_40f5f9:
                int32_t ecx_26 = *(arg1 + 0x260) * 0x14
                int32_t esi_10
                int32_t edi_10
                edi_10, esi_10 =
                    __builtin_memcpy(*(arg1 + 0x25c), *(eax_2 + 0x25c), ecx_26 u>> 2 << 2)
                __builtin_memcpy(edi_10, esi_10, ecx_26 & 3)
                goto label_40f61f
            
            result = 0x8007000e

if (var_c != 0)
    int32_t* eax_11 = *(arg1 + 0x234)
    (*(*eax_11 + 0x30))(eax_11)

if (var_10 != 0)
    int32_t* eax_13 = *(arg2 + 0x234)
    (*(*eax_13 + 0x30))(eax_13)

if (var_14 != 0)
    int32_t* eax_15 = *(arg2 + 0x248)
    (*(*eax_15 + 0x30))(eax_15)

if (var_18 != 0)
    int32_t* eax_16 = *(arg1 + 0x248)
    (*(*eax_16 + 0x30))(eax_16)

if (result s< 0)
    sub_40d0cf(arg1)

return result
