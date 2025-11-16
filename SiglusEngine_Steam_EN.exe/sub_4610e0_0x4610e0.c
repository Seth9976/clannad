// 函数: sub_4610e0
// 地址: 0x4610e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* result = *(arg1 + 4)

if (result != 0 && arg2 u<= 0x3e7)
    int32_t* ecx = &result[arg2 * 2]
    result = &ecx[1]
    
    if (ecx[1] != 0)
        if (*ecx != 0)
            return sub_4d6c40(ecx, result) __tailcall
        
        char* ecx_2 = data_1b144a0:0xc
        
        if (ecx_2 != 0)
            ecx_2[arg2] = 0
        
        *result = 0

return result
