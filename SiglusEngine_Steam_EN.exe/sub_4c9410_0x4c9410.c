// 函数: sub_4c9410
// 地址: 0x4c9410
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

*arg5 = 0
*arg6 = 0
int32_t var_10
int32_t var_c
int16_t* var_8
char eax_1 = sub_4c92c0(arg3, arg2, arg3, &var_8, &var_c, &var_10)

if (eax_1 != 0)
    int16_t* ecx_3 = var_8
    int32_t edx = 0
    int32_t esi_1 = var_c
    
    if (esi_1 s> 0)
        uint32_t eax_2
        
        do
            eax_2 = zx.d(*ecx_3)
            
            if (eax_2 == arg4)
                return sub_4c8ed0(eax_2, arg2, arg3, ecx_3, var_10, arg5, arg6, arg7, arg8)
            
            edx += 1
            ecx_3 = &ecx_3[4]
        while (edx s< esi_1)
        
        return eax_2

return eax_1
