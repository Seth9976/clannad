// 函数: sub_48c600
// 地址: 0x48c600
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_8c4ac0.d
void* esi_2 = &(&data_8c4ac0)[eax * 3]:4

if (*(arg3 + 0x7bc) != 0xffffffff && *(arg3 + 0x7c4) == eax && *(arg3 + 0x7cc) == 0)
    int32_t eax_1 = *(esi_2 + 0xc)
    
    if (eax_1 != 0xffffffff || *(esi_2 + 0x1c) != eax_1)
        void* eax_2 = sub_48c470(eax_1, arg4, arg2, eax_1, *(esi_2 + 0x10))
        
        if (eax_2 != 0)
            goto label_48c67a
        
        if (sub_48c470(eax_2, arg4, arg2, *(esi_2 + 0x1c), *(esi_2 + 0x20)) != 0)
            goto label_48c67a
    else
    label_48c67a:
        int32_t eax_4 = data_131d2cc
        
        if (eax_4 s>= *(arg3 + 0x4c) && eax_4 s<= *(arg3 + 0x54))
            int32_t eax_5 = data_1320e58
            
            if (eax_5 s>= *(arg3 + 0x50) && eax_5 s<= *(arg3 + 0x58))
                int32_t edi_1 = *(esi_2 + 4)
                
                if (edi_1 == 0xffffffff)
                label_48c6e5:
                    *(esi_2 + 4) = arg2
                    *(esi_2 + 8) = arg4
                    return 1
                
                if (edi_1 == arg2)
                label_48c6c2:
                    int32_t eax_7 = arg2 * 9
                    
                    if (sub_46e840(eax_7, arg2 * 0xf40 + &data_98c178, 
                            (eax_7 << 2) + &data_12b9268, arg4, *(esi_2 + 8)) != 0)
                        goto label_48c6e5
                else
                    if (sub_46e220(eax_5, arg2, 0, edi_1) != 0)
                        goto label_48c6e5
                    
                    if (edi_1 == arg2)
                        goto label_48c6c2

return 0
