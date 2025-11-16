// 函数: sub_75f275
// 地址: 0x75f275
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t result = 0xffff

if (arg1 != 0xffff)
    void* var_18
    int32_t ecx_2 = sub_7470a1(&var_18, arg2)
    void* esi_1 = var_18
    int32_t eax = *(esi_1 + 0xa8)
    
    if (eax == 0)
        int16_t result_3 = (arg1.d).w
        
        if (result_3 - 0x41 u<= 0x19)
            result_3 += 0x20
        
        result = zx.d(result_3)
    else
        int16_t result_1
        
        if (arg1 u>= 0x100)
            if (___crtLCMapStringW(eax, 0x100, &arg1, 1, &result_1, 1) != 0)
                result = zx.d(result_1)
            else
                result = zx.d((arg1.d).w)
        else
            bool cond:0_1 = sub_75eb5f(eax.w, 0x100, ecx_2, (arg1.d).w) != 0
            int16_t result_2 = (arg1.d).w
            
            if (cond:0_1)
                result = zx.d(*(*(esi_1 + 0x94) + zx.d(result_2)))
            else
                result = zx.d(result_2)
    
    char var_c
    void* var_10
    
    if (var_c != 0)
        *(var_10 + 0x70) &= 0xfffffffd

return result
