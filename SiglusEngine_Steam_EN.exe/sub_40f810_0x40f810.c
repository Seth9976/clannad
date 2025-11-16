// 函数: sub_40f810
// 地址: 0x40f810
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* ecx = *(arg1 + 0x1c)
int32_t* result = _malloc(0x60)
*result = sub_410bd0(arg2, 8)
result[1] = sub_410bd0(arg2, 0x10)
result[2] = sub_410bd0(arg2, 0x10)
result[3] = sub_410bd0(arg2, 6)
result[4] = sub_410bd0(arg2, 8)
int32_t eax_5 = sub_410bd0(arg2, 4)
bool cond:0 = *result s< 1
result[5] = eax_5 + 1

if (not(cond:0) && result[1] s>= 1 && result[2] s>= 1 && eax_5 + 1 s>= 1)
    int32_t ebp_1 = 0
    
    if (eax_5 + 1 s<= 0)
        return result
    
    void* ebx_1 = &result[6]
    
    while (true)
        int32_t eax_7 = sub_410bd0(arg2, 8)
        *ebx_1 = eax_7
        
        if (eax_7 s< 0)
            break
        
        if (eax_7 s>= *(ecx + 0x18))
            break
        
        ebp_1 += 1
        ebx_1 += 4
        
        if (ebp_1 s>= result[5])
            return result

sub_40f790(result)
return 0
