// 函数: sub_46a2a3
// 地址: 0x46a2a3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi
esi.w = *arg2
int32_t edi
int32_t var_68 = edi
float var_5c
uint16_t edx
uint16_t edx_1 = sub_468ea4(&var_5c, edx, esi)
int32_t edi_1
edi_1.w = arg2[1]
float var_4c
sub_468ea4(&var_4c, edx_1, edi_1)
float var_58
float var_54
float var_50
float var_48
float var_44
float var_40
float var_30
float var_28

if (esi.w u> edi_1.w)
    long double x87_r6_16 = fconvert.t(0.333333343f)
    float var_3c_1 =
        fconvert.s((fconvert.t(var_4c) - fconvert.t(var_5c)) * x87_r6_16 + fconvert.t(var_5c))
    long double x87_r5_5 = fconvert.t(var_48) - fconvert.t(var_58)
    float var_38_1 = fconvert.s(x87_r5_5 * x87_r6_16 + fconvert.t(var_58))
    long double x87_r5_9 = fconvert.t(var_44) - fconvert.t(var_54)
    float var_8_1 = fconvert.s(x87_r5_9)
    float var_34_1 = fconvert.s(x87_r5_9 * x87_r6_16 + fconvert.t(var_54))
    long double x87_r5_13 = fconvert.t(var_40) - fconvert.t(var_50)
    float var_c_1 = fconvert.s(x87_r5_13)
    var_30 = fconvert.s(x87_r5_13 * x87_r6_16 + fconvert.t(var_50))
    long double x87_r6_17 = fconvert.t(0.666666687f)
    float var_2c_1 = fconvert.s(x87_r6_16 * x87_r6_17 + fconvert.t(var_5c))
    var_28 = fconvert.s(fconvert.t(fconvert.s(x87_r5_5)) * x87_r6_17 + fconvert.t(var_58))
    float var_24_1 = fconvert.s(fconvert.t(var_8_1) * x87_r6_17 + fconvert.t(var_54))
    float var_20 = fconvert.s(fconvert.t(var_c_1) * x87_r6_17 + fconvert.t(var_50))
else
    long double x87_r7 = fconvert.t(0.5f)
    float var_3c =
        fconvert.s((fconvert.t(var_4c) - fconvert.t(var_5c)) * x87_r7 + fconvert.t(var_5c))
    float var_38 =
        fconvert.s((fconvert.t(var_48) - fconvert.t(var_58)) * x87_r7 + fconvert.t(var_58))
    float var_34 =
        fconvert.s((fconvert.t(var_44) - fconvert.t(var_54)) * x87_r7 + fconvert.t(var_54))
    var_30 = fconvert.s((fconvert.t(var_40) - fconvert.t(var_50)) * x87_r7 + fconvert.t(var_50))
    float var_1c_1 = fconvert.s(float.t(0))
    float var_18 = fconvert.s(float.t(0))
    float var_14_1 = fconvert.s(float.t(0))
    float var_10_1 = fconvert.s(float.t(0))
    float var_2c = var_1c_1
    float* edi_2 = &var_28
    float* esi_1 = &var_18
    *edi_2 = *esi_1
    void* edi_3 = &edi_2[1]
    void* esi_2 = &esi_1[1]
    *edi_3 = *esi_2
    *(edi_3 + 4) = *(esi_2 + 4)
uint32_t ebx_1 = *(arg2 + 4)
int32_t* eax_2 = arg1
int32_t i_1 = 0x10
int32_t i

do
    int32_t __saved_ebp
    *eax_2 = (&__saved_ebp)[(ebx_1 & 3) * 4 - 0x16]
    void* edi_7 = &eax_2[1]
    void* esi_6 = &(&__saved_ebp)[(ebx_1 & 3) * 4 - 0x15]
    *edi_7 = *esi_6
    void* edi_8 = edi_7 + 4
    void* esi_7 = esi_6 + 4
    *edi_8 = *esi_7
    eax_2 = &eax_2[4]
    ebx_1 u>>= 2
    i = i_1
    i_1 -= 1
    *(edi_8 + 4) = *(esi_7 + 4)
while (i != 1)
return 0
