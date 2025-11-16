// 函数: sub_43e8ac
// 地址: 0x43e8ac
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (sub_43e52c(arg2, &arg2) s>= 0)
    void*** eax_1 = sub_42cfa1(0x18)
    void*** eax_2
    
    if (eax_1 == 0)
        eax_2 = nullptr
    else
        eax_2 = sub_46bb3b(eax_1, 0, arg2)
    
    if (eax_2 != 0)
        void*** result
        void**** ecx_1 = &result
        
        if (result != 0)
            do
                void*** edx_1 = *ecx_1
                
                if (edx_1[1] != 8)
                    break
                
                ecx_1 = &edx_1[4]
            while (*ecx_1 != 0)
        
        eax_2[4] = *ecx_1
        *ecx_1 = eax_2
        return result
else
    sub_43713d(arg1, nullptr, 0xbf2, "array dimensions must be literal scalar expressions")

return nullptr
