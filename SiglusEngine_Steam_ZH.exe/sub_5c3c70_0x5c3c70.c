// 函数: sub_5c3c70
// 地址: 0x5c3c70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_4 = arg1
__builtin_memset(arg1 + 0xb8, 0, 0x20)
int32_t* result = arg1 + 0xa0
*(arg1 + 0xd8) = 0xffffffff
*(arg1 + 0xdc) = 0xffffffff
__builtin_memset(arg1 + 0xe0, 0, 0x24)
*(arg1 + 0x104) = 0xffffffff
*(arg1 + 0x108) = 0xffffffff
*(arg1 + 0x10c) = 0
bool cond:0 = result[5] u< 8
result[4] = 0

if (not(cond:0))
    result = *result

*result = 0
*(arg1 + 0x110) = 0
int32_t* esi = *(arg1 + 0x114)
*(arg1 + 0x114) = 0

if (esi != 0)
    bool cond:1_1 = esi[1] != 1
    result = esi[1]
    esi[1] -= 1
    
    if (not(cond:1_1))
        (*(*esi + 4))()
        result = &esi[2]
        int32_t edi_1 = *result
        *result -= 1
        
        if (edi_1 == 1)
            return (*(*esi + 8))()

return result
