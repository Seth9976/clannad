// 函数: sub_470230
// 地址: 0x470230
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = data_1320e8c

if (edx == 0)
    return 

arg1 = *(arg2 + 0x10)

if (arg1 s< 0 || arg1 s>= data_1320e90)
    return 

int32_t eax = *arg3
int32_t eax_1 = arg3[1]
void* ecx_2 = arg1 * 0xa8 + edx
int32_t eax_2 = arg3[2]
int32_t eax_3 = arg3[0x14]
int32_t eax_4 = arg3[0x15]
void* var_14_1 = ecx_2
int32_t eax_6
int32_t edx_1

if (arg3[0x16] == 0x3e8 && arg3[0x17] == 0x3e8)
    edx_1:eax_6 = sx.q(arg3[0x18])

if (arg3[0x16] != 0x3e8 || arg3[0x17] != 0x3e8 || mods.dp.d(edx_1:eax_6, 0xe10) != 0)
    if (*(arg2 + 0x14) != 0xffffffff)
        *arg3 = *(arg2 + 0x234)
        sub_425e50(*(arg2 + 0x14), arg3)
        ecx_2 = var_14_1
    
    if (*(arg2 + 0x18) != 0xffffffff)
        *arg3 = *(arg2 + 0x244)
        arg3[1] = *(ecx_2 + 0x70) + eax_1
        arg3[2] = *(ecx_2 + 0x74) + eax_2
        arg3[0x14] = eax_3 - *(ecx_2 + 0x70)
        arg3[0x15] = eax_4 - *(ecx_2 + 0x74)
        sub_425e50(*(arg2 + 0x18), arg3)
    
    if (*(arg2 + 0x1c) != 0xffffffff)
        *arg3 = *(arg2 + 0x25c)
        arg3[1] = *(var_14_1 + 0x9c) + eax_1
        arg3[2] = *(var_14_1 + 0xa0) + eax_2
        arg3[0x14] = eax_3 - *(var_14_1 + 0x9c)
        arg3[0x15] = eax_4 - *(var_14_1 + 0xa0)
        sub_425e50(*(arg2 + 0x1c), arg3)
else
    if (*(arg2 + 0x14) != 0xffffffff)
        *arg3 = *(arg2 + 0x234)
        sub_425d50(*(arg2 + 0x14), arg3)
        ecx_2 = var_14_1
    
    if (*(arg2 + 0x18) != 0xffffffff)
        *arg3 = *(arg2 + 0x244)
        arg3[1] = *(ecx_2 + 0x70) + eax_1
        arg3[2] = *(ecx_2 + 0x74) + eax_2
        sub_425d50(*(arg2 + 0x18), arg3)
    
    if (*(arg2 + 0x1c) != 0xffffffff)
        *arg3 = *(arg2 + 0x25c)
        arg3[1] = *(var_14_1 + 0x9c) + eax_1
        arg3[2] = *(var_14_1 + 0xa0) + eax_2
        sub_425d50(*(arg2 + 0x1c), arg3)

*arg3 = eax
arg3[1] = eax_1
arg3[2] = eax_2
arg3[0x14] = eax_3
arg3[0x15] = eax_4
