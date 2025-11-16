// 函数: sub_4690a9
// 地址: 0x4690a9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i_3 = arg5
int32_t edi
int32_t var_64 = edi
int32_t var_20
void* const ebx

if (i_3 != 6)
    ebx = &data_ac4328
    var_20 = 0xac4308
else
    ebx = &data_ac4360
    var_20 = 0xac4348

int32_t i = 0
void* var_8 = fconvert.s(float.t(1))
float var_c = fconvert.s(float.t(0))

if (i_3 != 8)
    float eax_3
    
    do
        float* ecx_2 = arg4 i+ (i << 2)
        long double x87_r7_4 = fconvert.t(*ecx_2)
        long double temp1_1 = fconvert.t(var_8)
        x87_r7_4 - temp1_1
        eax_3.w = (x87_r7_4 < temp1_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_4, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_4 == temp1_1 ? 1 : 0) << 0xe
        bool p_2 = unimplemented  {test ah, 0x5}
        
        if (not(p_2))
            long double x87_r7_5 = fconvert.t(*ecx_2)
            long double temp4_1 = fconvert.t(0f)
            x87_r7_5 - temp4_1
            eax_3.w = (x87_r7_5 < temp4_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_5, temp4_1) ? 1 : 0) << 0xa
                | (x87_r7_5 == temp4_1 ? 1 : 0) << 0xe
            
            if ((eax_3:1.b & 0x41) == 0)
                var_8 = *ecx_2
        
        long double x87_r7_6 = fconvert.t(*ecx_2)
        long double temp3_1 = fconvert.t(var_c)
        x87_r7_6 - temp3_1
        eax_3.w = (x87_r7_6 < temp3_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_6, temp3_1) ? 1 : 0) << 0xa
            | (x87_r7_6 == temp3_1 ? 1 : 0) << 0xe
        
        if ((eax_3:1.b & 0x41) == 0)
            long double x87_r7_7 = fconvert.t(*ecx_2)
            long double temp6_1 = fconvert.t(1f)
            x87_r7_7 - temp6_1
            eax_3.w = (x87_r7_7 < temp6_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_7, temp6_1) ? 1 : 0) << 0xa
                | (x87_r7_7 == temp6_1 ? 1 : 0) << 0xe
            bool p_3 = unimplemented  {test ah, 0x5}
            
            if (not(p_3))
                var_c = *ecx_2
        
        i += 1
    while (i u< 0x10)
    
    long double x87_r7_8 = fconvert.t(var_c)
    long double x87_r6_1 = fconvert.t(var_8)
    x87_r6_1 - x87_r7_8
    eax_3.w = (x87_r6_1 < x87_r7_8 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_1, x87_r7_8) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_8 ? 1 : 0) << 0xe
    bool p_4 = unimplemented  {test ah, 0x44}
    
    if (not(p_4))
        var_c = fconvert.s(float.t(1))
else
    do
        float* ecx_1 = arg4 i+ (i << 2)
        long double x87_r7_2 = fconvert.t(*ecx_1)
        long double temp2_1 = fconvert.t(var_8)
        x87_r7_2 - temp2_1
        float eax_1
        eax_1.w = (x87_r7_2 < temp2_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_2, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_2 == temp2_1 ? 1 : 0) << 0xe
        bool p_1 = unimplemented  {test ah, 0x5}
        
        if (not(p_1))
            var_8 = *ecx_1
        
        long double x87_r7_3 = fconvert.t(*ecx_1)
        long double temp5_1 = fconvert.t(var_c)
        x87_r7_3 - temp5_1
        eax_1.w = (x87_r7_3 < temp5_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_3, temp5_1) ? 1 : 0) << 0xa
            | (x87_r7_3 == temp5_1 ? 1 : 0) << 0xe
        
        if ((eax_1:1.b & 0x41) == 0)
            var_c = *ecx_1
        
        i += 1
    while (i u< 0x10)

int32_t edi_1 = i_3 - 1
long double x87_r7_10 = float.t(edi_1)

if (edi_1 s< 0)
    x87_r7_10 = x87_r7_10 + fconvert.t(4.2949673e+09f)

float var_28 = fconvert.s(x87_r7_10)
int16_t x87status
int16_t temp0
temp0, x87status = __fnstcw_memmem16(arg1)
int16_t x87control
int16_t x87status_1
x87control, x87status_1 = __fldcw_memmem16(temp0 | 0xc00)
int16_t var_24
var_24.d = 0
int16_t var_38_1 = temp0.d.w
void* eax_6
long double result

