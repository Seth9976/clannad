// 函数: sub_45520e
// 地址: 0x45520e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_24 = edi
int32_t var_8 = 0

if (arg3 == 0)
    var_8 = 0x8876086c
    return 

int32_t eax_1 = sub_4538a9(arg1, arg2, 1, 0)

if (eax_1 == 0)
    var_8 = 0x8876086c
    return 

int32_t* eax_2 = *(eax_1 + 4)

if (eax_2[4] != 0 && *(eax_1 + 8) == 0xffffffff)
    var_8 = 0x8876086c
    return 

int32_t edx_1 = eax_2[1]

if (edx_1 s< 0 || edx_1 s> 1)
    var_8 = 0x8876086c
    return 

int32_t edx_2 = eax_2[5]
int32_t ebx_1 = *eax_2

if (eax_2[6] != 1)
    var_8 = 0x8876086c
    return 

if (edx_2 u> 4)
    edx_2 = 4

*arg3 = 0
void* edi_2 = &arg3[1]
*edi_2 = 0
void* edi_3 = edi_2 + 4
*edi_3 = 0
*(edi_3 + 4) = 0

if (ebx_1 == 1)
    int32_t esi_10 = 0
    
    if (edx_2 u> 0)
        do
            uint32_t ebx_5
            ebx_5.b = *(*eax_1 + (esi_10 << 2)) != 0
            arg3[esi_10] = fconvert.s(float.t(ebx_5))
            esi_10 += 1
        while (esi_10 u< edx_2)
else if (ebx_1 == 2)
    if (edx_2 != 1)
        int32_t eax_7 = 0
        
        if (edx_2 u> 0)
            do
                arg3[eax_7] = fconvert.s(float.t(*(*eax_1 + (eax_7 << 2))))
                eax_7 += 1
            while (eax_7 u< edx_2)
    else
        long double x87_r7_2 = fconvert.t(0.00392156886f)
        int32_t eax_5 = **eax_1
        float var_14 = fconvert.s(float.t(zx.d((eax_5 u>> 8).b)) * x87_r7_2)
        float var_10_1 = fconvert.s(float.t(zx.d(eax_5.b)) * x87_r7_2)
        float var_c_1 = fconvert.s(float.t(eax_5 u>> 0x18) * x87_r7_2)
        *arg3 = fconvert.s(float.t(zx.d((eax_5 u>> 0x10).b)) * x87_r7_2)
        void* edi_7 = &arg3[1]
        void* esi_4 = &var_14
        *edi_7 = *esi_4
        void* edi_8 = edi_7 + 4
        void* esi_5 = esi_4 + 4
        *edi_8 = *esi_5
        *(edi_8 + 4) = *(esi_5 + 4)
else if (ebx_1 != 3)
    var_8 = 0x8876086c
else
    int32_t eax_3 = 0
    
    if (edx_2 u> 0)
        do
            arg3[eax_3] = fconvert.s(fconvert.t(*(*eax_1 + (eax_3 << 2))))
            eax_3 += 1
        while (eax_3 u< edx_2)
