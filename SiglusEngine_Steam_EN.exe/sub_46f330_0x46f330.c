// 函数: sub_46f330
// 地址: 0x46f330
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* ecx = &arg2[0xc3]
void* var_8 = &arg2[0xa0]
void* var_c = ecx
int32_t* eax_1 = &arg2[0xa0]

if (*(arg1 + 0xc) == 8)
    sub_41cd30(eax_1, ecx, eax_1, &arg2[0xe6], &arg2[0x167])
    return sub_46f230(&arg2[0x9d])

if (*(arg1 + 0xc) == 5)
    if (eax_1[0x13] != 0 && eax_1[0x12].b != 0)
        sub_4b8ff0(eax_1, *arg2, &arg2[0x22], eax_1)
        eax_1 = &arg2[0xa0]
        ecx = &arg2[0xc3]
    
    return sub_4b9450(eax_1, eax_1, &arg2[0x22], ecx)

if (*(arg1 + 0x638) == 0xffffffff && (eax_1[0x13] == 0 || eax_1[0x12].b == 0))
    return sub_41cd30(eax_1, ecx, eax_1, &arg2[0xe6], &arg2[0x167])

int32_t* eax_5 = *(arg1 + 0xc) - 1

if (eax_5 u> 8)
    return sub_41cd30(eax_5, &arg2[0xc3], &arg2[0xa0], &arg2[0xe6], &arg2[0x167])

jump(*(((*(arg1 + 0xc) - 1) << 2) + sub_46f638))
