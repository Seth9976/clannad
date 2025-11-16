// 函数: sub_45e020
// 地址: 0x45e020
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg3
int32_t esi_2 = ((arg2 + 2) * (arg2 + 2)) << 2
int32_t edi = esi_2 + 0x64

if (data_13740ac != 0)
    edi += esi_2

sub_45dfb0(arg3, edi)
int32_t* result = arg3[3] + arg3[1]
bool cond:1 = data_13740ac != 0
result[3] = arg4
result[4] = arg5
result[5] = arg6
result[6] = arg7
int32_t eax_5
eax_5.b = cond:1
*result = edi
result[7] = esi_2
result[1] = arg2 + 2
result[2] = arg2 + 2
result[8].b = eax_5.b
result[0xd] = 0xffffffff
result[0xe] = 0xffffffff
result[0xf] = 0xffffffff
result[0x10] = 0xffffffff
result[0x15] = 0xffffffff
result[0x16] = 0xffffffff
result[0x17] = 0xffffffff
result[0x18] = 0xffffffff
return result
