// 函数: sub_432246
// 地址: 0x432246
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 != 0)
    int32_t eax_1 = sub_4312fc(arg1, arg2)
    void* eax_2
    void* eax_4
    int32_t ecx_2
    
    if (eax_1 == 0)
        eax_2 = sub_431413(arg1, arg2)
        
        if (eax_2 != 0)
            ecx_2 = *(eax_2 + 0x24)
            goto label_432266
        
        void* eax_3 = sub_431494(arg2)
        
        if (eax_3 != 0)
            ecx_2 = *(eax_3 + 0x24)
            eax_4 = *(eax_3 + 0x28)
            goto label_432290
    else
        eax_2 = *(eax_1 + 4)
        ecx_2 = *(eax_2 + 0x28)
    label_432266:
        eax_4 = *(eax_2 + 0x30)
    label_432290:
        int32_t edx_1 = arg3
        
        if (edx_1 u< ecx_2)
            while (true)
                edx_1 += 1
                
                if (edx_1 u>= ecx_2)
                    break
                
                eax_4 = *(eax_4 + 0x34)
            
            return not.d(eax_4)

return 0
