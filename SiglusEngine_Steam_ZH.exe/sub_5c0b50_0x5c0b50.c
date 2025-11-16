// 函数: sub_5c0b50
// 地址: 0x5c0b50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

bool cond:0 = *(arg1 + 0xb4) u< 8
int32_t* result = arg1 + 0xa0
result[4] = 0

if (not(cond:0))
    result = *result

*result = 0
*(arg1 + 0xb8) = 0
int32_t* esi = *(arg1 + 0xbc)
*(arg1 + 0xbc) = 0

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
            jump(*(*esi + 8))

return result
