// 函数: sub_425457
// 地址: 0x425457
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
int32_t i = 0
int16_t x87control

if (*(arg1 + 0x10) != 0)
    arg4 = sub_41ef58(arg1, x87control, arg4)
int32_t result = *(arg1 + 0x64) * arg3
int32_t esi_3 = *(arg1 + 0x60) * arg2 + result + *(arg1 + 0x20)

if (*(arg1 + 0x68) u> 0)
    do
        result = j_sub_401034(esi_3, arg4, 2)
        arg4 += 0x10
        esi_3 += 4
        i += 1
    while (i u< *(arg1 + 0x68))

return result
