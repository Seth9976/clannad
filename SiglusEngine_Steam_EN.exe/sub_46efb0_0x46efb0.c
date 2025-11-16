// 函数: sub_46efb0
// 地址: 0x46efb0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0
int32_t eax

if (sub_4d1be0(eax, arg2 + 0x30c, arg2 + 0x280, 0x8c) != 0)
    result = 1

int32_t ecx_1 = data_1320e8c
int32_t result_1 = result

if (ecx_1 != 0)
    result = *(arg2 + 0x10)
    
    if (result s>= 0 && result s< data_1320e90)
        void* eax_3 = result * 0xa8 + ecx_1
        int32_t eax_4 = *(arg2 + 0x280)
        int32_t eax_5 = *(arg2 + 0x284)
        int32_t eax_6 = *(arg2 + 0x288)
        int32_t eax_7 = *(arg2 + 0x2d0)
        int32_t result_2 = *(arg2 + 0x2d4)
        *(arg2 + 0x398) = 0
        
        if (*(arg2 + 0x2d8) != 0x3e8 || *(arg2 + 0x2dc) != 0x3e8 || *(arg2 + 0x2e0) != 0)
            int32_t eax_19 = *(arg2 + 0x234)
            *(arg2 + 0x280) = eax_19
            sub_425c70(eax_19, arg2 + 0x280, *(arg2 + 0x14), arg2 + 0x398)
            *(arg2 + 0x398) += 1
            *(arg2 + 0x280) = *(arg2 + 0x244)
            *(arg2 + 0x284) = *(eax_3 + 0x70) + eax_5
            *(arg2 + 0x288) = *(eax_3 + 0x74) + eax_6
            *(arg2 + 0x2d0) = eax_7 - *(eax_3 + 0x70)
            int32_t eax_28 = result_2 - *(eax_3 + 0x74)
            *(arg2 + 0x2d4) = eax_28
            sub_425c70(eax_28, arg2 + 0x280, *(arg2 + 0x18), arg2 + 0x398)
            *(arg2 + 0x398) += 1
            *(arg2 + 0x280) = *(arg2 + 0x25c)
            *(arg2 + 0x284) = *(eax_3 + 0x9c) + eax_5
            *(arg2 + 0x288) = *(eax_3 + 0xa0) + eax_6
            *(arg2 + 0x2d0) = eax_7 - *(eax_3 + 0x9c)
            int32_t eax_37 = result_2 - *(eax_3 + 0xa0)
            *(arg2 + 0x2d4) = eax_37
            sub_425c70(eax_37, arg2 + 0x280, *(arg2 + 0x1c), arg2 + 0x398)
        else
            int32_t eax_8 = *(arg2 + 0x234)
            *(arg2 + 0x280) = eax_8
            sub_425a70(eax_8, arg2 + 0x280, *(arg2 + 0x14), arg2 + 0x398)
            *(arg2 + 0x398) += 1
            *(arg2 + 0x280) = *(arg2 + 0x244)
            *(arg2 + 0x284) = *(eax_3 + 0x70) + eax_5
            int32_t eax_13 = *(eax_3 + 0x74) + eax_6
            *(arg2 + 0x288) = eax_13
            sub_425a70(eax_13, arg2 + 0x280, *(arg2 + 0x18), arg2 + 0x398)
            *(arg2 + 0x398) += 1
            *(arg2 + 0x280) = *(arg2 + 0x25c)
            *(arg2 + 0x284) = *(eax_3 + 0x9c) + eax_5
            int32_t eax_18 = *(eax_3 + 0xa0) + eax_6
            *(arg2 + 0x288) = eax_18
            sub_425a70(eax_18, arg2 + 0x280, *(arg2 + 0x1c), arg2 + 0x398)
        
        *(arg2 + 0x398) += 1
        *(arg2 + 0x280) = eax_4
        *(arg2 + 0x284) = eax_5
        *(arg2 + 0x288) = eax_6
        *(arg2 + 0x2d0) = eax_7
        result = result_2
        *(arg2 + 0x2d4) = result
        
        if (result_1 == 0)
            result = *(arg2 + 0x238)
        
        if (result_1 == 0 && result == *(arg2 + 0x234))
        label_46f1ef:
            result = *(arg2 + 0x248)
            
            if (result != *(arg2 + 0x244))
                goto label_46f1fd
            
        label_46f207:
            result = *(arg2 + 0x260)
            
            if (result != *(arg2 + 0x25c))
                *(arg2 + 0x264) += 1
        else
            *(arg2 + 0x23c) += 1
            
            if (result_1 == 0)
                goto label_46f1ef
            
        label_46f1fd:
            *(arg2 + 0x24c) += 1
            
            if (result_1 == 0)
                goto label_46f207
            
            *(arg2 + 0x264) += 1

return result
