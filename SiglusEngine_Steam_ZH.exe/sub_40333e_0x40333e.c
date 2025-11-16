// 函数: sub_40333e
// 地址: 0x40333e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t ecx
int32_t var_8 = ecx
int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t* ecx_1 = arg4
int32_t esi
int32_t var_dc = esi
int32_t edi
int32_t var_e0 = edi
int32_t* esp_1 = &var_e0
void var_90
float* eax
float* result

if (ecx_1 == 0)
    result = arg1
    result[0xe] = fconvert.s(float.t(0))
    result[0xd] = fconvert.s(float.t(0))
    result[0xc] = fconvert.s(float.t(0))
    result[0xb] = fconvert.s(float.t(0))
    result[9] = fconvert.s(float.t(0))
    result[8] = fconvert.s(float.t(0))
    result[7] = fconvert.s(float.t(0))
    result[6] = fconvert.s(float.t(0))
    result[4] = fconvert.s(float.t(0))
    result[3] = fconvert.s(float.t(0))
    result[2] = fconvert.s(float.t(0))
    result[1] = fconvert.s(float.t(0))
    result[0xf] = fconvert.s(float.t(1))
    result[0xa] = fconvert.s(float.t(1))
    result[5] = fconvert.s(float.t(1))
    *result = fconvert.s(float.t(1))
