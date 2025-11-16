// 函数: sub_455320
// 地址: 0x455320
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t var_c = 0xffffffff
int32_t var_10 = 0xffffffff
int32_t var_14 = 0xffffffff
sub_4d2170(&var_14, arg4, arg2, &var_14, &var_10, &var_c, &var_8)
int32_t arg_8
int32_t arg_c
int32_t arg_10
int32_t arg_14
int32_t eax_2 = sub_4c08c0(&arg_10, &arg_c, &arg_8, &arg_10, &arg_14, var_14, var_10, var_c, var_8)

if (eax_2 != 0)
    int32_t ecx_2 = arg_10
    int32_t eax_3 = arg_8
    int32_t ecx_3 = ecx_2 - eax_3
    int32_t ebx_1
    
    if (ecx_2 - eax_3 s>= 0)
        ebx_1 = 1
    else
        ecx_3 = neg.d(ecx_3)
        ebx_1 = 0xffffffff
    
    int32_t edx_2 = arg_14
    int32_t edx_3 = edx_2 - arg_c
    int32_t esi_1 = arg2
    
    if (edx_2 - arg_c s< 0)
        edx_3 = neg.d(edx_3)
        esi_1 = neg.d(esi_1)
    
    void* edi_1 = arg2 * arg_c
    int32_t esi_2 = neg.d(esi_1)
    data_1cd52ec = ecx_3
    data_1cd52f0 = edx_3
    data_1cd52f4 = ebx_1
    char* edi_3 = edi_1 + arg3 + eax_3
    data_1cd52e4 = arg4
    data_1cd52e0 = arg2
    uint32_t eax_7 = zx.d(arg5)
    data_1cd454c = edi_3
    char var_1c_1 = eax_7.b
    data_1cd52e8 = eax_7
    int32_t eax_11
    int32_t esi_3
    
    if (ecx_3 s<= edx_3)
        data_1cd5308 = edx_3
        data_1cd5310 = ebx_1
        data_1cd52fc = neg.d(edx_3)
        esi_3 = neg.d(esi_2)
        data_1cd530c = esi_3
        data_1cd5300 = ecx_3 * 2
        eax_11 = edx_3 * 2
    else
        data_1cd5308 = ecx_3
        data_1cd530c = ebx_1
        data_1cd52fc = neg.d(ecx_3)
        esi_3 = neg.d(esi_2)
        data_1cd5310 = esi_3
        data_1cd5300 = edx_3 * 2
        eax_11 = ecx_3 * 2
    
    data_1cd52f8 = esi_3
    data_1cd5304 = eax_11
    
    if (edx_3 == 0)
        if (ecx_3 == 0)
            *edi_3 = var_1c_1
            return var_1c_1
        
        char* edi_4 = data_1cd454c
        char eax_16 = (data_1cd52e8).b
        int32_t edx_4 = data_1cd52f4
        int32_t i = data_1cd52ec + 1
        
        do
            *edi_4 = eax_16
            edi_4 = &edi_4[edx_4]
            i -= 1
        while (i != 0)
        
        return eax_16
    
    if (ecx_3 == 0)
        char* edi_5 = data_1cd454c
        char eax_17 = (data_1cd52e8).b
        int32_t i_1 = data_1cd52f0 + 1
        int32_t edx_5 = data_1cd52f8
        
        do
            *edi_5 = eax_17
            edi_5 = &edi_5[edx_5]
            i_1 -= 1
        while (i_1 != 0)
        
        return eax_17
    
    char* edi_6 = data_1cd454c
    eax_2 = data_1cd52e8
    int32_t i_2 = data_1cd5308 + 1
    int32_t ebx_2 = data_1cd530c
    int32_t edx_6 = data_1cd52fc
    int32_t esi_4 = data_1cd5300
    
    do
        *edi_6 = eax_2.b
        edi_6 = &edi_6[ebx_2]
        edx_6 += esi_4
        
        if (edx_6 s>= 0)
            edi_6 = &edi_6[data_1cd5310]
            edx_6 -= data_1cd5304
        
        i_2 -= 1
    while (i_2 != 0)

return eax_2
