// 函数: sub_6c88f0
// 地址: 0x6c88f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* result = arg4
int32_t* esi = arg3

while (esi != arg2)
    if (result != 0)
        *result = *esi
        void* ecx_1 = esi[1]
        result[1] = ecx_1
        
        if (ecx_1 != 0)
            *(ecx_1 + 4)
            *(ecx_1 + 4) += 1
    
    esi = &esi[2]
    result = &result[2]

return result
