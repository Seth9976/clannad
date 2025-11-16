// 函数: sub_6f3450
// 地址: 0x6f3450
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg1[1]
int32_t ecx

if (arg2 u< result)
    ecx = *arg1

int32_t* ecx_2

if (arg2 u>= result || ecx u> arg2)
    if (result == arg1[2])
        result = sub_6f34d0(arg1, 1)
    
    ecx_2 = arg1[1]
    
    if (ecx_2 != 0)
        *ecx_2 = *arg2
        result = arg2[1]
    label_6f34ab:
        ecx_2[1] = result
        
        if (result != 0)
            result += 4
            *result
            *result += 1
else
    if (result == arg1[2])
        sub_6f34d0(arg1, 1)
    
    result = *arg1
    ecx_2 = arg1[1]
    int32_t edx_1 = result + ((arg2 - ecx) s>> 3 << 3)
    
    if (ecx_2 != 0)
        *ecx_2 = *edx_1
        result = *(edx_1 + 4)
        goto label_6f34ab
arg1[1] += 8
return result
