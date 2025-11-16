// 函数: sub_41fbc0
// 地址: 0x41fbc0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 s>= 0 && arg1 s< data_13570f0)
    void* esi_2 = arg1 * 0x64 + data_13570f8
    int32_t eax_1 = *(esi_2 + 0x40)
    int32_t eax_2
    
    if (eax_1 s< 0 || eax_1 s> 0x19)
        if (eax_1 == 0xffffffff)
            eax_2 = data_1313c8c
        label_41fc2d:
            
            if (eax_2 s< 0)
                *arg2 = 0
                return 1
            
            int32_t ecx_1 = *(esi_2 + 0x5c)
            
            if (eax_2 s>= ecx_1)
                eax_2 = ecx_1 - 1
            
            *arg2 = eax_2
            return 1
        
        if (eax_1 == 0xfffffffe)
            eax_2 = data_1313c90
            goto label_41fc2d
    else
        int32_t edx = *(esi_2 + 0x44)
        
        if (edx s>= 0 && edx s< (&data_63ecb0)[eax_1])
            int32_t var_8
            sub_4e76e0(eax_1, edx, eax_1, &var_8, &data_704898)
            eax_2 = var_8
            goto label_41fc2d

return 0
