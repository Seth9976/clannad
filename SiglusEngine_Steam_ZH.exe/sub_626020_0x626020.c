// 函数: sub_626020
// 地址: 0x626020
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edx = arg3
int32_t* var_8 = edx
int32_t i_5 = (arg2 - edx) s>> 3
int32_t i_6 = (arg4 - edx) s>> 3
int32_t i_3 = i_5
int32_t i_4 = i_6
int32_t i_2 = i_6

if (i_5 != 0)
    int32_t i
    
    do
        int32_t i_7 = i_4
        i_4 = i_3
        i = mods.dp.d(sx.q(i_7), i_3)
        i_3 = i
    while (i != 0)
    edx = var_8
    i_2 = i_4

if (i_4 s>= i_6 || i_4 s<= 0)
    return 

arg1 = i_5 << 3
void* edi_2 = &edx[i_4 * 2]
int32_t i_1

do
    int32_t* eax_1 = arg1 + edi_2
    int32_t* esi = edi_2
    int32_t* var_10_1 = esi
    
    if (eax_1 == arg4)
        eax_1 = edx
    
    do
        int32_t edx_3 = *esi
        int32_t esi_1 = esi[1]
        *var_10_1 = *eax_1
        var_10_1[1] = eax_1[1]
        eax_1[1] = esi_1
        esi = eax_1
        int32_t ecx_4 = (arg4 - eax_1) s>> 3
        *eax_1 = edx_3
        edx = var_8
        var_10_1 = esi
        
        if (i_5 s>= ecx_4)
            eax_1 = &edx[(i_5 - ecx_4) * 2]
        else
            eax_1 = &eax_1[i_5 * 2]
    while (eax_1 != edi_2)
    
    arg1 = i_5 << 3
    i_1 = i_2 - 1
    edi_2 -= 8
    i_2 = i_1
while (i_1 s> 0)
