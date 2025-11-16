// 函数: sub_578460
// 地址: 0x578460
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg1
int32_t result = esi[1]

if (arg2 u< result)
    arg1 = *esi

int32_t* ecx_1

if (arg2 u>= result || arg1 u> arg2)
    if (result == esi[2])
        int32_t* var_10_2 = arg1
        result = sub_5785a0(esi)
    
    ecx_1 = esi[1]
    
    if (ecx_1 != 0)
        *ecx_1 = *arg2
        result = arg2[1]
    label_5784b9:
        ecx_1[1] = result
        
        if (result != 0)
            result += 4
            *result
            *result += 1
else
    if (result == esi[2])
        int32_t* var_10_1 = arg1
        sub_5785a0(esi)
    
    result = *esi
    ecx_1 = esi[1]
    int32_t edx_1 = result + ((arg2 - arg1) s>> 3 << 3)
    
    if (ecx_1 != 0)
        *ecx_1 = *edx_1
        result = *(edx_1 + 4)
        goto label_5784b9
esi[1] += 8
return result
