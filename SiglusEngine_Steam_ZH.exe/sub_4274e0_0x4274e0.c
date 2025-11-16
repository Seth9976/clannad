// 函数: sub_4274e0
// 地址: 0x4274e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void*** var_8 = arg1
int32_t edi
int32_t var_14 = edi
int80_t result = sub_41ead8(arg1, arg2, 0, 1)
int32_t ecx_1 = arg1[0xf] & 0xfffffffe
int32_t eax_2 = (arg1[0x11] + 1) & 0xfffffffe
int32_t edi_2 = eax_2 - ecx_1
arg1[0x23] = eax_2
*arg1 = &data_ab7924
arg1[0x21] = ecx_1
arg1[0x22] = 0
arg1[0x25] = 0
arg1[0x24] = 0
arg1[0x26] = 0
arg1[0x27] = edi_2
arg1[0x28] = 0
arg1[0x29] = 1
int32_t eax_5 = sub_745f3f(edi_2 << 4)
int32_t eax_6

if (eax_5 == 0)
    eax_6 = 0
else
    sub_61cdd0(eax_5, 0x10, edi_2, sub_52e900)
    eax_6 = eax_5

arg1[0x20] = eax_6

if (eax_6 == 0)
    arg1[0x29] = 0

int32_t eax_8 = arg2[1]

if (eax_8 == 0x32595559)
    arg1[0x2a] = 0
    arg1[0x2b] = 8
else if (eax_8 == 0x42475247)
    arg1[0x2a] = 8
    arg1[0x2b] = 0
else if (eax_8 == 0x47424752)
    arg1[0x2a] = 0
    arg1[0x2b] = 8
else if (eax_8 == 0x59565955)
    arg1[0x2a] = 8
    arg1[0x2b] = 0

return result
