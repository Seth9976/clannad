// 函数: sub_463421
// 地址: 0x463421
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1[3] != 0)
    int32_t edi
    int32_t var_8_1 = edi
    int32_t i = 0
    
    if (*arg1 u> 0)
        do
            int32_t eax_1 = arg1[3]
            
            if (*(eax_1 + (i << 2)) != 0)
                int32_t* eax_2 = *(eax_1 + (i << 2))
                (*(*eax_2 + 8))(eax_2)
                *(arg1[3] + (i << 2)) = 0
            
            i += 1
        while (i u< *arg1)

return _free(arg1[3])
