// 函数: sub_1000ae01
// 地址: 0x1000ae01
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

if (arg1 s>= 0 && arg1 u< data_1001c584)
    int32_t edi_2 = arg1 s>> 5
    int32_t esi_3 = (arg1 & 0x1f) << 6
    int32_t ecx_1 = (&data_1001b0a0)[edi_2]
    
    if ((*(esi_3 + ecx_1 + 4) & 1) != 0 && *(esi_3 + ecx_1) != 0xffffffff)
        if (data_1001aa60 == 1)
            if (arg1 == 0)
                int32_t var_10_3 = 0
                SetStdHandle(STD_INPUT_HANDLE, nullptr)
            else if (arg1 == 1)
                int32_t var_10_2 = 0
                SetStdHandle(STD_OUTPUT_HANDLE, nullptr)
            else if (arg1 == 2)
                int32_t var_10_1 = 0
                SetStdHandle(STD_ERROR_HANDLE, nullptr)
        
        *(esi_3 + (&data_1001b0a0)[edi_2]) = 0xffffffff
        return 0

*__errno() = 9
*___doserrno() = 0
return 0xffffffff
