// 函数: sub_47f580
// 地址: 0x47f580
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return sub_476410(arg1, arg2, arg3, arg4)

int32_t edi = *((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180)

if (edi == 0 || arg4 s< 0 || arg4 s>= *((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178))
    return sub_476410((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178, arg2, arg3, arg4)

void* ebx_1 = arg4 * 0x7d8 + edi
uint32_t result = sub_4cfe90(sub_4d6c40(ebx_1 + 0x18, ebx_1 + 0x1c), ebx_1 + 0x1c, ebx_1 + 0x18, 
    arg5, "objmoji09")
*(ebx_1 + 0x220) += 1
*(ebx_1 + 0xe0) += 1
return result
