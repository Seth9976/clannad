// 函数: sub_4276fa
// 地址: 0x4276fa
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
int80_t result = sub_41ead8(arg1, arg2, 0, 1)
int32_t eax = arg1[1]
*arg1 = &data_ab7934

if (eax == 0x31545844)
    arg1[0x22] = 8
    arg1[0x24] = sub_46a5a8
    arg1[0x23] = sub_46a2a3
else if (eax == 0x32545844)
    arg1[0x22] = 0x10
    arg1[0x24] = sub_46ad1b
    arg1[0x23] = sub_46accf
else if (eax == 0x33545844)
    arg1[0x22] = 0x10
    arg1[0x24] = sub_46a6cc
    arg1[0x23] = sub_46a3e5
else if (eax == 0x34545844)
    arg1[0x22] = 0x10
    arg1[0x24] = sub_46ad54
    arg1[0x23] = sub_46acf5
else if (eax == 0x35545844)
    arg1[0x22] = 0x10
    arg1[0x24] = sub_46a7fb
    arg1[0x23] = sub_46a46a

__builtin_memcpy(&arg1[0x25], &arg2[4], 0x18)
arg1[0x2b] = arg1[0x25] & 0xfffffffc
arg1[0x2c] = arg1[0x26] & 0xfffffffc
arg1[0x2f] = arg1[0x29]
int32_t ecx = arg1[0x12]
int32_t esi_2 = arg1[0xf]
arg1[0x2d] = (arg1[0x27] + 3) & 0xfffffffc
int32_t eax_10 = arg1[0x28]
int32_t edi_2 = arg1[0x10]
arg1[0x3a] = 0xffffffff
arg1[0x3b] = 0xffffffff
arg1[0x2e] = (eax_10 + 3) & 0xfffffffc
arg1[0x30] = arg1[0x2a]
arg1[0x35] = arg1[0x13]
int32_t eax_17 = (arg1[0x11] + 3) & 0xfffffffc
int32_t esi_3 = esi_2 & 0xfffffffc
arg1[0x33] = eax_17
int32_t ecx_2 = (ecx + 3) & 0xfffffffc
int32_t edi_3 = edi_2 & 0xfffffffc
int32_t edx = arg1[0x14]
arg1[0x34] = ecx_2
arg1[0x37] = (eax_17 - esi_3) u>> 2
arg1[0x36] = edx
int32_t edx_1 = edx - arg1[0x13]
arg1[0x3c] = 0
arg1[0x3d] = 0
arg1[0x3e] = 0
arg1[0x31] = esi_3
arg1[0x32] = edi_3
arg1[0x38] = (ecx_2 - edi_3) u>> 2
arg1[0x39] = edx_1
arg1[0x3f] = arg2[0x10]
return result
