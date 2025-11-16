// 函数: sub_41ffa0
// 地址: 0x41ffa0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
var_8:2.b = arg2
var_8:3.b = arg3.b

if (data_1370110.d != 0)
    int32_t eax = data_1370110:0xc
    
    if (data_1370110:8 s>= eax)
        data_1370110:0xc = eax + 0x100
        int32_t eax_3 = (eax + 0x100) * 0x14
        sub_4d6ae0(eax_3, &data_1370110:4, &data_1370110, eax_3)
else
    data_1370110:0xc = 0x100
    sub_4d6960(arg1, &data_1370110:4, &data_1370110, 0x1400, "FSCMSGBK_MOJI_TMP")

int32_t ecx = data_1370110:8 * 5
int32_t eax_5 = data_1370110:4
*(eax_5 + (ecx << 2) + 0xc) = 0xffffffff
char* esi = eax_5 + (ecx << 2)
eax_5.b = var_8:3.b
int32_t ecx_1 = data_1370100
*esi = eax_5.b
*(esi + 4) = zx.d(var_8:2.b)
uint32_t result
result.w = arg4
*(esi + 8) = result.w
result.b = arg5
esi[0xa] = result.b

if (ecx_1 != 0xffffffff)
    result = sub_4a2390(ecx_1, data_1311176)
    
    if (result != 0)
        *(esi + 0xc) = data_1370100
        result.b = data_1311176
        esi[0x10] = result.b
    
    data_1370100 = 0xffffffff

int32_t ecx_2 = data_1370110:8

if (ecx_2 == 0)
    data_1370130 = data_719b6c
    result = data_72d6ac
    data_1370134 = result

data_1370110:8 = ecx_2 + 1
return result
