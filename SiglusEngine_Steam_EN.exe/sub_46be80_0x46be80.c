// 函数: sub_46be80
// 地址: 0x46be80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg3

if (arg3 s> arg2)
    arg1 = arg3
    var_8 = arg2
    arg3 = arg2
    arg2 = arg1

if (arg3 s< 0 || arg2 s>= data_7031bc)
    return 

void* i_1 = arg2 - arg3 + 1

if (i_1 s<= 0)
    return 

void* var_c_1 = (arg4 + (arg3 << 1)) * 0x650 + 0x72d73c
void* i

do
    int32_t esi_1 = arg8
    int32_t edi_1 = arg7
    int32_t ebx_1 = arg6
    int32_t var_10_1 = arg5
    int32_t* eax_5 = var_c_1
    
    if (arg3 s>= 0 && arg3 s< data_7031bc)
        if (arg5 s> edi_1)
            var_10_1 = edi_1
            edi_1 = arg5
        
        eax_5 = var_c_1
        
        if (ebx_1 s> esi_1)
            ebx_1 = esi_1
            esi_1 = arg6
        
        eax_5[-1] = var_10_1
        arg3 = var_8
        *eax_5 = ebx_1
        eax_5[1] = edi_1
        eax_5[2] = esi_1
    
    arg3 += 1
    var_8 = arg3
    var_c_1 = &eax_5[0x328]
    i = i_1
    i_1 -= 1
while (i != 1)
