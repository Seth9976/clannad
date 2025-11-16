// 函数: sub_45f2ab
// 地址: 0x45f2ab
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0
int32_t eax_2 = sub_745f3f(arg2 * 0x44)
int32_t eax_3

if (eax_2 == 0)
    eax_3 = 0
else
    sub_61cdd0(eax_2, 0x44, arg2, sub_52e900)
    eax_3 = eax_2

*arg1 = eax_3

if (eax_3 == 0)
    return 0x8007000e

int32_t edx_1 = 0

if (arg2 u> 0)
    int32_t eax_4 = 0
    float var_1c_1 = fconvert.s(float.t(0))
    int32_t edi
    int32_t var_44_1 = edi
    float var_18 = fconvert.s(float.t(0))
    float var_14_1 = fconvert.s(float.t(0))
    float var_28_1 = fconvert.s(float.t(0))
    float var_24 = fconvert.s(float.t(0))
    float var_20 = fconvert.s(float.t(0))
    float var_34 = fconvert.s(float.t(1))
    float var_30_1 = fconvert.s(float.t(1))
    float var_2c = fconvert.s(float.t(0))
    float var_10_1 = fconvert.s(float.t(0))
    float var_c_1 = fconvert.s(float.t(0))
    
    do
        float* edi_2 = *arg1 + eax_4
        *edi_2 = var_1c_1
        void* edi_3 = &edi_2[1]
        float* esi_1 = &var_18
        *edi_3 = *esi_1
        *(edi_3 + 4) = esi_1[1]
        float* edi_6 = eax_4 + *arg1 + 0x24
        *edi_6 = var_28_1
        void* edi_7 = &edi_6[1]
        float* esi_5 = &var_24
        *edi_7 = *esi_5
        *(edi_7 + 4) = esi_5[1]
        float* edi_10 = eax_4 + *arg1 + 0xc
        *edi_10 = fconvert.s(float.t(1))
        void* edi_11 = &edi_10[1]
        float* esi_9 = &var_34
        *edi_11 = *esi_9
        void* edi_12 = edi_11 + 4
        void* esi_10 = &esi_9[1]
        *edi_12 = *esi_10
        *(edi_12 + 4) = *(esi_10 + 4)
        int32_t esi_13 = *arg1
        *(eax_4 + esi_13 + 0x1c) = var_10_1
        *(eax_4 + esi_13 + 0x20) = var_c_1
        *(eax_4 + *arg1 + 0x30) = edx_1
        *(eax_4 + *arg1 + 0x34) = edx_1
        *(eax_4 + *arg1 + 0x38) = 0
        *(eax_4 + *arg1 + 0x40) = edx_1
        *(eax_4 + *arg1 + 0x3a) = 0
        *(eax_4 + *arg1 + 0x3c) = 0
        edx_1 += 1
        eax_4 += 0x44
    while (edx_1 u< arg2)

return result
