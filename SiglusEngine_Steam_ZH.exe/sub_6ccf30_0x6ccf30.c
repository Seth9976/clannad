// 函数: sub_6ccf30
// 地址: 0x6ccf30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 0x241) != 0 || (*(arg1 + 0x306) & 2) == 0)
    return 

int32_t eax_1 = *(arg1 + 0x2f0)
int32_t ecx = *(arg1 + 0x2fc)
int32_t edx_1 = *(arg1 + 0x2e4)
int32_t var_8 = edx_1
int32_t var_c = eax_1
int32_t edi_2 = ecx + eax_1 + edx_1
int32_t var_10 = ecx

if (edi_2 s<= 0 || edx_1 s< 0)
    sub_6d42e0(arg1, "internal error handling cHRM->XYZ")
    noreturn

int32_t eax_2 = sub_6cd450(eax_1, edx_1, &var_8, 0x8000, edi_2)

if (eax_2 == 0)
    sub_6d42e0(arg1, "internal error handling cHRM->XYZ")
    noreturn

int32_t ebx_1 = var_8

if (ebx_1 u> 0x8000 || eax_1 s< 0)
    sub_6d42e0(arg1, "internal error handling cHRM->XYZ")
    noreturn

int32_t eax_3 = sub_6cd450(eax_2, eax_1, &var_c, 0x8000, edi_2)

if (eax_3 == 0)
    sub_6d42e0(arg1, "internal error handling cHRM->XYZ")
    noreturn

int32_t edi_3 = var_c

if (edi_3 u> 0x8000 || ecx s< 0)
    sub_6d42e0(arg1, "internal error handling cHRM->XYZ")
    noreturn

if (sub_6cd450(eax_3, ecx, &var_10, 0x8000, edi_2) == 0)
    sub_6d42e0(arg1, "internal error handling cHRM->XYZ")
    noreturn

int32_t ecx_4 = var_10

if (ecx_4 u> 0x8000)
    sub_6d42e0(arg1, "internal error handling cHRM->XYZ")
    noreturn

int32_t eax_6 = ecx_4 + edi_3 + ebx_1

if (eax_6 s> 0x8001)
    sub_6d42e0(arg1, "internal error handling cHRM->XYZ")
    noreturn

int32_t eax_7

if (eax_6 s> 0x8000)
    eax_7 = 0xffffffff
label_6cd035:
    
    if (ebx_1 s> edi_3)
        if (ebx_1 s< ecx_4)
            ecx_4 += eax_7
        else
            ebx_1 += eax_7
    else if (edi_3 s>= ecx_4)
        edi_3 += eax_7
    else if (ebx_1 s< edi_3 || ebx_1 s< ecx_4)
        ecx_4 += eax_7
    else
        ebx_1 += eax_7
else if (eax_6 s< 0x8000)
    eax_7 = 1
    goto label_6cd035

if (ecx_4 + edi_3 + ebx_1 != 0x8000)
    sub_6d42e0(arg1, "internal error handling cHRM coefficients")
    noreturn

*(arg1 + 0x242) = ebx_1.w
*(arg1 + 0x244) = edi_3.w
