// 函数: sub_5f3680
// 地址: 0x5f3680
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = *(arg1 + 0x2ac)

if (ecx s>= 0)
    int32_t* eax_1 = data_bac4c4
    int32_t eax_2
    int32_t edx_3
    edx_3:eax_2 = muls.dp.d(0x66666667, eax_1[1] - *eax_1)
    int32_t edx_4 = edx_3 s>> 5
    
    if ((edx_4 u>> 0x1f) + edx_4 s> ecx)
        int32_t eax_6 = *(arg1 + 0x2a4)
        void* eax_25
        
        if (eax_6 == 3)
            if (sub_660000() == 0)
                return 4
            
            eax_25 = data_bac458
        else if (eax_6 == 4)
            if (sub_660080() == 0)
                return 4
            
            eax_25 = data_bac458
        else if (eax_6 == 5)
            if (sub_660fa0() == 0)
                return 4
            
            eax_25 = data_bac458
        else if (eax_6 == 6)
            if (sub_6600a0() == 0)
                return 4
            
            eax_25 = data_bac458
        else if (eax_6 == 1)
            if (sub_660410() == 0)
                return 4
            
            eax_25 = data_bac458
        else if (eax_6 == 2)
            if (sub_660600() == 0)
                return 4
            
            eax_25 = data_bac458
        else if (eax_6 == 9)
            if (sub_660950(*(arg1 + 0x2a8)) == 0)
                return 4
            
            eax_25 = data_bac458
        else if (eax_6 == 0xa)
            if (sub_660a80(*(arg1 + 0x2a8)) == 0)
                return 4
            
            eax_25 = data_bac458
        else if (eax_6 == 7)
            if (sub_660170() == 0)
                return 4
            
            eax_25 = data_bac458
        else if (eax_6 == 8)
            eax_25 = data_bac458
            
            if (*(eax_25 + 0x338) s< 0)
                return 4
        else if (eax_6 == 0xb)
            void* eax_27 = data_bac498
            
            if (*(eax_27 + 0x17) == 0)
                return 4
            
            if (*(eax_27 + 0x16) == 0)
                return 4
            
            eax_25 = data_bac458
        else if (eax_6 == 0xc)
            if (sub_661320(*(arg1 + 0x2a8)) == 0)
                return 4
            
            eax_25 = data_bac458
        else if (eax_6 != 0xd)
            eax_25 = data_bac458
        else
            if (sub_6613a0(*(arg1 + 0x2a8)) == 0)
                return 4
            
            eax_25 = data_bac458
        
        int32_t result = *(arg1 + 0x33c)
        
        if (result == 3)
            return result
        
        if (result == 4)
            return 4
        
        if (*(eax_25 + 0x37c) == 0)
            void* eax_33 = sub_5f3d30(arg1)
            
            if (eax_33 != 0)
                int32_t ecx_6 = *(eax_33 + 0x134)
                
                if (ecx_6 s>= 0 && ecx_6 == *(arg1 + 0x2b4))
                    return 2
                
                int32_t ecx_7 = *(eax_33 + 0x1cc)
                
                if (ecx_7 s>= 0 && ecx_7 == *(arg1 + 0x2b4))
                    return 1
                
                int32_t eax_36 = *(eax_33 + 0x1d0)
                
                if (eax_36 s>= 0 && eax_36 == *(arg1 + 0x2b4))
                    return 2
            
            return sub_67d810(arg1 + 0x159c)

return 0
