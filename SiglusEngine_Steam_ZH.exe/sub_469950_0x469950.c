// 函数: sub_469950
// 地址: 0x469950
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_2ec = edi
void* ebx = arg1
int32_t i_3
int32_t i_4

if (arg4 != 0)
    i_3 = 0x10
    int32_t edx_1 = 0
    float* ecx_1 = ebx + 0xc
    int32_t i_2 = i_3
    int32_t i
    
    do
        long double x87_r7_1 = fconvert.t(*ecx_1)
        long double temp1_1 = fconvert.t(0.5f)
        x87_r7_1 - temp1_1
        arg1.w = (x87_r7_1 < temp1_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_1, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe
        bool p_1 = unimplemented  {test ah, 0x5}
        
        if (not(p_1))
            edx_1 += 1
        
        ecx_1 = &ecx_1[4]
        i = i_2
        i_2 -= 1
    while (i != 1)
    
    if (edx_1 != 0x10)
        i_4 = sbb.d(0, 0, 0 u< edx_1) + 4
        goto label_4699b7
    
    arg3[1] = 0xffff
    *(arg3 + 4) = 0xffffffff
    *arg3 = 0
    return 

i_4 = 4
label_4699b7:
void var_1e0

if (arg5 != 0)
    i_3 = 0x40
    __builtin_memset(&var_1e0, 0, i_3 << 2)

int16_t x87status_1
int16_t temp0_1
temp0_1, x87status_1 = __fnstcw_memmem16(arg2)
arg4.w = temp0_1
int16_t x87control
int16_t x87status_2
x87control, x87status_2 = __fldcw_memmem16(arg4.w | 0xc00)
void* ecx_3 = &var_1e0 - ebx
void var_1d8
float var_58 = &var_1d8 - ebx
void var_1d4
void* ecx_6 = &var_1d4 - ebx
void var_1d0
void* ecx_7 = &var_1d0 - ebx
int16_t eax_5 = arg4.w
void var_1b4
void* ecx_9 = &var_1b4 - ebx
void var_1b0
void* ecx_10 = &var_1b0 - ebx
void var_194
float var_ac = &var_194 - ebx
void var_190
void* ecx_14 = &var_190 - ebx
void var_2e0
float* ecx_15 = &var_2e0 - ebx
void var_1a4
float* edx_2 = &var_1a4 - ebx
void var_1a0
float* edi_1 = &var_1a0 - ebx
arg4 = 0f
void* eax_6 = ebx + 8
void var_1dc
float var_20
float var_1c
float var_18
float var_14_1

for (int32_t i_1 = 0; i_1 u< 0x100; )
    var_1c = *(eax_6 - 8)
    var_18 = *(eax_6 - 4)
    var_14_1 = *eax_6
    
    if (arg5 != 0)
        var_1c = fconvert.s(fconvert.t(var_1c) + fconvert.t(*(&var_1e0 + i_1)))
        var_18 = fconvert.s(fconvert.t(var_18) + fconvert.t(*(&var_1dc + i_1)))
        var_14_1 = fconvert.s(fconvert.t(var_14_1) + fconvert.t(*(ecx_3 + eax_6)))
    
    long double x87_r7_13 = float.t(int.d(fconvert.t(fconvert.s(fconvert.t(var_1c) * fconvert.t(31f)
        + fconvert.t(0.5f))))) * fconvert.t(0.0322580636f)
    var_20 = fconvert.s(x87_r7_13)
    *(&var_2e0 + i_1) = fconvert.s(x87_r7_13)
    long double x87_r7_19 = float.t(int.d(fconvert.t(fconvert.s(fconvert.t(var_18) * fconvert.t(63f)
        + fconvert.t(0.5f))))) * fconvert.t(0.0158730168f)
    float var_8_5 = fconvert.s(x87_r7_19)
    void var_2dc
    *(&var_2dc + i_1) = fconvert.s(x87_r7_19)
    long double x87_r7_25 = float.t(int.d(fconvert.t(fconvert.s(
        fconvert.t(var_14_1) * fconvert.t(31f) + fconvert.t(0.5f))))) * fconvert.t(0.0322580636f)
    *(ecx_15 + eax_6) = fconvert.s(x87_r7_25)
    *(&var_2dc - ebx + eax_6) = fconvert.s(float.t(1))
    
    if (arg5 != 0)
        long double x87_r6_4 = fconvert.t(var_1c) - fconvert.t(var_20)
        int32_t esi_11 = arg4 & 3
        long double x87_r5_2 = fconvert.t(var_18) - fconvert.t(var_8_5)
        float var_40_1 = fconvert.s(x87_r5_2)
        long double x87_r4_2 = fconvert.t(var_14_1) - x87_r7_25
        float var_3c_1 = fconvert.s(x87_r4_2)
        
        if (esi_11 != 3)
            long double x87_r3_1 = fconvert.t(0.4375f)
            void* esi_13 = var_58 i+ eax_6
            *esi_13 = fconvert.s(x87_r6_4 * x87_r3_1 + fconvert.t(*esi_13))
            void* esi_15 = ecx_6 + eax_6
            *esi_15 = fconvert.s(x87_r5_2 * x87_r3_1 + fconvert.t(*esi_15))
            void* esi_17 = ecx_7 + eax_6
            *esi_17 = fconvert.s(x87_r4_2 * x87_r3_1 + fconvert.t(*esi_17))
            x87_r4_2 = x87_r3_1
        
        if (i_1 u>= 0xc0)
            x87_r7_25 = x87_r4_2
        else
            if (esi_11 != 0)
                long double x87_r3_2 = fconvert.t(0.1875f)
                void var_1b8
                float* esi_19 = &var_1b8 - ebx + eax_6
                *esi_19 = fconvert.s(x87_r6_4 * x87_r3_2 + fconvert.t(*esi_19))
                void* esi_21 = ecx_9 + eax_6
                *esi_21 = fconvert.s(x87_r5_2 * x87_r3_2 + fconvert.t(*esi_21))
                void* esi_23 = ecx_10 + eax_6
                *esi_23 = fconvert.s(x87_r4_2 * x87_r3_2 + fconvert.t(*esi_23))
                x87_r4_2 = x87_r3_2
            
            long double x87_r3_3 = fconvert.t(0.3125f)
            void var_1a8
            void* esi_25 = &var_1a8 - ebx + eax_6
            *esi_25 = fconvert.s(x87_r6_4 * x87_r3_3 + fconvert.t(*esi_25))
            *(edx_2 + eax_6) = fconvert.s(x87_r5_2 * x87_r3_3 + fconvert.t(*(edx_2 + eax_6)))
            *(edi_1 + eax_6) = fconvert.s(x87_r4_2 * x87_r3_3 + fconvert.t(*(edi_1 + eax_6)))
            
            if (esi_11 == 3)
                x87_r7_25 = x87_r3_3
            else
                void var_198
                float* esi_27 = &var_198 - ebx + eax_6
                *esi_27 = fconvert.s(x87_r3_3 * fconvert.t(0.0625f) + fconvert.t(*esi_27))
                float* esi_29 = var_ac i+ eax_6
                *esi_29 =
                    fconvert.s(fconvert.t(var_40_1) * fconvert.t(0.0625f) + fconvert.t(*esi_29))
                void* esi_31 = ecx_14 + eax_6
                *esi_31 =
                    fconvert.s(fconvert.t(var_3c_1) * fconvert.t(0.0625f) + fconvert.t(*esi_31))
    
    arg4 += 1
    i_1 += 0x10
    *(&i_3 + i_1) = fconvert.s(fconvert.t(var_20) * fconvert.t(data_b54dd0))
    *(&var_2ec + i_1) = fconvert.s(fconvert.t(var_8_5) * fconvert.t(data_b54dd4))
    *(ecx_15 + eax_6) = fconvert.s(x87_r7_25 * fconvert.t(data_b54dd8))
    eax_6 += 0x10

int16_t x87control_1
int16_t x87status_3
x87control_1, x87status_3 = __fldcw_memmem16(eax_5)
i_3 = i_4
float var_54
int16_t x87control_2
int80_t st0_1
st0_1, x87control_2 = sub_4693d0(x87control_1, &var_1c, &var_54, &var_2e0, i_3)
long double x87_r7_27 = fconvert.t((*".vW@")[0].d)
float var_dc = fconvert.s(fconvert.t(var_1c) * x87_r7_27)
long double x87_r6_20 = fconvert.t(data_b54de0[4][0].d)
float var_d8_1 = fconvert.s(fconvert.t(var_18) * x87_r6_20)
float var_d4_1 = fconvert.s(fconvert.t(var_14_1) * fconvert.t(data_b54de8))
float var_44 = fconvert.s(fconvert.t(var_54) * x87_r7_27)
float var_50
float var_40_2 = fconvert.s(fconvert.t(var_50) * x87_r6_20)
float var_4c
float var_3c_2 = fconvert.s(fconvert.t(var_4c) * fconvert.t(data_b54de8))
int32_t eax_7
int16_t x87control_3
eax_7, x87control_3 = sub_468fa6(&var_dc, x87control_2)
int16_t var_2c_2 = eax_7.w
int32_t eax_8
uint16_t edx_3
int16_t x87control_4
eax_8, edx_3, x87control_4 = sub_468fa6(&var_44, x87control_3)
int16_t var_24_2 = eax_8.w

if (i_4 == 4 && eax_7.w == eax_8.w)
    *(arg3 + 4) = 0
    *arg3 = eax_7.w
    arg3[1] = eax_8.w
    return 

sub_468ea4(&var_44, sub_468ea4(&var_dc, edx_3, eax_7), eax_8)
long double x87_r7_31 = fconvert.t(data_b54dd0)
var_1c = fconvert.s(fconvert.t(var_dc) * x87_r7_31)
long double x87_r6_23 = fconvert.t(data_b54dd4)
int32_t ecx_20
ecx_20.b = i_4 == 3
var_18 = fconvert.s(fconvert.t(var_d8_1) * x87_r6_23)
float var_14_2 = fconvert.s(fconvert.t(var_d4_1) * fconvert.t(data_b54dd8))
var_54 = fconvert.s(fconvert.t(var_44) * x87_r7_31)
var_50 = fconvert.s(fconvert.t(var_40_2) * x87_r6_23)
float var_4c_1 = fconvert.s(fconvert.t(var_3c_2) * fconvert.t(data_b54dd8))
float var_a8
float var_a4
float* esi_42

if (ecx_20 != sbb.d(&var_44, &var_44, eax_8.w u< eax_7.w) + 1)
    arg3[1] = eax_7.w
    *arg3 = eax_8.w
    var_a8 = var_54
    float* edi_7 = &var_a4
    float* esi_38 = &var_50
    *edi_7 = *esi_38
    void* edi_8 = &edi_7[1]
    void* esi_39 = &esi_38[1]
    *edi_8 = *esi_39
    *(edi_8 + 4) = *(esi_39 + 4)
    esi_42 = &var_1c
else
    *arg3 = eax_7.w
    arg3[1] = eax_8.w
    var_a8 = var_1c
    float* edi_3 = &var_a4
    float* esi_34 = &var_18
    *edi_3 = *esi_34
    void* edi_4 = &edi_3[1]
    void* esi_35 = &esi_34[1]
    *edi_4 = *esi_35
    *(edi_4 + 4) = *(esi_35 + 4)
    esi_42 = &var_54

float var_98_1 = *esi_42
float var_94
int32_t* edi_11 = &var_94
void* esi_43 = &esi_42[1]
*edi_11 = *esi_43
void* edi_12 = &edi_11[1]
void* esi_44 = esi_43 + 4
*edi_12 = *esi_44
*(edi_12 + 4) = *(esi_44 + 4)
long double x87_r7_36 = fconvert.t(var_98_1) - fconvert.t(var_a8)
float var_a0
int32_t var_8_6
long double x87_r5_21
float var_9c
float var_90
float var_8c

if (i_4 != 3)
    var_8_6 = 0xac43bc
    float var_88_2 = fconvert.s(fconvert.t(0.333333343f) * x87_r7_36 + fconvert.t(var_a8))
    long double x87_r6_33 = fconvert.t(var_94) - fconvert.t(var_a4)
    float var_84_2 = fconvert.s(fconvert.t(0.333333343f) * x87_r6_33 + fconvert.t(var_a4))
    long double x87_r5_26 = fconvert.t(var_90) - fconvert.t(var_a0)
    arg4 = fconvert.s(x87_r5_26)
    float var_80_2 = fconvert.s(fconvert.t(0.333333343f) * x87_r5_26 + fconvert.t(var_a0))
    long double x87_r4_19 = fconvert.t(var_8c) - fconvert.t(var_9c)
    float var_7c_2 = fconvert.s(fconvert.t(0.333333343f) * x87_r4_19 + fconvert.t(var_9c))
    long double x87_r3_7 = fconvert.t(0.666666687f)
    float var_78_1 = fconvert.s(x87_r7_36 * x87_r3_7 + fconvert.t(var_a8))
    float var_74_1 = fconvert.s(x87_r6_33 * x87_r3_7 + fconvert.t(var_a4))
    float var_70_1 = fconvert.s(x87_r5_26 * x87_r3_7 + fconvert.t(var_a0))
    float var_6c_1 = fconvert.s(x87_r4_19 * x87_r3_7 + fconvert.t(var_9c))
    x87_r5_21 = x87_r3_7
else
    var_8_6 = 0xac43cc
    float var_88_1 = fconvert.s(fconvert.t(0.5f) * x87_r7_36 + fconvert.t(var_a8))
    x87_r5_21 = fconvert.t(0.5f)
    float var_84_1 =
        fconvert.s((fconvert.t(var_94) - fconvert.t(var_a4)) * x87_r5_21 + fconvert.t(var_a4))
    long double x87_r4_8 = fconvert.t(var_90) - fconvert.t(var_a0)
    arg4 = fconvert.s(x87_r4_8)
    float var_80_1 = fconvert.s(x87_r4_8 * x87_r5_21 + fconvert.t(var_a0))
    float var_7c_1 =
        fconvert.s((fconvert.t(var_8c) - fconvert.t(var_9c)) * x87_r5_21 + fconvert.t(var_9c))
var_54 = fconvert.s(x87_r7_36)
long double x87_r6_35 = fconvert.t(arg4)
long double x87_r5_28 = float.t(i_4 - 1)

if (i_4 - 1 s< 0)
    x87_r5_28 = x87_r5_28 + fconvert.t(4.2949673e+09f)

float eax_16
eax_16.w = var_24_2
float var_30_2 = fconvert.s(x87_r5_28)
long double x87_r5_33

if (var_2c_2 == eax_16.w)
    x87_r5_33 = float.t(0)
else
    x87_r5_33 = fconvert.t(var_30_2)
        / (x87_r6_35 * x87_r6_35 + x87_r5_21 * x87_r5_21 + fconvert.t(var_54) * fconvert.t(var_54))

long double x87_r4_26 = fconvert.t(var_54) * x87_r5_33
var_20 = 0f
var_54 = fconvert.s(x87_r4_26)
var_50 = fconvert.s(x87_r5_33 * x87_r5_21)
float var_4c_2 = fconvert.s(x87_r5_33 * x87_r6_35)

if (arg5 != 0)
    i_3 = 0x40
    __builtin_memset(&var_1e0, 0, i_3 << 2)

int16_t x87status_4
int16_t temp0_2
temp0_2, x87status_4 = __fnstcw_memmem16(x87control_4)
arg4.w = temp0_2
int16_t x87control_5
int16_t x87status_5
x87control_5, x87status_5 = __fldcw_memmem16(arg4.w | 0xc00)
int16_t eax_19 = arg4.w
void* var_c_4 = &var_1e0
void var_1cc
var_58 = &var_1cc - ebx
arg4 = 0f
float* esi_47 = &var_1dc - ebx
void var_2d8
float* edx_5 = &var_2d8 - ebx
void var_19c
float* edi_15 = &var_19c - ebx
void* ecx_22 = ebx + 4
float* var_24_4 = esi_47
void var_18c
void* var_68_2 = &var_18c - ebx

while (true)
    void* eax_22
    
    if (i_4 != 3)
    label_46a08a:
        var_1c = fconvert.s(fconvert.t(data_b54dd0) * fconvert.t(*(ecx_22 - 4)))
        var_18 = fconvert.s(fconvert.t(data_b54dd4) * fconvert.t(*ecx_22))
        float var_14_3 = fconvert.s(fconvert.t(data_b54dd8) * fconvert.t(*(ecx_22 + 4)))
        
        if (arg5 != 0)
            var_1c = fconvert.s(fconvert.t(var_1c) + fconvert.t(*var_c_4))
            var_18 = fconvert.s(fconvert.t(var_18) + fconvert.t(*(ecx_22 + ecx_3)))
            var_14_3 = fconvert.s(fconvert.t(var_14_3) + fconvert.t(*(esi_47 + ecx_22)))
        
        long double x87_r7_57 = (fconvert.t(var_14_3) - fconvert.t(var_a0)) * fconvert.t(var_4c_2)
            + (fconvert.t(var_18) - fconvert.t(var_a4)) * fconvert.t(var_50)
            + (fconvert.t(var_1c) - fconvert.t(var_a8)) * fconvert.t(var_54)
        long double temp4_1 = fconvert.t(0f)
        x87_r7_57 - temp4_1
        eax_22.w = (x87_r7_57 < temp4_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_57, temp4_1) ? 1 : 0) << 0xa
            | (x87_r7_57 == temp4_1 ? 1 : 0) << 0xe | 0x3800
        bool p_3 = unimplemented  {test ah, 0x41}
        
        if (p_3)
            long double temp5_1 = fconvert.t(var_30_2)
            x87_r7_57 - temp5_1
            eax_22.w = (x87_r7_57 < temp5_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_57, temp5_1) ? 1 : 0) << 0xa
                | (x87_r7_57 == temp5_1 ? 1 : 0) << 0xe | 0x3800
            
            if ((eax_22:1.b & 1) != 0)
                eax_22 =
                    *(var_8_6 + (int.d(fconvert.t(fconvert.s(x87_r7_57 + fconvert.t(0.5f)))) << 2))
            else
                eax_22 = 1
        else
            eax_22 = nullptr
        
        var_20 = eax_22 << 0x1e | var_20 u>> 2
        
        if (arg5 != 0)
            eax_22 <<= 4
            int32_t esi_53 = arg4 & 3
            long double x87_r7_62 = (fconvert.t(var_1c) - fconvert.t(*(&var_a8 + eax_22)))
                * fconvert.t(*(edx_5 + ecx_22))
            long double x87_r6_44 = (fconvert.t(var_18) - fconvert.t(*(&var_a4 + eax_22)))
                * fconvert.t(*(edx_5 + ecx_22))
            float var_40_3 = fconvert.s(x87_r6_44)
            float var_3c_3 = fconvert.s((fconvert.t(var_14_3) - fconvert.t(*(&var_a0 + eax_22)))
                * fconvert.t(*(edx_5 + ecx_22)))
            
            if (esi_53 != 3)
                float* eax_28 = ecx_6 + ecx_22
                *eax_28 = fconvert.s(x87_r7_62 * fconvert.t(0.4375f) + fconvert.t(*eax_28))
                float* eax_30 = ecx_7 + ecx_22
                *eax_30 = fconvert.s(fconvert.t(0.4375f) * x87_r6_44 + fconvert.t(*eax_30))
                eax_22 = var_58 i+ ecx_22
                *eax_22 =
                    fconvert.s(fconvert.t(var_3c_3) * fconvert.t(0.4375f) + fconvert.t(*eax_22))
            
            if (arg4 u< 0xc)
                if (esi_53 != 0)
                    float* eax_33 = ecx_9 + ecx_22
                    *eax_33 = fconvert.s(x87_r7_62 * fconvert.t(0.1875f) + fconvert.t(*eax_33))
                    float* eax_35 = ecx_10 + ecx_22
                    *eax_35 = fconvert.s(fconvert.t(0.1875f) * x87_r6_44 + fconvert.t(*eax_35))
                    void var_1ac
                    float* eax_37 = &var_1ac - ebx + ecx_22
                    *eax_37 =
                        fconvert.s(fconvert.t(var_3c_3) * fconvert.t(0.1875f) + fconvert.t(*eax_37))
                
                float* eax_39 = edx_2 + ecx_22
                *eax_39 = fconvert.s(x87_r7_62 * fconvert.t(0.3125f) + fconvert.t(*eax_39))
                eax_22 = edi_1 + ecx_22
                *eax_22 = fconvert.s(x87_r6_44 * fconvert.t(0.3125f) + fconvert.t(*eax_22))
                *(edi_15 + ecx_22) = fconvert.s(fconvert.t(var_3c_3) * fconvert.t(0.3125f)
                    + fconvert.t(*(edi_15 + ecx_22)))
                
                if (esi_53 != 3)
                    float* eax_42 = var_ac i+ ecx_22
                    *eax_42 = fconvert.s(x87_r7_62 * fconvert.t(0.0625f) + fconvert.t(*eax_42))
                    float* eax_44 = ecx_14 + ecx_22
                    *eax_44 =
                        fconvert.s(fconvert.t(var_40_3) * fconvert.t(0.0625f) + fconvert.t(*eax_44))
                    eax_22 = var_68_2 + ecx_22
                    *eax_22 =
                        fconvert.s(fconvert.t(var_3c_3) * fconvert.t(0.0625f) + fconvert.t(*eax_22))
    else
        long double x87_r7_40 = fconvert.t(*(ecx_22 + 8))
        long double temp3_1 = fconvert.t(0.5f)
        x87_r7_40 - temp3_1
        eax_22.w = (x87_r7_40 < temp3_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_40, temp3_1) ? 1 : 0) << 0xa
            | (x87_r7_40 == temp3_1 ? 1 : 0) << 0xe
        bool p_2 = unimplemented  {test ah, 0x5}
        
        if (p_2)
            goto label_46a08a
        
        var_20 = var_20 u>> 2 | 0xc0000000
    arg4 += 1
    var_c_4 += 0x10
    ecx_22 += 0x10
    
    if (arg4 u>= 0x10)
        break
    
    esi_47 = var_24_4

int16_t x87control_6
int16_t x87status_6
x87control_6, x87status_6 = __fldcw_memmem16(eax_19)
*(arg3 + 4) = var_20
