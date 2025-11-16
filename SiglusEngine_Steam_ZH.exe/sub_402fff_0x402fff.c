// 函数: sub_402fff
// 地址: 0x402fff
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t ecx
int32_t var_8 = ecx
int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
long double x87_r7 = float.t(0)
int32_t esi
int32_t var_dc = esi
int32_t edi
int32_t var_e0 = edi
int32_t* esp_1 = &var_e0
void var_90
float* result

if (arg4 == 0)
    result = arg1
    result[0xe] = fconvert.s(x87_r7)
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
else if (arg3 == 0)
    result = arg1
    
    if (arg2 == 0)
        result[0xe] = fconvert.s(x87_r7)
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
        *result = *arg4
        result[5] = arg4[1]
        result[0xa] = arg4[2]
    else
        result[0xb] = fconvert.s(x87_r7)
        result[9] = fconvert.s(float.t(0))
        result[8] = fconvert.s(float.t(0))
        result[7] = fconvert.s(float.t(0))
        result[6] = fconvert.s(float.t(0))
        result[4] = fconvert.s(float.t(0))
        result[3] = fconvert.s(float.t(0))
        result[2] = fconvert.s(float.t(0))
        result[1] = fconvert.s(float.t(0))
        *result = *arg4
        result[5] = arg4[1]
        result[0xa] = arg4[2]
        result[0xc] = fconvert.s((float.t(1) - fconvert.t(*arg4)) * fconvert.t(*arg2))
        result[0xd] = fconvert.s((float.t(1) - fconvert.t(arg4[1])) * fconvert.t(arg2[1]))
        result[0xe] = fconvert.s((float.t(1) - fconvert.t(arg4[2])) * fconvert.t(arg2[2]))
    
    result[0xf] = fconvert.s(float.t(1))
else
    float var_18_1 = fconvert.s(x87_r7)
    int32_t ecx_1 = *arg4
    void* var_e4 = arg3
    float var_1c_1 = fconvert.s(float.t(0))
    int32_t var_50 = ecx_1
    float var_20_1 = fconvert.s(float.t(0))
    int32_t var_28_1 = arg4[2]
    float var_24_1 = fconvert.s(float.t(0))
    int32_t var_3c_1 = arg4[1]
    float var_2c_1 = fconvert.s(float.t(0))
    float var_30_1 = fconvert.s(float.t(0))
    float var_34_1 = fconvert.s(float.t(0))
    float var_38_1 = fconvert.s(float.t(0))
    float var_40_1 = fconvert.s(float.t(0))
    float var_44_1 = fconvert.s(float.t(0))
    float var_48_1 = fconvert.s(float.t(0))
    float var_4c_1 = fconvert.s(float.t(0))
    float var_14_1 = fconvert.s(float.t(1))
    j_sub_402eb9(&var_90, var_e4)
    var_e4 = &var_90
    
    if (arg2 == 0)
        result = arg1
        j_sub_4023fb(result)
        j_sub_4021aa(result, result, &var_50)
        j_sub_4021aa(result, result, &var_90)
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
        result[0xe] = fconvert.s(fneg(fconvert.t(arg2[2])))
        j_sub_4021aa(result, result, &var_d0)
        j_sub_4021aa(result, result, &var_50)
        j_sub_4021aa(result, result, &var_90)
        esp_1 = &var_e4
        result[0xc] = fconvert.s(fconvert.t(result[0xc]) + fconvert.t(*arg2))
        result[0xd] = fconvert.s(fconvert.t(arg2[1]) + fconvert.t(result[0xd]))
        result[0xe] = fconvert.s(fconvert.t(result[0xe]) + fconvert.t(arg2[2]))

if (arg6 != 0)
    *(esp_1 - 4) = arg6
    *(esp_1 - 8) = &var_90
    j_sub_402eb9()
    *(esp_1 - 4) = &var_90
    *(esp_1 - 8) = result
    *(esp_1 - 0xc) = result
    
    if (arg5 == 0)
        j_sub_4021aa()
    else
        result[0xc] = fconvert.s(fconvert.t(result[0xc]) - fconvert.t(*arg5))
        result[0xd] = fconvert.s(fconvert.t(result[0xd]) - fconvert.t(arg5[1]))
        result[0xe] = fconvert.s(fconvert.t(result[0xe]) - fconvert.t(arg5[2]))
        j_sub_4021aa()
        result[0xc] = fconvert.s(fconvert.t(result[0xc]) + fconvert.t(*arg5))
        result[0xd] = fconvert.s(fconvert.t(result[0xd]) + fconvert.t(arg5[1]))
        result[0xe] = fconvert.s(fconvert.t(result[0xe]) + fconvert.t(arg5[2]))

if (arg7 != 0)
    result[0xc] = fconvert.s(fconvert.t(result[0xc]) + fconvert.t(*arg7))
    result[0xd] = fconvert.s(fconvert.t(arg7[1]) + fconvert.t(result[0xd]))
    result[0xe] = fconvert.s(fconvert.t(arg7[2]) + fconvert.t(result[0xe]))

*esp_1
esp_1[1]
return result
