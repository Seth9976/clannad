// 函数: sub_48c530
// 地址: 0x48c530
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_8c4ac0.d
void* esi_2 = &(&data_8c4ac0)[eax * 3]:4

if (*(arg3 + 0x638) != 0xffffffff && *(arg3 + 0x640) == eax && *(arg3 + 0x648) == 0)
    int32_t eax_1 = *(esi_2 + 0xc)
    
    if (eax_1 != 0xffffffff || *(esi_2 + 0x1c) != 0xffffffff)
        void* eax_2 = sub_48c470(eax_1, 0xffffffff, arg4, eax_1, *(esi_2 + 0x10))
        
        if (eax_2 != 0)
            goto label_48c5ac
        
        if (sub_48c470(eax_2, 0xffffffff, arg4, *(esi_2 + 0x1c), *(esi_2 + 0x20)) != 0)
            goto label_48c5ac
    else
    label_48c5ac:
        int32_t eax_4 = data_131d2cc
        
        if (eax_4 s>= *(arg2 + 0x68) && eax_4 s<= *(arg2 + 0x70))
            int32_t eax_5 = data_1320e58
            
            if (eax_5 s>= *(arg2 + 0x6c) && eax_5 s<= *(arg2 + 0x74))
                int32_t eax_6 = *(esi_2 + 4)
                int32_t eax_7
                
                if (eax_6 != 0xffffffff)
                    eax_7 = sub_46e220(eax_6, arg4, 0, eax_6)
                
                if (eax_6 == 0xffffffff || eax_7 != 0)
                    *(esi_2 + 4) = arg4
                    *(esi_2 + 8) = 0xffffffff
                    return 1

return 0
