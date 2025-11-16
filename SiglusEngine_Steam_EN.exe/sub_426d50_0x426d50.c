// 函数: sub_426d50
// 地址: 0x426d50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0)
    return 

uint32_t edx_1 = zx.d(*arg1)
uint32_t var_8 = zx.d(*(arg1 + 1))
uint32_t var_c = zx.d(*(arg1 + 3))

if (edx_1 != 2)
    return 

int32_t i_1 = *(arg1 + 5)
uint32_t* var_28_1 = &var_c
uint32_t eax = sub_426c20(&var_8, i_1, &arg1[9], data_70300c, &arg1[5], &var_8)

if (eax s< 0)
    return 

*(arg1 + 1) = var_8.w
*(arg1 + 3) = var_c.w
uint32_t eax_5 = eax * 3
int32_t esi_2 = *(arg1 + 9 + (eax_5 << 3))
int32_t edi_2 = *(arg1 + 9 + (eax_5 << 3) + 4)
uint32_t ecx_6 = *(arg1 + 9 + (eax_5 << 3) + 8) - esi_2 + 1
int32_t eax_7 = *(arg1 + 9 + (eax_5 << 3) + 0xc) - edi_2
var_8 = ecx_6
int32_t var_18_1 = esi_2
var_c = eax_7 + 1
eax = divs.dp.d(sx.q(data_70300c), ecx_6)

if (eax == 0)
    eax = 1

int32_t edx_5 = 0
uint32_t var_14_1 = eax

if (i_1 s<= 0)
    return 

eax = &arg1[0x11]
int32_t i

do
    if (*(eax - 8) != 0 || *(eax - 4) != 0 || *eax != 0 || *(eax + 4) != 0)
        *(eax - 8) = esi_2
        *(eax - 4) = edi_2
        *eax = ecx_6 - 1 + esi_2
        edx_5 += 1
        *(eax + 4) = var_c - 1 + edi_2
        ecx_6 = var_8
        esi_2 += ecx_6
        
        if (edx_5 s>= var_14_1)
            esi_2 = var_18_1
            edx_5 = 0
            edi_2 += var_c
    
    eax += 0x18
    i = i_1
    i_1 -= 1
while (i != 1)
