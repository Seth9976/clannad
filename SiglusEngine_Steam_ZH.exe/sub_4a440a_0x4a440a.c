// 函数: sub_4a440a
// 地址: 0x4a440a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg3 == 0)
    return 0x80004005

int32_t edi
int32_t var_10_1 = edi
arg1[0x31] = arg3
arg1[0x32] = arg4
arg1[0x35] = 0
arg1[0x36] = 0
arg1[0x37] = 0
arg1[0x30] = arg2
arg1[0x33] = arg5
arg1[0x1d] = sub_49f4eb(arg1, &(*U"yxwzgrab")[1], 0, 0xffffffff, 4)
arg1[0x1e] = sub_49f4eb(arg1, 0xabff58, 0x311, 0xffffffff, 4)
arg1[0x1f] = sub_49f4eb(arg1, 0xabfed8, 0x251, 0xffffffff, 4)
arg1[0x20] = sub_49f4eb(arg1, 0xac6aec, 0x51, 0xffffffff, 4)
arg1[0x21] = sub_49f4eb(arg1, 0xac6aa0, 0x62, 0xffffffff, 4)
arg1[0x22] = sub_49f4eb(arg1, &(*U"yxwzgrab")[5], 3, 0xffffffff, 4)
arg1[0x23] = sub_49f4eb(arg1, &(*U"yxwzgrab")[6], 6, 0xffffffff, 4)
arg1[0x24] = sub_49f4eb(arg1, 0xac6aa4, 0xa, 0xffffffff, 4)
arg1[0x25] = sub_49f4eb(arg1, &data_aac1c4, 0x2d1, 0xffffffff, 4)
arg1[0x26] = sub_49f4eb(arg1, 0xabff18, 0x1003, 0xffffffff, 4)
arg1[0x27] = sub_49f4eb(arg1, 0xabfed8, 0x2251, 0xffffffff, 4)
arg1[0x28] = sub_49f4eb(arg1, 0xac6aa4, 0x400a, 0xffffffff, 4)
arg1[0x29] = sub_49f4eb(arg1, 0xac8b2c, 0xc00a, 0xffffffff, 4)
arg1[0x2a] = sub_49f4eb(arg1, 0xaac1c0, 0x10042, 0, 4)
arg1[0x2b] = sub_49f4eb(arg1, U"yxwzgrab", 0x20003, 0xffffffff, 4)
arg1[0x2c] = sub_49f4eb(arg1, 0xabff18, 0x40211, 0xffffffff, 4)
arg1[0x2d] = sub_49f4eb(arg1, 0xac8b28, 0x2062, 0xffffffff, 4)
int32_t eax_20 = sub_49f4eb(arg1, 0xac8b24, 0x40062, 0xffffffff, 4)
bool cond:0_1 = arg1[1] == 0x12
arg1[0x2e] = eax_20
int32_t result

if (cond:0_1)
    __builtin_memset(&arg1[0xa], 0, 0x4c)
    result = (*(*arg1 + 0xc))()
    
    if (result s>= 0)
        result = sub_49fdf5(arg1, nullptr)
        
        if (result s>= 0)
            result = 0
else
    result = 0x8007000e

return result
