// 函数: sub_429b30
// 地址: 0x429b30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

BOOL result = arg2

if (arg3 != 0 && (result s> 0 || arg4 s> 0) && arg6 s> 0)
    int32_t var_c = 0
    void* edi_2 = arg7 + 8
    int32_t var_8 = 0
    int32_t var_14 = 0
    BOOL result_1 = 0
    int32_t i_1 = arg6
    int32_t i
    
    do
        void* edx = *(edi_2 - 4)
        void* eax_2 = *(edi_2 + 4) - 1 + edx
        HGLOBAL esi_1 = *(edi_2 - 8)
        int32_t* var_30_1 = &var_8
        void* eax_3 = sub_581fe0(eax_2, result, arg3, arg4, 1, esi_1, edx, *edi_2 - 1 + esi_1, 
            eax_2, *(edi_2 + 8), *(edi_2 + 0xc), &var_c)
        sub_4d24d0(eax_3, &result_1, &var_14, arg6, var_8, eax_3, arg8)
        sub_4d6c40(&var_c, &var_8)
        i = i_1
        i_1 -= 1
        edi_2 += 0x18
    while (i != 1)
    sub_4d6c40(arg5, &arg5[1])
    *arg5 = var_14
    result = result_1
    arg5[1] = result
    arg5[5] = 2

return result
