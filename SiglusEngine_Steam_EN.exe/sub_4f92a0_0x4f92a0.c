// 函数: sub_4f92a0
// 地址: 0x4f92a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
int32_t eax_2

if (arg5 == 0)
    int32_t var_18_2 = 1
    eax_2 = sub_499a90(arg5, arg6, 0xffffffff, 1, 1)
else
    int32_t eax_1 = arg5 - 1
    
    if (arg5 == 1)
        int32_t var_18_1 = 1
        eax_2 = sub_499a90(eax_1, arg6, 0xffffffff, 0, 1)
    else if (eax_1 != 1)
        eax_2 = arg5
    else
        eax_2 = 0xffffffff

return sub_49ac20(eax_2, arg2, arg3, arg4, eax_2, arg6, arg7)
