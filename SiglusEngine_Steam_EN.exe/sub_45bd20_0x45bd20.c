// 函数: sub_45bd20
// 地址: 0x45bd20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_4 = arg1
int32_t result = 0xffffffff

if (arg1 != 0)
    if (arg1 - 0x4e20 s>= 0xbb8)
        if (arg1 == 0x59d8)
            data_1af1774 = 2
            return 0xffffffff
        
        if (arg1 == 0x59d9)
            data_1af1774 = 1
            return 0xffffffff
        
        if (arg1 == 0x59da)
            data_1af1774 = 3
            return 0xffffffff
    else if (arg1 - 0x4e20 s< 0x7d0)
        if (arg1 - 0x4e20 s< 0x3e8)
            result = (arg1 - 0x4e21) s/ 0x14
            sub_45b6d0(result, (arg1 - 0x4e21) s% 0x14)
        else if (arg1 - 0x5208 u<= 0x100)
            int32_t eax
            sub_496210(eax, 1, arg1 - 0x5208, 1)
            return 0xffffffff
    else if (arg1 - 0x55f0 u<= 0x100)
        sub_45b340(arg1 - 0x55f0)
        return 0xffffffff

return result