do
    long double result_1 = fconvert.t(var_c) - fconvert.t(var_8)
    long double temp7_1 = fconvert.t(0.00390625f)
    result_1 - temp7_1
    eax_6.w = (result_1 < temp7_1 ? 1 : 0) << 8 | (is_unordered.t(result_1, temp7_1) ? 1 : 0) << 0xa
        | (result_1 == temp7_1 ? 1 : 0) << 0xe | 0x3800
    bool p_5 = unimplemented  {test ah, 0x5}
    
    if (not(p_5))
        result = result_1
        break
    
    float var_2c_1 = fconvert.s(fconvert.t(var_28) / result_1)
    result = result_1
    int32_t var_58[0x6]
    
    if (i_3 u> 0)
        void* const eax_7 = ebx
        int32_t i_1
        
        do
            *(&var_58 - ebx + eax_7) = fconvert.s(
                fconvert.t(var_c) * fconvert.t(*(var_20 - ebx + eax_7))
                + fconvert.t(var_8) * fconvert.t(*eax_7))
            eax_7 += 4
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        i_3 = arg5
    
    if (i_3 == 6)
        float var_40_1 = fconvert.s(float.t(0))
        float var_3c_1 = fconvert.s(float.t(1))
    
    int32_t i_2 = 0
    float var_10_1 = fconvert.s(float.t(0))
    float var_14_1 = fconvert.s(float.t(0))
    float var_18_1 = fconvert.s(float.t(0))
    float var_1c_1 = fconvert.s(float.t(0))
    
    do
        float* ecx_4 = arg4 + (i_2 << 2)
        long double result_2 = (fconvert.t(*ecx_4) - fconvert.t(var_8)) * fconvert.t(var_2c_1)
        long double temp12_1 = fconvert.t(0f)
        result_2 - temp12_1
        eax_6.w = (result_2 < temp12_1 ? 1 : 0) << 8
            | (is_unordered.t(result_2, temp12_1) ? 1 : 0) << 0xa
            | (result_2 == temp12_1 ? 1 : 0) << 0xe | 0x3800
        bool p_6 = unimplemented  {test ah, 0x41}
        
        if (p_6)
            long double temp14_1 = fconvert.t(var_28)
            result_2 - temp14_1
            eax_6.w = (result_2 < temp14_1 ? 1 : 0) << 8
                | (is_unordered.t(result_2, temp14_1) ? 1 : 0) << 0xa
                | (result_2 == temp14_1 ? 1 : 0) << 0xe | 0x3800
            
            if ((eax_6:1.b & 1) != 0)
                eax_6 = int.d(fconvert.t(fconvert.s(result_2 + fconvert.t(0.5f))))
            label_469292:
                
                if (eax_6 u< i_3)
                    float* eax_8 = eax_6 << 2
                    var_10_1 = fconvert.s((fconvert.t(*ecx_4) - fconvert.t(*(&var_58 + eax_8)))
                        * fconvert.t(*(eax_8 + ebx)) + fconvert.t(var_10_1))
                    long double x87_r6_9 = fconvert.t(*(eax_8 + ebx))
                    eax_6 = eax_8 + var_20
                    var_18_1 = fconvert.s(x87_r6_9 * x87_r6_9 + fconvert.t(var_18_1))
                    var_14_1 = fconvert.s(x87_r6_9 * fconvert.t(*eax_6) + fconvert.t(var_14_1))
                    long double result_3 = fconvert.t(*eax_6)
                    var_1c_1 = fconvert.s(result_3 * result_3 + fconvert.t(var_1c_1))
                    result = result_3
            else
                result = result_2
                bool p_7
                
                if (i_3 == 6)
                    long double x87_r7_27 = (fconvert.t(var_c) + fconvert.t(1f)) * fconvert.t(0.5f)
                    long double temp16_1 = fconvert.t(*ecx_4)
                    x87_r7_27 - temp16_1
                    eax_6.w = (x87_r7_27 < temp16_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_27, temp16_1) ? 1 : 0) << 0xa
                        | (x87_r7_27 == temp16_1 ? 1 : 0) << 0xe
                    p_7 = unimplemented  {test ah, 0x41}
                
                if (i_3 != 6 || p_7)
                    eax_6 = edi_1
                    goto label_469292
        else
            result = result_2
            
            if (i_3 == 6)
                long double x87_r7_24 = fconvert.t(var_8) * fconvert.t(0.5f)
                long double temp15_1 = fconvert.t(*ecx_4)
                x87_r7_24 - temp15_1
                eax_6.w = (x87_r7_24 < temp15_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_24, temp15_1) ? 1 : 0) << 0xa
                    | (x87_r7_24 == temp15_1 ? 1 : 0) << 0xe
            
            if (i_3 != 6 || (eax_6:1.b & 1) != 0)
                eax_6 = nullptr
                goto label_469292
        
        i_2 += 1
    while (i_2 u< 0x10)
    
    long double x87_r7_35 = fconvert.t(var_18_1)
    long double temp17_1 = fconvert.t(0f)
    x87_r7_35 - temp17_1
    eax_6.w = (x87_r7_35 < temp17_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r7_35, temp17_1) ? 1 : 0) << 0xa
        | (x87_r7_35 == temp17_1 ? 1 : 0) << 0xe
    
    if ((eax_6:1.b & 0x41) == 0)
        var_8 = fconvert.s(fconvert.t(var_8) - fconvert.t(var_10_1) / fconvert.t(var_18_1))
    
    long double x87_r7_39 = fconvert.t(var_1c_1)
    long double temp18_1 = fconvert.t(0f)
    x87_r7_39 - temp18_1
    eax_6.w = (x87_r7_39 < temp18_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r7_39, temp18_1) ? 1 : 0) << 0xa
        | (x87_r7_39 == temp18_1 ? 1 : 0) << 0xe
    
    if ((eax_6:1.b & 0x41) == 0)
        var_c = fconvert.s(fconvert.t(var_c) - fconvert.t(var_14_1) / fconvert.t(var_1c_1))
    
    long double x87_r7_43 = fconvert.t(var_8)
    long double temp19_1 = fconvert.t(var_c)
    x87_r7_43 - temp19_1
    eax_6.w = (x87_r7_43 < temp19_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r7_43, temp19_1) ? 1 : 0) << 0xa
        | (x87_r7_43 == temp19_1 ? 1 : 0) << 0xe
    
    if ((eax_6:1.b & 0x41) == 0)
        eax_6 = var_c
        var_c = fconvert.s(fconvert.t(var_8))
        var_8 = eax_6
    
    long double x87_r7_46 = fconvert.t(var_10_1) * fconvert.t(var_10_1)
    long double temp20_1 = fconvert.t(0.015625f)
    x87_r7_46 - temp20_1
    eax_6.w = (x87_r7_46 < temp20_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r7_46, temp20_1) ? 1 : 0) << 0xa
        | (x87_r7_46 == temp20_1 ? 1 : 0) << 0xe
    bool p_8 = unimplemented  {test ah, 0x5}
    
    if (not(p_8))
        long double x87_r7_48 = fconvert.t(var_14_1) * fconvert.t(var_14_1)
        long double temp21_1 = fconvert.t(0.015625f)
        x87_r7_48 - temp21_1
        eax_6.w = (x87_r7_48 < temp21_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_48, temp21_1) ? 1 : 0) << 0xa
            | (x87_r7_48 == temp21_1 ? 1 : 0) << 0xe
        bool p_9 = unimplemented  {test ah, 0x5}
        
        if (not(p_9))
            break
    
    var_24.d += 1
