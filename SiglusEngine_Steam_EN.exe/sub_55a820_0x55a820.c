// 函数: sub_55a820
// 地址: 0x55a820
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = (&data_1af0a10)[arg5]

if (arg2 == 0x214)
    int32_t eax_8
    int32_t edx_3
    eax_8, edx_3 = sub_4d7c70(sub_55a590(ebx), ebx, &data_20c3980, arg3, arg4)
    int32_t var_14_3 = arg4
    int32_t var_18_4 = arg3
    sub_4d7940(eax_8, edx_3, 0x20c399c)
    return 0

if (arg2 == 5)
    sub_4c0f50(arg4, arg4 u>> 0x10, zx.d(arg4.w), arg5 * 0x38 + &data_1b8b078)
    return 0

if (arg2 == 0x10)
    int32_t eax = GetWindowLongA(data_7027bc, 0xfffffff0)
    sub_55a2f0(arg5, 0)
    
    if ((eax & 0x8000000) != 0)
        EnableWindow(data_7027bc, 0)
    
    return 1

if (arg2 == 0x216)
    int32_t eax_10
    int32_t ecx_5
    eax_10, ecx_5 = sub_55a590(ebx)
    int32_t var_14_4 = arg4
    int32_t eax_11
    int32_t edx_5
    eax_11, edx_5 = sub_4d7bd0(eax_10, ebx, &data_20c3980, ecx_5)
    int32_t var_14_5 = arg4
    void var_20
    sub_4d7740(eax_11, edx_5, 0x20c399c, var_20)

return 0
