// 函数: sub_47c080
// 地址: 0x47c080
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return sub_476410(arg1, arg2, arg3, arg4)

int32_t edi_1 = *((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180)

if (edi_1 == 0 || arg4 s< 0 || arg4 s>= *((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178))
    return sub_476410(arg4, arg2, arg3, arg4)

void* ebx_2 = arg4 * 0x7d8 + edi_1

if (*(ebx_2 + 0x190) != 1 || *(ebx_2 + 4) == 0xffffffff)
    return arg4

sub_4629e0(arg4, 3, ebx_2 + 0x3cc, 0)
sub_462a50(ebx_2 + 0x2d0)
*(ebx_2 + 0x410) = arg5
*(ebx_2 + 0x414) = arg6
return sub_428c70(*(ebx_2 + 4), *(ebx_2 + 0x208), ebx_2 + 0x3cc, ebx_2 + 0x2d0)
