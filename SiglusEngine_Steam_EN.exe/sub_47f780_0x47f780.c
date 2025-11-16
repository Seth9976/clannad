// 函数: sub_47f780
// 地址: 0x47f780
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return sub_476410(arg1, arg2, arg3, arg4)

int32_t edi = *((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180)

if (edi == 0 || arg4 s< 0 || arg4 s>= *((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178))
    return sub_476410((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178, arg2, arg3, arg4)

void* esi_1 = arg4 * 0x7d8 + edi
int32_t edi_1 = arg5

if (edi_1 s< 4)
    edi_1 = 4
else if (edi_1 s> 0x40)
    edi_1 = 0x40

if (arg9 s< 0 || arg9 s>= 0x100)
    arg9 = 0

int32_t ebx_1 = arg10

if (ebx_1 s< 0xffffffff)
    ebx_1 = 0xffffffff
else if (ebx_1 s>= 0x100)
    ebx_1 = 0xff

enum MESSAGEBOX_RESULT result = arg11

if (result s< 0xffffffff)
    result = 0
else if (result s> IDCANCEL)
    result = 0

if (*(esi_1 + 0x224) != edi_1)
    sub_479330(result, arg2, arg3, arg4)
else if (*(esi_1 + 0x228) != arg6)
    sub_479330(result, arg2, arg3, arg4)
else if (*(esi_1 + 0x22c) != arg7)
    sub_479330(result, arg2, arg3, arg4)
else if (*(esi_1 + 0x230) != arg8)
    sub_479330(result, arg2, arg3, arg4)
else if (*(esi_1 + 0x234) != arg9 || *(esi_1 + 0x238) != ebx_1 || *(esi_1 + 0x23c) != result)
    sub_479330(result, arg2, arg3, arg4)

*(esi_1 + 0x228) = arg6
*(esi_1 + 0x22c) = arg7
*(esi_1 + 0x230) = arg8
*(esi_1 + 0x224) = edi_1
*(esi_1 + 0x234) = arg9
*(esi_1 + 0x238) = ebx_1
*(esi_1 + 0x23c) = result
*(esi_1 + 0xe0) += 1
return result
