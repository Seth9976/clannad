// 函数: sub_408a90
// 地址: 0x408a90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* edx = arg5
int32_t ecx = arg1
int32_t eax = *(edx + 4)
arg5 = 1
int32_t var_c = ecx

if (eax s<= 0)
    return 

int32_t* edi_1 = arg2
void* var_8_1 = edx + (eax << 2) + 4
int32_t var_4_1 = eax
bool cond:5_1

do
    int32_t temp0_1 = divs.dp.d(sx.q(ecx), *var_8_1)
    int32_t temp0_2 = divs.dp.d(sx.q(arg1), ecx)
    void* ecx_2 = temp0_2 * temp0_1
    var_c -= (*var_8_1 - 1) * temp0_2
    arg5 = 1 - arg5
    void* edx_8 = var_8_1
    int32_t ecx_8 = *edx_8
    
    if (ecx_8 == 4)
        int32_t ecx_18 = temp0_2 + var_c
        float* var_30_5
        float* var_2c_5
        
        if (arg5 == 0)
            var_2c_5 = arg3
            var_30_5 = edi_1
        else
            var_2c_5 = edi_1
            var_30_5 = arg3
        
        sub_408e00(temp0_2, temp0_1, var_30_5, var_2c_5, arg4 + (var_c << 2) - 4, 
            arg4 + (ecx_18 << 2) - 4, arg4 + ((ecx_18 + temp0_2) << 2) - 4)
    else if (ecx_8 != 2)
        if (temp0_2 == 1)
            edx_8 = var_8_1
            arg5 = temp0_2 - arg5
        
        if (arg5 == 0)
            sub_409270(temp0_2, *edx_8, temp0_1, ecx_2, edi_1, edi_1, edi_1, arg3, arg3, 
                arg4 + (var_c << 2) - 4)
            arg5 = 1
        else
            sub_409270(temp0_2, *edx_8, temp0_1, ecx_2, arg3, arg3, arg3, edi_1, edi_1, 
                arg4 + (var_c << 2) - 4)
            arg5 = nullptr
    else if (arg5 == 0)
        sub_408c40(temp0_2, temp0_1, edi_1, arg3, arg4 + (var_c << 2) - 4)
    else
        sub_408c40(temp0_2, temp0_1, arg3, edi_1, arg4 + (var_c << 2) - 4)
    
    cond:5_1 = var_4_1 != 1
    ecx = temp0_1
    var_8_1 -= 4
    var_4_1 -= 1
while (cond:5_1)

if (arg5 == 1)
    return 

int32_t i_1 = arg1

if (i_1 s<= 0)
    return 

void* ebp_2 = arg3 - edi_1
int32_t i

do
    *edi_1 = *(edi_1 + ebp_2)
    edi_1 = &edi_1[1]
    i = i_1
    i_1 -= 1
while (i != 1)
