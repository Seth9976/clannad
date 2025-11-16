// 函数: sub_4db91b
// 地址: 0x4db91b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i = arg2[0xa]
int32_t edi = arg2[9]

for (; i u< 1; i += 8)
    int32_t esi_1 = arg2[6]
    int32_t ebx_1 = arg2[5]
    char ebx_3
    
    if (esi_1 u>= ebx_1)
        if (esi_1 != ebx_1)
            arg2[1] = 1
        
        ebx_3 = 0
    else
        ebx_3 = arg2[2][esi_1]
        arg2[6] = esi_1 + 1
    
    edi |= zx.d(ebx_3) << i.b

uint32_t edi_1 = edi u>> 1
*arg2 = edi & 1
int32_t i_1

for (i_1 = i - 1; i_1 u< 2; i_1 += 8)
    int32_t esi_7 = arg2[6]
    int32_t ebx_4 = arg2[5]
    char ebx_6
    
    if (esi_7 u>= ebx_4)
        if (esi_7 != ebx_4)
            arg2[1] = 1
        
        ebx_6 = 0
    else
        ebx_6 = arg2[2][esi_7]
        arg2[6] = esi_7 + 1
    
    edi_1 |= zx.d(ebx_6) << i_1.b

arg2[0xa] = i_1 - 2
bool cond:1 = arg2[1] != 0
arg2[9] = edi_1 u>> 2

if (cond:1)
    return 1

int32_t edi_2 = edi_1 & 3

if (edi_2 == 0)
    return sub_4db838(0, arg2, 0)

if (edi_2 == 1)
    return sub_4dafd5(0, arg2, 0xb9af08, 0xb9ae08, 9, 5, 0)

if (edi_2 == 2)
    return sub_4db32c(arg2)

return 2
