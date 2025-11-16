// 函数: sub_4e3dd4
// 地址: 0x4e3dd4
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t* eax = arg2[2]
int32_t ecx = eax[3]
int32_t ebx = *eax
int32_t eax_1 = 0
int32_t edi
int32_t var_24 = edi
int32_t edi_1 = *arg2
*(arg1 + 0x1448) = 0
*(arg1 + 0x144c) = 0x23d

if (ecx s> 0)
    do
        if (*(edi_1 + (eax_1 << 2)) == 0)
            *(edi_1 + (eax_1 << 2) + 2) = 0
        else
            *(arg1 + 0x1448) += 1
            *(arg1 + (*(arg1 + 0x1448) << 2) + 0xb54) = eax_1
            var_c = eax_1
            *(eax_1 + arg1 + 0x1450) = 0
        
        eax_1 += 1
    while (eax_1 s< ecx)

while (*(arg1 + 0x1448) s< 2)
    int32_t eax_2
    
    if (var_c s>= 2)
        eax_2 = 0
    else
        var_c += 1
        eax_2 = var_c
    
    *(arg1 + 0x1448) += 1
    *(arg1 + (*(arg1 + 0x1448) << 2) + 0xb54) = eax_2
    int32_t ecx_4 = eax_2 << 2
    *(ecx_4 + edi_1) = 1
    *(arg1 + eax_2 + 0x1450) = 0
    *(arg1 + 0x16a0) -= 1
    
    if (ebx != 0)
        *(arg1 + 0x16a4) -= zx.d(*(ecx_4 + ebx + 2))

arg2[1] = var_c
int32_t eax_6
int32_t edx_1
edx_1:eax_6 = sx.q(*(arg1 + 0x1448))

for (int32_t i = (eax_6 - edx_1) s>> 1; i s>= 1; i -= 1)
    sub_4e2e65(arg1, edi_1, i)

int32_t var_10 = ecx

do
    int32_t eax_10 = *(arg1 + 0x1448)
    int32_t ecx_5 = *(arg1 + (eax_10 << 2) + 0xb54)
    int32_t ebx_2 = *(arg1 + 0xb58)
    *(arg1 + 0x1448) = eax_10 - 1
    *(arg1 + 0xb58) = ecx_5
    sub_4e2e65(arg1, edi_1, 1)
    *(arg1 + 0x144c) -= 1
    int32_t eax_13 = *(arg1 + 0xb58)
    *(arg1 + (*(arg1 + 0x144c) << 2) + 0xb54) = ebx_2
    *(arg1 + 0x144c) -= 1
    *(arg1 + (*(arg1 + 0x144c) << 2) + 0xb54) = eax_13
    int16_t* ecx_8 = edi_1 + (eax_13 << 2)
    int16_t* var_14_1 = ecx_8
    ecx_8.w = *ecx_8
    int16_t* edx_2 = edi_1 + (ebx_2 << 2)
    ecx_8.w += *edx_2
    int16_t* var_18_1 = edx_2
    edx_2.w = ecx_8.w
    *(edi_1 + (var_10 << 2)) = edx_2.w
    ebx_2.b = *(arg1 + ebx_2 + 0x1450)
    eax_13.b = *(arg1 + eax_13 + 0x1450)
    char eax_14
    
    if (ebx_2.b u< eax_13.b)
        eax_14 = eax_13.b
    else
        eax_14 = ebx_2.b
    
    *(arg1 + var_10 + 0x1450) = eax_14 + 1
    var_14_1[1] = var_10.w
    var_18_1[1] = var_10.w
    *(arg1 + 0xb58) = var_10
    var_10 += 1
    sub_4e2e65(arg1, edi_1, 1)
while (*(arg1 + 0x1448) s>= 2)

*(arg1 + 0x144c) -= 1
*(arg1 + (*(arg1 + 0x144c) << 2) + 0xb54) = *(arg1 + 0xb58)
sub_4e2f19(arg2, arg1)
return sub_4e3d4f(edi_1, var_c, arg1 + 0xb34)
