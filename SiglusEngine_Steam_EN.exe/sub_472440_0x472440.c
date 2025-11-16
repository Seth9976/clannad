// 函数: sub_472440
// 地址: 0x472440
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

*arg4 = 0
bool cond:0 = *arg3 != 0
*arg2 = 0

if (cond:0)
    *arg3 = 0
else
    *(arg3 + 0xc) += zx.d(arg3[0x10]) * data_1b14a28

int32_t edx = *(arg3 + 4)

if (edx != 0)
    int32_t ecx = *(arg3 + 0xc)
    
    if (ecx u<= *(arg3 + 8))
        return 
    
    int32_t ecx_1 = ecx - *(arg3 + 8)
    int32_t var_8
    int32_t* var_1c_1 = &var_8
    int32_t* var_c = nullptr
    int32_t* var_28_1 = *(arg3 + 0x1c)
    int32_t eax_2 = sx.d(*(arg3 + 0x18))
    var_8 = 0
    arg1 = sub_472380(eax_2, edx, ecx_1, ecx_1, eax_2, var_28_1, &arg3[0xc], &var_c)
    int32_t edx_1 = var_8
    
    if (zx.d(arg3[0x21]) != edx_1)
        *arg4 = 1
        arg3[0x21] = edx_1.b
    
    if (arg1 != 0)
        *arg2 = var_c
        return 

*(arg3 + 4) = 0
