// 函数: sub_6603b0
// 地址: 0x6603b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = data_bac504
int32_t ebx
ebx.b = arg2
void* result = *(esi + 0x98)

if (result != *(esi + 0x9c))
    void* edx
    
    if (arg1 == 0)
        edx = data_bac510
    
    if (arg1 != 0 || *(edx + 0x104) == 0)
        result = sub_6601b0(ebx.b)
        
        if (result.b == 0)
            return result
    else
        result = sub_65d6a0(result, *(edx + 0x10c), edx + 0xf4, 0, 1, 0)
        
        if (result.b == 0)
            return result

result.b = 1
return result
