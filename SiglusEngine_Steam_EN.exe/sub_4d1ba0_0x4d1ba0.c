// 函数: sub_4d1ba0
// 地址: 0x4d1ba0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx
ebx.b = arg4
arg1.b = ebx.b
arg1:1.b = ebx.b
int32_t result
result.b = ebx.b
result:1.b = ebx.b
int32_t edi = arg3
uint32_t ecx_1 = arg2 u>> 2
int32_t ecx_2

if (ecx_1 != 0)
    edi, ecx_2 = __memfill_u32(edi, result, ecx_1)
int32_t ebx_2 = arg2 & 3
int32_t ecx_4
int32_t edi_1

if (ebx_2 != 0)
    edi_1, ecx_4 = __memfill_u8(edi, result.b, ebx_2)
return result
