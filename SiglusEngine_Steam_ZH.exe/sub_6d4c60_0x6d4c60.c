// 函数: sub_6d4c60
// 地址: 0x6d4c60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 0x110)
int32_t edx = *(arg1 + 0x104)

if (eax u>= 0x8000 || edx u>= 0x8000)
    return 0xffffffff

if (*(arg1 + 0x14c) == 0)
    return (eax + 1) * edx

int32_t esi = 0
uint32_t eax_2 = zx.d(*(arg1 + 0x152))
int32_t result_1 = 0
int32_t result

for (int32_t i = 8; i s>= 2; i -= 1)
    char ebx_2
    
    if (esi s<= 1)
        ebx_2 = 3
    else
        ebx_2 = ((i - 1) s>> 1).b
    
    char var_c_1
    
    if (esi s<= 1)
        var_c_1 = 3
    else
        var_c_1 = ((i - 1) s>> 1).b
    
    uint32_t edx_8 = (*(arg1 + 0x100) - 1 + (1 << ebx_2)
        - ((esi & 1) << (3 - ((esi + 1) s>> 1).b) & 7)) u>> var_c_1
    
    if (edx_8 == 0)
        result = result_1
    else
        uint32_t eax_11
        
        if (eax_2 u< 8)
            eax_11 = (edx_8 * eax_2 + 7) u>> 3
        else
            eax_11 = (eax_2 u>> 3) * edx_8
        
        char var_c_2
        
        if (esi s<= 2)
            var_c_2 = 3
        else
            var_c_2 = (i s>> 1).b
        
        char ebx_4
        
        if (esi s<= 2)
            ebx_4 = 3
        else
            ebx_4 = (i s>> 1).b
        
        result = result_1 + (((1 << var_c_2) - ((not.d(esi) & 1) << (3 - (esi s>> 1).b) & 7) + edx
            - 1) u>> ebx_4) * (eax_11 + 1)
        result_1 = result
    
    esi += 1

return result