while (var_24.d u< 8)

int16_t x87control_1
int16_t x87status_2
x87control_1, x87status_2 = __fldcw_memmem16(var_38_1)
long double x87_r7_49 = fconvert.t(var_8)
long double temp8 = fconvert.t(0f)
x87_r7_49 - temp8
eax_6.w = (x87_r7_49 < temp8 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_49, temp8) ? 1 : 0) << 0xa
    | (x87_r7_49 == temp8 ? 1 : 0) << 0xe
bool p_10 = unimplemented  {test ah, 0x5}
long double x87_r7_50

if (p_10)
    long double x87_r7_51 = fconvert.t(var_8)
    long double temp9_1 = fconvert.t(1f)
    x87_r7_51 - temp9_1
    eax_6.w = (x87_r7_51 < temp9_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r7_51, temp9_1) ? 1 : 0) << 0xa
        | (x87_r7_51 == temp9_1 ? 1 : 0) << 0xe
    
    if ((eax_6:1.b & 0x41) != 0)
        x87_r7_50 = fconvert.t(var_8)
    else
        x87_r7_50 = float.t(1)
else
    x87_r7_50 = float.t(0)

*arg2 = fconvert.s(x87_r7_50)
long double x87_r7_52 = fconvert.t(var_c)
long double temp11 = fconvert.t(0f)
x87_r7_52 - temp11
float* eax_9
eax_9.w = (x87_r7_52 < temp11 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_52, temp11) ? 1 : 0) << 0xa
    | (x87_r7_52 == temp11 ? 1 : 0) << 0xe
bool p_11 = unimplemented  {test ah, 0x5}
long double x87_r7_53

if (p_11)
    long double x87_r7_54 = fconvert.t(var_c)
    long double temp13_1 = fconvert.t(1f)
    x87_r7_54 - temp13_1
    eax_9.w = (x87_r7_54 < temp13_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r7_54, temp13_1) ? 1 : 0) << 0xa
        | (x87_r7_54 == temp13_1 ? 1 : 0) << 0xe
    
    if ((eax_9:1.b & 0x41) != 0)
        x87_r7_53 = fconvert.t(var_c)
    else
        x87_r7_53 = float.t(1)
else
    x87_r7_53 = float.t(0)

*arg3 = fconvert.s(x87_r7_53)
return result
