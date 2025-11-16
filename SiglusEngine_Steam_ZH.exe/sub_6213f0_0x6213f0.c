// 函数: sub_6213f0
// 地址: 0x6213f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = sub_621210()
int32_t* eax_1 = data_bac4dc
int32_t esi_1

if (eax != 0xffffffff)
    esi_1 = eax - 1

if (eax == 0xffffffff || eax - 1 s< 0)
    esi_1 = ((eax_1[1] - *eax_1) s>> 3) - 1

int32_t eax_2 = *eax_1
void* edi = data_bac4a0
POINT point
point.x = divs.dp.d(sx.q(*(edi + 0x20) * *(eax_2 + (esi_1 << 3))), *(edi + 8)) + *(edi + 0x10)
*(edi + 0xc)
point.y = divs.dp.d(sx.q(*(edi + 0x24) * *(eax_2 + (esi_1 << 3) + 4)), *(edi + 0xc)) + *(edi + 0x14)
ClientToScreen(*(data_bac454 + 4), &point)
int32_t* ecx_3 = data_bac42c
*ecx_3 = point.x
int32_t y = point.y
int32_t X = *ecx_3
ecx_3[1] = y
SetCursorPos(X, y)
BOOL result
result.b = 1
return result