else
    long double x87_r7 = fconvert.t(arg3)
    long double x87_r6_1 = fconvert.t(0f)
    x87_r6_1 - x87_r7
    long double x87_r7_1 = float.t(0)
    bool c1
    eax.w = (x87_r6_1 < x87_r7 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9
        | (is_unordered.t(x87_r6_1, x87_r7) ? 1 : 0) << 0xa | (x87_r6_1 == x87_r7 ? 1 : 0) << 0xe
        | 0x3800
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (not(p_1))
        result = arg1
        
        if (arg2 == 0)
            result[0xe] = fconvert.s(x87_r7_1)
            result[0xd] = fconvert.s(float.t(0))
            result[0xc] = fconvert.s(float.t(0))
            result[0xb] = fconvert.s(float.t(0))
            result[9] = fconvert.s(float.t(0))
            result[8] = fconvert.s(float.t(0))
            result[7] = fconvert.s(float.t(0))
            result[6] = fconvert.s(float.t(0))
            result[4] = fconvert.s(float.t(0))
            result[3] = fconvert.s(float.t(0))
            result[2] = fconvert.s(float.t(0))
            result[1] = fconvert.s(float.t(0))
            *result = *ecx_1
            eax = ecx_1[1]
            result[0xa] = fconvert.s(float.t(1))
            result[5] = eax
        else
            result[0xb] = fconvert.s(x87_r7_1)
            result[9] = fconvert.s(float.t(0))
            result[8] = fconvert.s(float.t(0))
            result[7] = fconvert.s(float.t(0))
            result[6] = fconvert.s(float.t(0))
            result[4] = fconvert.s(float.t(0))
            result[3] = fconvert.s(float.t(0))
            result[2] = fconvert.s(float.t(0))
            result[1] = fconvert.s(float.t(0))
            *result = *ecx_1
            int32_t edx_2 = ecx_1[1]
            result[0xa] = fconvert.s(float.t(1))
            result[5] = edx_2
            result[0xc] = fconvert.s((float.t(1) - fconvert.t(*ecx_1)) * fconvert.t(*arg2))
            result[0xd] = fconvert.s((float.t(1) - fconvert.t(ecx_1[1])) * fconvert.t(arg2[1]))
            result[0xe] = fconvert.s(float.t(0))
        
        result[0xf] = fconvert.s(float.t(1))
    else
        float var_18_1 = fconvert.s(x87_r7_1)
        int32_t var_50 = *ecx_1
        float var_1c_1 = fconvert.s(float.t(0))
        int32_t eax_2 = ecx_1[1]
        float var_e4 = ecx_1
        float var_20_1 = fconvert.s(float.t(0))
        int32_t var_3c_1 = eax_2
        float var_24_1 = fconvert.s(float.t(0))
        float var_2c_1 = fconvert.s(float.t(0))
        float var_30_1 = fconvert.s(float.t(0))
        float var_34_1 = fconvert.s(float.t(0))
        float var_38_1 = fconvert.s(float.t(0))
        float var_40_1 = fconvert.s(float.t(0))
        float var_44_1 = fconvert.s(float.t(0))
        float var_48_1 = fconvert.s(float.t(0))
        float var_4c_1 = fconvert.s(float.t(0))
        float var_28_1 = fconvert.s(float.t(1))
        float var_14_1 = fconvert.s(float.t(1))
        var_e4 = fconvert.s(fconvert.t(arg3))
        j_sub_402cf1(&var_90, var_e4)
        var_e4 = &var_90
        
        if (arg2 == 0)
            result = arg1
            j_sub_4023fb(result)
            j_sub_4021aa(result, result, &var_50)
            eax, ecx_1 = j_sub_4021aa(result, result, &var_90)
            esp_1 = &var_e4
        else
            void var_d0
            j_sub_4023fb(&var_d0)
            result = arg1
            result[0xe] = fconvert.s(float.t(0))
            result[0xd] = fconvert.s(float.t(0))
            result[0xc] = fconvert.s(float.t(0))
            result[0xb] = fconvert.s(float.t(0))
            result[9] = fconvert.s(float.t(0))
            result[8] = fconvert.s(float.t(0))
            result[7] = fconvert.s(float.t(0))
            result[6] = fconvert.s(float.t(0))
            result[4] = fconvert.s(float.t(0))
            result[3] = fconvert.s(float.t(0))
            result[2] = fconvert.s(float.t(0))
            result[1] = fconvert.s(float.t(0))
            result[0xf] = fconvert.s(float.t(1))
            result[0xa] = fconvert.s(float.t(1))
            result[5] = fconvert.s(float.t(1))
            *result = fconvert.s(float.t(1))
            result[0xc] = fconvert.s(fneg(fconvert.t(*arg2)))
            result[0xd] = fconvert.s(fneg(fconvert.t(arg2[1])))
            j_sub_4021aa(result, result, &var_d0)
            j_sub_4021aa(result, result, &var_50)
            eax, ecx_1 = j_sub_4021aa(result, result, &var_90)
            esp_1 = &var_e4
            result[0xc] = fconvert.s(fconvert.t(*arg2) + fconvert.t(result[0xc]))
            result[0xd] = fconvert.s(fconvert.t(arg2[1]) + fconvert.t(result[0xd]))

long double x87_r7_85 = fconvert.t(arg6)
long double x87_r6_2 = fconvert.t(0f)
x87_r6_2 - x87_r7_85
eax.w = (x87_r6_2 < x87_r7_85 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_2, x87_r7_85) ? 1 : 0) << 0xa
    | (x87_r6_2 == x87_r7_85 ? 1 : 0) << 0xe
bool p_2 = unimplemented  {test ah, 0x44}

if (p_2)
    *(esp_1 - 4) = ecx_1
    *(esp_1 - 4) = fconvert.s(fconvert.t(arg6))
    *(esp_1 - 8) = &var_90
    j_sub_402cf1()
    *(esp_1 - 4) = &var_90
    *(esp_1 - 8) = result
    *(esp_1 - 0xc) = result
    
    if (arg5 == 0)
        j_sub_4021aa()
    else
        result[0xc] = fconvert.s(fconvert.t(result[0xc]) - fconvert.t(*arg5))
        result[0xd] = fconvert.s(fconvert.t(result[0xd]) - fconvert.t(arg5[1]))
        j_sub_4021aa()
        result[0xc] = fconvert.s(fconvert.t(*arg5) + fconvert.t(result[0xc]))
        result[0xd] = fconvert.s(fconvert.t(arg5[1]) + fconvert.t(result[0xd]))

if (arg7 != 0)
    result[0xc] = fconvert.s(fconvert.t(*arg7) + fconvert.t(result[0xc]))
    result[0xd] = fconvert.s(fconvert.t(arg7[1]) + fconvert.t(result[0xd]))

*esp_1
esp_1[1]
return result
