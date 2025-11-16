// 函数: sub_4259b0
// 地址: 0x4259b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg3

if (arg3 s< 0x200)
    int32_t eax_1 = sub_425430(arg3, 1)
    
    if (*(arg3 * 0x74 + 0x13747b0) != 0)
        if (arg4 == 0)
            return sub_427c30(arg3 * 0x74 + 0x13747b0, arg2)
        
        int32_t result =
            sub_427d40(eax_1, arg2, arg3 * 0x74 + 0x13747b0, arg4, nullptr, 0xffffffff, 0, 0)
        int32_t ecx_4
        ecx_4.b = result != 0
        *arg4 = ecx_4
        return result

return 0
