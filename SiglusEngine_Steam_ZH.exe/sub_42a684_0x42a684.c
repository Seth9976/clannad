// 函数: sub_42a684
// 地址: 0x42a684
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg6 != 0 && arg7 != 0)
    void* eax_1 = arg3
    
    if (eax_1 == 0xffffffff)
        if (arg2 == 0)
            eax_1 = nullptr
        else
            char* eax_2 = arg2
            int32_t edi
            int32_t var_10_1 = edi
            char i
            
            do
                i = *eax_2
                eax_2 = &eax_2[1]
            while (i != 0)
            eax_1 = eax_2 - &eax_2[1]
    
    if (arg2 != 0 || eax_1 == 0)
        *arg1 = arg2
        arg1[6] = arg4
        arg1[7] = arg5
        arg1[0xb] = arg6
        arg1[1] = arg2 + eax_1
        arg1[0xc] = arg7
        return 0

return 0x80004005
