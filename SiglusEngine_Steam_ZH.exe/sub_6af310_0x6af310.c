// 函数: sub_6af310
// 地址: 0x6af310
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg2[5]
int16_t* result = *arg3
int16_t* esi

if (ebx u< 8)
    esi = arg2
else
    esi = *arg2

while (true)
    int32_t* edx
    
    if (ebx u< 8)
        edx = arg2
    else
        edx = *arg2
    
    ebx = arg2[5]
    
    if (esi == edx + arg2[4] * 2)
        break
    
    void* edx_1
    
    if (result != arg4)
        edx_1.w = *result
    
    if (result == arg4 || edx_1.w != *esi)
        result.b = 0
        return result
    
    result = &result[1]
    esi = &esi[1]

*arg3 = result
result.b = 1
return result
