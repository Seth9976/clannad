// 函数: sub_465cd0
// 地址: 0x465cd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 u< 0xc || *arg2 != 0x41 || arg2[1] != 0x64 || arg2[2] != 0x6f || arg2[3] != 0x62
        || arg2[4] != 0x65)
    void* eax_1 = *arg3
    *(eax_1 + 0x14) = 0x4e
    *(eax_1 + 0x18) = arg1 + arg4
    return (*(eax_1 + 4))(arg3, 1)

void* ecx = *arg3
uint32_t ebx = zx.d(arg2[0xb])
int32_t edi
int32_t var_c = edi
uint32_t edi_2 = zx.d(arg2[8])
*(ecx + 0x18) = (zx.d(arg2[5]) << 8) + zx.d(arg2[6])
*(ecx + 0x1c) = (zx.d(arg2[7]) << 8) + edi_2
*(ecx + 0x20) = (zx.d(arg2[9]) << 8) + zx.d(arg2[0xa])
*(ecx + 0x24) = ebx
*(ecx + 0x14) = 0x4c
int32_t result = (*(ecx + 4))(arg3, 1)
arg3[0x4b].b = ebx.b
arg3[0x4a] = 1
return result
