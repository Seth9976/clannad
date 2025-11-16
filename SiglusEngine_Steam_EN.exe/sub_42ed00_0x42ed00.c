// 函数: sub_42ed00
// 地址: 0x42ed00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* ebx = arg2
void* var_8 = ebx
int32_t edi = *(ebx + 0x10)
int32_t result = *(ebx + 0xc)

if (edi == 0)
    return result

int32_t edx = 0
int32_t esi_1 = 0
void* eax_2 = result * 0x30 + *(arg1 + 0x170)
int32_t i_1 = 0
int32_t var_c_1 = 0

if (edi s>= 2)
    i_1 = ((edi - 2) u>> 1) + 1
    var_c_1 = i_1 * 2
    ebx = var_8
    int32_t i
    
    do
        edx += *(eax_2 + 0x20)
        esi_1 += *(eax_2 + 0x50)
        eax_2 += 0x60
        i = i_1
        i_1 -= 1
    while (i != 1)

if (var_c_1 s< edi)
    i_1 = *(eax_2 + 0x20)

int32_t eax_3 = edx + esi_1
int32_t ecx_2 = i_1 + eax_3
uint32_t edi_1

if (i_1 == neg.d(eax_3))
    edi_1 = 0
else
    int32_t esi_2 = data_1392710
    
    if (data_20bfa84 == esi_2)
        int32_t eax_17 = data_20bfa98 + 0x2710
        int32_t ecx_5 = data_20bfa94 + 0x3e8
        int32_t edx_6 = data_20bfa90 + 0x64
        int32_t ebx_2 = data_20bfa88
        int32_t esi_5 = data_20bfa8c + 1
        data_20bfa98 = eax_17
        data_20bfa94 = ecx_5
        int32_t ecx_6 = data_20bfa70
        data_20bfa88 = ebx_2 + 1
        data_20bfa8c = esi_5
        int32_t ecx_7 = ecx_6 + eax_17 + ecx_5 + edx_6 + esi_5 + ebx_2 + 1
        data_20bfa90 = edx_6
        int32_t eax_22
        
        if (((ebx_2 + 1).b & 1) == 0)
            eax_22 = (ecx_7 s>> 1) * 0xb
        else
            eax_22 = (ecx_7 s>> 2) * 3
        
        data_20bfa70 = eax_22
        int32_t eax_24 = sub_5f1303() + data_20bfa98
        int32_t ebx_4 = data_20bfa94
        int32_t edi_2 = data_20bfa90
        int32_t esi_6 = data_20bfa8c
        int32_t ecx_10 = data_1392710
        int32_t edx_8 = data_20bfa70 + eax_24 + ebx_4 + edi_2 + esi_6 + data_20bfa88
        bool cond:1_1 = data_20bfa88 s<= 0x64
        data_20bfa70 = edx_8
        
        if (not(cond:1_1))
            data_20bfa88 = ecx_10 & 0xf
        
        if (esi_6 s> 0x64)
            data_20bfa8c = ecx_10 & 0xf
        
        if (edi_2 s> 0x3e8)
            data_20bfa90 = zx.d(ecx_10.b)
        
        if (ebx_4 s> 0x2710)
            data_20bfa94 = ecx_10 & 0xfff
        
        ebx = var_8
        
        if (data_20bfa98 s> 0x186a0)
            data_20bfa98 = zx.d(ecx_10.w)
        
        edi_1 = modu.dp.d(0:edx_8, ecx_2)
    else
        int32_t eax_6 = (zx.d(esi_2.w) + data_20bfa70) s>> 1
        data_20bfa84 = esi_2
        int32_t esi_3 = esi_2 & 0xfff
        data_20bfa70 = eax_6 * 3
        int32_t eax_8 = sub_5f1303()
        int32_t ecx_3 = data_1392710
        int32_t edx_2 = data_20bfa70 + eax_8 + esi_3
        data_20bfa70 = edx_2
        int32_t eax_11 = ecx_3 & 0xf
        data_20bfa94 = esi_3
        data_20bfa88 = eax_11
        data_20bfa8c = eax_11
        data_20bfa90 = zx.d(ecx_3.b)
        data_20bfa98 = zx.d(ecx_3.w)
        edi_1 = modu.dp.d(0:edx_2, ecx_2)

int32_t edx_11 = 0
int32_t esi_7 = *(ebx + 0x10)
int32_t eax_40 = 0

if (esi_7 s> 0)
    int32_t ecx_15 = *(ebx + 0xc) * 0x30 + *(arg1 + 0x170) + 0x20
    
    do
        edx_11 += *ecx_15
        
        if (edi_1 s< edx_11)
            break
        
        eax_40 += 1
        ecx_15 += 0x30
    while (eax_40 s< esi_7)

if (eax_40 == esi_7)
    eax_40 = 0

return eax_40 + *(ebx + 0xc)
