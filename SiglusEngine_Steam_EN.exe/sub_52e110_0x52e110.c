// 函数: sub_52e110
// 地址: 0x52e110
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s> arg2)
    arg1 = arg3
    arg3 = arg2
    arg2 = arg1

if (arg3 s< 0 || arg2 s>= data_7031bc || arg3 s> arg2)
    return 

arg1 = zx.d(arg4) * 0x1010101
int32_t ecx_2
int32_t edi_2
edi_2, ecx_2 = __memfill_u32(arg3 + 0x1b15290, arg1, (arg2 - arg3 + 1) u>> 2)
int32_t ecx_5
int32_t edi_3
edi_3, ecx_5 = __memfill_u8(edi_2, arg1.b, (arg2 - arg3 + 1) & 3)
