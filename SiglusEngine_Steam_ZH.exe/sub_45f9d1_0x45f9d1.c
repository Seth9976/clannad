// 函数: sub_45f9d1
// 地址: 0x45f9d1
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0
int32_t i_1 = arg2
int32_t eax_2 = sub_745f3f(i_1 << 5)
int32_t eax_3

if (eax_2 == 0)
    eax_3 = 0
else
    sub_61cdd0(eax_2, 0x20, i_1, sub_52e900)
    eax_3 = eax_2

*arg1 = eax_3

if (eax_3 == 0)
    return 0x8007000e

if (i_1 u> 0)
    int32_t* eax_4 = nullptr
    int32_t edi
    int32_t var_28_1 = edi
    float var_18 = fconvert.s(float.t(0))
    float var_14_1 = fconvert.s(float.t(0))
    float var_10_1 = fconvert.s(float.t(0))
    float var_c_1 = fconvert.s(float.t(0))
    int32_t i
    
    do
        *(eax_4 + *arg1) = 0xffffffff
        *(eax_4 + *arg1 + 4) = 0xffffffff
        float* edi_1 = eax_4 + *arg1 + 0x14
        *edi_1 = fconvert.s(float.t(0))
        void* edi_2 = &edi_1[1]
        float* esi_1 = &var_18
        *edi_2 = *esi_1
        *(edi_2 + 4) = esi_1[1]
        int32_t edx_4 = *arg1
        *(eax_4 + edx_4 + 0xc) = var_10_1
        *(eax_4 + edx_4 + 0x10) = var_c_1
        void* edx_6 = eax_4 + *arg1 + 8
        *edx_6 &= 0xfe
        void* edx_8 = eax_4 + *arg1 + 8
        *edx_8 &= 0xfd
        eax_4 = &eax_4[8]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
