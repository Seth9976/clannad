// 函数: sub_6a5950
// 地址: 0x6a5950
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* result = arg4
int32_t* esi = arg3

while (esi != arg2)
    if (result != 0)
        *result = *esi
        int32_t* ecx_1 = esi[1]
        result[1] = ecx_1
        
        if (ecx_1 != 0)
            ecx_1[1]
            ecx_1[1] += 1
        
        ecx_1.b = esi[2].b
        result[2].b = ecx_1.b
    
    esi = &esi[3]
    result = &result[3]

return result
