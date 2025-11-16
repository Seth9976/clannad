// 函数: sub_464d10
// 地址: 0x464d10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return 

int32_t eax = arg2 + (arg3 << 1)
int32_t* var_c_1 = 0xffffffff
int32_t* eax_1 = arg5

if (eax_1 u<= 0x100)
    int32_t ecx_1
    eax_1, ecx_1 = sub_495490(eax_1)
    
    if (eax_1 != 0)
        int32_t var_20_1 = ecx_1
        eax_1 = sub_425690(ecx_1, arg5)
        var_c_1 = eax_1

if (arg6 == 0)
    sub_463970(eax_1, arg2, arg3, 0)
else
    sub_463320(eax * 0x650 + &data_72d6b0, eax * 0x7a0 + &data_98bf04)

if (var_c_1 == 0xffffffff)
    return 

*(eax * 0x650 + 0x72d6b8) = arg4
*(eax * 0x650 + &data_72d6bc) = arg4
*(eax * 0x650 + 0x72d730) = arg5
arg1 = *(eax * 0x7a0 + 0x98c284) + 1
*(eax * 0x7a0 + &data_98bf04) = var_c_1
*(eax * 0x7a0 + &data_98c1f8) = arg1
