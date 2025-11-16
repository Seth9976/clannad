// 函数: sub_621350
// 地址: 0x621350
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = sub_621210()
int32_t* ecx = data_bac4dc
int32_t esi_1

if (eax != 0xffffffff)
    esi_1 = eax + 1
    
    if (esi_1 s>= (ecx[1] - *ecx) s>> 3)
        esi_1 = 0
else
    esi_1 = 0

int32_t eax_4 = *ecx
void* edi = data_bac4a0
POINT point
point.x = divs.dp.d(sx.q(*(edi + 0x20) * *(eax_4 + (esi_1 << 3))), *(edi + 8)) + *(edi + 0x10)
*(edi + 0xc)
point.y = divs.dp.d(sx.q(*(edi + 0x24) * *(eax_4 + (esi_1 << 3) + 4)), *(edi + 0xc)) + *(edi + 0x14)
ClientToScreen(*(data_bac454 + 4), &point)
int32_t* ecx_4 = data_bac42c
*ecx_4 = point.x
int32_t y = point.y
int32_t X = *ecx_4
ecx_4[1] = y
SetCursorPos(X, y)
BOOL result
result.b = 1
return result
