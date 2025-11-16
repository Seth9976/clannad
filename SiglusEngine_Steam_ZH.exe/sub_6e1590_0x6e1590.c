// 函数: sub_6e1590
// 地址: 0x6e1590
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* edi = arg2

if (edi != 0)
    int32_t* eax_1 = *(arg1 + 0x14)
    
    if (eax_1[0xb4] != 0)
        int32_t esi = arg3
        int32_t eax_2 = sub_745b60(eax_1, edi, arg3, 0, 2, 1, &arg2)
        bool cond:0 = eax_2 s<= 0
        
        if (eax_2 != 0)
            while (true)
                if (not(cond:0))
                    esi -= eax_2
                    edi = &edi[eax_2]
                    
                    if (esi s<= 0)
                        break
                else if (eax_2 + 0x8a u<= 0x89)
                    switch (eax_2)
                        case 0xffffff77, 0xffffff7a, 0xffffff7b, 0xffffff7c, 0xffffff7d, 
                                0xffffff7f, 0xffffff80
                            if (esi s> 0)
                                _memset(edi, 0, esi)
                            
                            break
                
                eax_2 = sub_745b60(*(arg1 + 0x14), edi, esi, 0, 2, 1, &arg2)
                cond:0 = eax_2 s<= 0
                
                if (eax_2 == 0)
                    *(arg1 + 0x1c) += arg3 - esi
                    return arg3 - esi
        
        *(arg1 + 0x1c) += arg3 - esi
        return arg3 - esi

return 0
