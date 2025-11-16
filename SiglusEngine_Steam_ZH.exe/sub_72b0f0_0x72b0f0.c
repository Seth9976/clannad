// 函数: sub_72b0f0
// 地址: 0x72b0f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void** var_8 = arg3

if (arg4 u< 0xc || *arg2 != 0x41 || arg2[1] != 0x64 || arg2[2] != 0x6f || arg2[3] != 0x62
        || arg2[4] != 0x65)
    *(*arg3 + 0x14) = 0x50
    *(*arg3 + 0x18) = arg4 + arg5
    return (*(*arg3 + 4))(arg3, 1)

uint32_t ebx_1 = zx.d(arg2[0xb])
uint32_t edi_2 = (zx.d(arg2[7]) << 8) + zx.d(arg2[8])
void* edx_1 = *var_8
uint32_t eax_3 = zx.d(arg2[6])
uint32_t ecx_2 = zx.d(arg2[5]) << 8
*(edx_1 + 0x20) = (zx.d(arg2[9]) << 8) + zx.d(arg2[0xa])
*(edx_1 + 0x18) = ecx_2 + eax_3
*(edx_1 + 0x1c) = edi_2
*(edx_1 + 0x24) = ebx_1
*(*var_8 + 0x14) = 0x4e
int32_t result = (*(*var_8 + 4))(var_8, 1)
*(var_8 + 0x109) = ebx_1.b
var_8[0x42].b = 1
return result
