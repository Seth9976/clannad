// 函数: sub_4ec3e0
// 地址: 0x4ec3e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* ecx
void* var_c = ecx
char* result = arg3
void* esi_1 = result * 0x3920 + &data_f89afc
void* edi_1 = &(&data_1090ae4)[result * 0x75]

if (result u<= 0x3f)
    result *= 0x2d0
    *(result + &data_8fcb1c) = 1

if (*(esi_1 + 0x381c) != 0)
    *(esi_1 + 0x381c) = 0
else if (data_1b8a6f4 == 0)
    result = sub_4ef700(result, arg2, ecx, 0, 1)
else
    data_71929c = 5
    data_7192a0 = 0
    data_7192e0 = 0

bool cond:0_1

if (*(esi_1 + 0x2c7c) != 0)
    cond:0_1 = *(edi_1 + 0x48) == 0
    result = *(esi_1 + 0x2c80)
    *(esi_1 + 0x2c84) = result
    *(esi_1 + 0x2c88) = 1

if (*(esi_1 + 0x2c7c) == 0 || not(cond:0_1))
    *(esi_1 + 0x2c98) = 1

if (arg8 == 0)
    int32_t ecx_3
    
    if (arg7 != 0)
        ecx_3 = arg6 + 8
    else if (arg4 != 1)
        ecx_3 = arg6 + 2
    else
        ecx_3 = arg6 + 1
    
    result = arg5
    
    if (arg5 == 0)
        *(esi_1 + 0x2c84) = ecx_3
    else
        char* result_1 = result
        result -= 1
        
        if (result_1 == 1)
            *(arg2 + 0x30) = ecx_3
        else
            char* result_2 = result
            result -= 1
            
            if (result_2 == 1)
                *(arg2 + 0x20) = ecx_3

if (data_702fc0 == 0)
    return result

return sub_55f390(
    sub_55f1e0(sub_55ef70(result, data_72d6ac, data_719b6c, 0x61e9a4, 0x61e980), data_72d6ac, 
        data_719b6c, 0x61e9a4, 0x61e980), 
    data_72d6ac, data_719b6c, 0x61e9a4, 0x61e980)
