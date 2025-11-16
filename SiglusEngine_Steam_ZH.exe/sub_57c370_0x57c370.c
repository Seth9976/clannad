// 函数: sub_57c370
// 地址: 0x57c370
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 s<= 0x4b1)
    if (arg2 == 0x4b1)
        void* eax_21
        
        if (arg3 == 0)
            eax_21 = nullptr
        else
            eax_21 = arg3 - 4
        
        return (*(eax_21 + 0xa8) - *(eax_21 + 0xa4)) s/ 0xb4
    
    if (arg2 == 0x3fd)
        void* eax_18
        
        if (arg3 == 0)
            eax_18 = nullptr
        else
            eax_18 = arg3 - 4
        
        return (*(eax_18 + 0xa8) - *(eax_18 + 0xa4)) s/ 0x30c
    
    if (arg2 == 0x47f)
        if (arg3 == 0)
            return sub_55af00(4)
        
        return sub_55af00(arg3)
    
    if (arg2 == 0x15)
        void* eax_13
        
        if (arg3 == 0)
            eax_13 = nullptr
        else
            eax_13 = arg3 - 4
        
        int32_t eax_14
        int32_t edx
        edx:eax_14 = muls.dp.d(0x2aaaaaab, *(eax_13 + 0xa8) - *(eax_13 + 0xa4))
        int32_t edx_1 = edx s>> 2
        return (edx_1 u>> 0x1f) + edx_1
    
    if (arg2 == 0xb)
        if (arg4 - 1 u<= 0x1f)
            switch (arg4 + &jump_table_57c704[6]:3)
                case &lookup_table_57c720
                    void* ecx_7
                    
                    if (arg3 == 0)
                        ecx_7 = nullptr
                    else
                        ecx_7 = arg3 - 4
                    
                    return (*(ecx_7 + 0xa8) - *(ecx_7 + 0xa4)) s>> 2 << 5
                case &lookup_table_57c720[1]
                    void* ecx_6
                    
                    if (arg3 == 0)
                        ecx_6 = nullptr
                    else
                        ecx_6 = arg3 - 4
                    
                    return (*(ecx_6 + 0xa8) - *(ecx_6 + 0xa4)) s>> 2 << 4
                case &lookup_table_57c720[3]
                    void* ecx_5
                    
                    if (arg3 == 0)
                        ecx_5 = nullptr
                    else
                        ecx_5 = arg3 - 4
                    
                    return (*(ecx_5 + 0xa8) - *(ecx_5 + 0xa4)) s>> 2 << 3
                case &lookup_table_57c720[7]
                    if (arg3 == 0)
                        return (*0xa8 - *0xa4) & 0xfffffffc
                    
                    return (*(arg3 + 0xa4) - *(arg3 + 0xa0)) & 0xfffffffc
                case &lookup_table_57c720[0xf]
                    void* ecx_3
                    
                    if (arg3 == 0)
                        ecx_3 = nullptr
                    else
                        ecx_3 = arg3 - 4
                    
                    return ((*(ecx_3 + 0xa8) - *(ecx_3 + 0xa4)) s>> 2) * 2
                case &lookup_table_57c720[0x1f]
                    if (arg3 == 0)
                        return (*0xa8 - *0xa4) s>> 2
                    
                    return (*(arg3 + 0xa4) - *(arg3 + 0xa0)) s>> 2
    else if (arg2 == 0x10)
        if (arg3 == 0)
            return sub_588000(4)
        
        return sub_588000(arg3)
else if (arg2 - 0x50b u<= 0xa0)
    switch (arg2 + &jump_table_57c238[9]:1)
        case &lookup_table_57c768
            if (arg3 == 0)
                return sub_56a710(4)
            
            return sub_56a710(arg3)
        case &lookup_table_57c768[0xa]
            if (arg3 == 0)
                return sub_5796c0(4)
            
            return sub_5796c0(arg3)
        case &lookup_table_57c768[0x14]
            if (arg3 == 0)
                return sub_556ea0(4)
            
            return sub_556ea0(arg3)
        case &lookup_table_57c768[0x1e]
            if (arg3 == 0)
                return sub_579670(4)
            
            return sub_579670(arg3)
        case &lookup_table_57c768[0x28]
            if (arg3 == 0)
                return sub_579640(4)
            
            return sub_579640(arg3)
        case &lookup_table_57c768[0x46]
            if (arg3 == 0)
                return sub_579690(4)
            
            return sub_579690(arg3)
        case &lookup_table_57c768[0x5a]
            if (arg3 == 0)
                return sub_54a2d0(4)
            
            return sub_54a2d0(arg3)
        case &lookup_table_57c768[0x83]
            if (arg3 == 0)
                return sub_5796e0(4)
            
            return sub_5796e0(arg3)
        case &lookup_table_57c768[0xa0]
            if (arg3 == 0)
                return sub_579710(4)
            
            return sub_579710(arg3)

return 0
