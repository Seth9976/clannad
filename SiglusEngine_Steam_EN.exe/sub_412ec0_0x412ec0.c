// 函数: sub_412ec0
// 地址: 0x412ec0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* edi = arg3
int32_t ebx = arg2

if (arg6 u> 0x20)
    return 

int32_t esi_1 = arg9

if (esi_1 u> 0x20)
    return 

int32_t eax_1 = arg6 << 5
int32_t var_c_1 = eax_1

if (*(eax_1 + &data_976b50) == 0)
    eax_1 = sub_411500(eax_1, data_70300c, arg6, data_7030dc)

if ((&data_976b50)[esi_1 * 8] == 0)
    sub_411500(eax_1, data_70300c, esi_1, data_7030dc)

void* ecx_2 = arg4

if (edi s> ecx_2)
    void* eax_2 = edi
    edi = ecx_2
    ecx_2 = eax_2

if (ebx s> arg5)
    int32_t eax_3 = ebx
    ebx = arg5
    arg5 = eax_3

if (edi s>= *(var_c_1 + &data_976b58) || ecx_2 s< 0 || ebx s>= *(var_c_1 + &data_976b5c)
        || arg5 s< 0)
    return 

void* edx_6 = ecx_2 - edi + arg7
int32_t edx_9 = arg5 - ebx + arg8
int32_t ebx_1
int32_t edi_1

if (arg6 != esi_1 || arg7 s< edi || arg7 s> ecx_2 || arg8 s< ebx)
label_41304d:
    int32_t var_24_4 = arg10
    int32_t var_28_2 = edx_9
    void* var_2c_2 = edx_6
    int32_t var_30_2 = arg8
    sub_5853d0(var_c_1, (&data_976b58)[esi_1 * 8], (&data_976b54)[esi_1 * 8], 
        (&data_976b5c)[esi_1 * 8], *(var_c_1 + &data_976b54), *(var_c_1 + &data_976b58), 
        *(var_c_1 + &data_976b5c), edi, ebx, arg7, arg8, arg7)
    ebx_1 = arg7
    edi_1 = arg8
else
    esi_1 = arg9
    
    if (arg8 s> arg5)
        goto label_41304d
    
    int32_t var_34_1 = arg10
    edi_1 = arg8
    int32_t var_38_1 = edx_9
    ebx_1 = arg7
    void* var_3c_1 = edx_6
    int32_t var_40_1 = edi_1
    sub_5853d0(sub_411a20(var_c_1, arg6, 0x1d, edi, ebx, ecx_2, arg5), (&data_976b58)[esi_1 * 8], 
        (&data_976b54)[esi_1 * 8], (&data_976b5c)[esi_1 * 8], data_976ef4, data_976ef8, 
        data_976efc, 0, 0, ebx_1, edi_1, ebx_1)
    sub_4d6c40(0x976ef0, &data_976ef4)
    data_976ef8 = 0
    data_976efc = 0

if (esi_1 == 0)
    int32_t var_24_5 = edx_9
    void* var_28_3 = edx_6
    sub_494c90(ebx_1, edi_1)
    data_703004 = 1

sub_564200(esi_1)
