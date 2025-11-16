// 函数: sub_5df330
// 地址: 0x5df330
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = arg1[4]

if (ecx u< arg2)
    sub_7431bf("invalid string position")
    noreturn

if (0xffffffff - ecx u<= arg3)
    sub_743191("string too long")
    noreturn

if (arg3 != 0)
    uint32_t eax_1 = ecx + arg3
    
    if (sub_52e660(arg1, eax_1, 0) != 0)
        int32_t eax_3 = arg1[5]
        int32_t* edx_1
        
        if (eax_3 u< 8)
            edx_1 = arg1
        else
            edx_1 = *arg1
        
        int32_t* ecx_2
        
        if (eax_3 u< 8)
            ecx_2 = arg1
        else
            ecx_2 = *arg1
        
        int32_t eax_4 = arg1[4]
        
        if (eax_4 != arg2)
            _memcpy(ecx_2 + ((arg2 + arg3) << 1), edx_1 + (arg2 << 1), (eax_4 - arg2) * 2)
        
        sub_55d2d0(arg1, arg2, arg3, arg4)
        sub_52e940(arg1, eax_1)

return arg1
