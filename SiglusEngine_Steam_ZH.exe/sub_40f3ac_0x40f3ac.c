// 函数: sub_40f3ac
// 地址: 0x40f3ac
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t* esi = arg1
int32_t edi
int32_t var_10 = edi
int32_t edi_1
edi_1.w = arg3
int32_t ebx
ebx.b = arg4 != 2
*esi = arg2
esi[2] = arg2
arg1.b = arg4 != 0
*(esi + 0x11) = arg1.b
void* ecx = *(esi + 0xc)
esi[1] = edi_1.w
esi[8].b = ebx.b
int16_t result = sub_40bf46(*(ecx + 0x24c) + zx.d(arg2) * 6, zx.d(edi_1.w))
esi[4] = result

if (ebx.b == 0)
    esi[4] = (mods.dp.d(sx.q(zx.d(result) + 2), 3)).w

result = esi[4]
esi[3] = result
return result
