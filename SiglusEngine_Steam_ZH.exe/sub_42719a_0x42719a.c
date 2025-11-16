// 函数: sub_42719a
// 地址: 0x42719a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = arg4
int32_t edi
int32_t var_10 = edi
int32_t esi_3 = *(arg1 + 0x60) * arg2 + *(arg1 + 0x64) * arg3 + *(arg1 + 0x20)
int32_t eax_3 = esi_3 + (*(arg1 + 0x68) << 2)

while (esi_3 u< eax_3)
    j_sub_4010ef(ebx, esi_3, 2)
    *(ebx + 0xc) = fconvert.s(float.t(1))
    esi_3 += 4
    ebx += 0x10
    *(ebx - 8) = fconvert.s(float.t(1))

if (*(arg1 + 0x18) != 0)
    sub_41eede(arg1, ebx - (*(arg1 + 0x68) << 4))

int16_t x87control

if (*(arg1 + 0x10) != 0)
    sub_41f14b(arg1, x87control, ebx - (*(arg1 + 0x68) << 4))
