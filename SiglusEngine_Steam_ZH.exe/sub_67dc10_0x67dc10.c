// 函数: sub_67dc10
// 地址: 0x67dc10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t esi = arg2 * 5
int32_t edi = data_bac510
void* ebx_2 = (esi << 4) + edi
*arg1 = *(ebx_2 + 0x1776c)
int32_t ecx_1 = (esi + 0x1777) * 2
arg1[1] = *(edi + (ecx_1 << 3))
arg1[2] = *(edi + (ecx_1 << 3) + 4)
arg1[3].b = *(ebx_2 + 0x17778)
*(arg1 + 0xd) = *(ebx_2 + 0x17779)
*(arg1 + 0xe) = *(ebx_2 + 0x1777a)
arg1[4] = *(ebx_2 + 0x1777c)
int32_t ecx_4 = (esi + 0x1778) * 2
arg1[5] = *(edi + (ecx_4 << 3))
arg1[6] = *(edi + (ecx_4 << 3) + 4)
arg1[7].b = *(ebx_2 + 0x17788)
*(arg1 + 0x1d) = *(ebx_2 + 0x17789)
*(arg1 + 0x1e) = *(ebx_2 + 0x1778a)
arg1[8] = *(ebx_2 + 0x1778c)
int32_t ecx_7 = (esi + 0x1779) * 2
arg1[9] = *(edi + (ecx_7 << 3))
arg1[0xa] = *(edi + (ecx_7 << 3) + 4)
arg1[0xb].b = *(ebx_2 + 0x17798)
*(arg1 + 0x2d) = *(ebx_2 + 0x17799)
*(arg1 + 0x2e) = *(ebx_2 + 0x1779a)
arg1[0xc] = *(ebx_2 + 0x1779c)
int32_t ecx_10 = (arg2 + 0x4b2) * 0xa
arg1[0xd] = *(edi + (ecx_10 << 3))
arg1[0xe] = *(edi + (ecx_10 << 3) + 4)
int32_t ecx_12 = (esi + 0x177b) * 2
arg1[0xf].b = *(ebx_2 + 0x177a8)
*(arg1 + 0x3d) = *(ebx_2 + 0x177a9)
*(arg1 + 0x3e) = *(ebx_2 + 0x177aa)
arg1[0x10] = *(ebx_2 + 0x177ac)
arg1[0x11] = *(edi + (ecx_12 << 3))
arg1[0x12] = *(edi + (ecx_12 << 3) + 4)
arg1[0x13].b = *(ebx_2 + 0x177b8)
*(arg1 + 0x4d) = *(ebx_2 + 0x177b9)
char result = *(ebx_2 + 0x177ba)
*(arg1 + 0x4e) = result
return result
