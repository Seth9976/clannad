// 函数: sub_4131d0
// 地址: 0x4131d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = arg9

if (edi u> 0x20 || arg6 u> 0x20)
    return 

int32_t ebx_2 = arg6 << 5

if ((&data_976b50)[arg6 * 8] == 0)
    sub_411500(arg6, data_70300c, arg6, data_7030dc)

int32_t eax_1 = edi << 5
int32_t var_14_1 = eax_1

if (*(eax_1 + &data_976b50) == 0)
    sub_411500(eax_1, data_70300c, edi, data_7030dc)
    eax_1 = var_14_1

int32_t esi_1 = arg5
int32_t ebx_3 = arg4
int32_t ecx_5
int32_t edx_3
int32_t edx_5

if ((&data_976b58)[arg6 * 8] == *(eax_1 + &data_976b58))
    edx_3 = arg2
    
    if ((&data_976b5c)[arg6 * 8] != *(eax_1 + &data_976b5c) || arg3 != 0 || edx_3 != 0
            || ebx_3 != (&data_976b58)[arg6 * 8] - 1 || esi_1 != (&data_976b5c)[arg6 * 8] - 1
            || arg7 != edx_3 || arg8 != edx_3)
        goto label_4132c6
    
    sub_411b90(arg6, edi)
    
    if (arg6 == 0 || edi == 0)
        int32_t var_38_3 = esi_1
        edx_5 = 0
        ecx_5 = 0
        int32_t var_3c_1 = ebx_3
    label_413457:
        sub_494c90(ecx_5, edx_5)
        data_703004 = 1
        sub_564200(arg6)
        sub_564200(edi)
    else
        sub_564200(arg6)
        sub_564200(edi)
    
    return 

edx_3 = arg2
label_4132c6:
int32_t var_8_1 = arg3
arg1 = var_14_1

if (arg3 s> ebx_3)
    var_8_1 = ebx_3
    ebx_3 = arg3

if (arg2 s> esi_1)
    edx_3 = esi_1
    esi_1 = arg2

if (var_8_1 s>= (&data_976b58)[arg6 * 8] || ebx_3 s< 0 || edx_3 s>= (&data_976b5c)[arg6 * 8]
        || esi_1 s< 0)
    return 

int32_t edi_2 = var_8_1

if (edi_2 s< 0)
    edi_2 = 0

int32_t edi_3 = (&data_976b58)[arg6 * 8]

if (ebx_3 s>= edi_3)
    ebx_3 = edi_3 - 1

if (edx_3 s< 0)
    edx_3 = 0

if (esi_1 s>= (&data_976b5c)[arg6 * 8])
    esi_1 = (&data_976b5c)[arg6 * 8] - 1

int32_t var_18_1 = ebx_3 - edi_2 + arg7
int32_t var_c_1 = esi_1 - edx_3 + arg8

if (arg7 s>= *(arg1 + &data_976b58) || var_18_1 s< 0 || arg8 s>= *(arg1 + &data_976b5c)
        || var_c_1 s< 0)
    return 

int32_t ecx_6 = arg7

if (ecx_6 s< 0)
    ecx_6 = 0

int32_t ecx_8 = ebx_2

if (var_18_1 s>= *(arg1 + &data_976b58))
    var_18_1 = *(arg1 + &data_976b58) - 1
    ecx_8 = ebx_2

int32_t edi_12 = arg8

if (edi_12 s< 0)
    edi_12 = 0

edi = arg9

if (var_c_1 s>= *(arg1 + &data_976b5c))
    var_c_1 = *(arg1 + &data_976b5c) - 1
    arg1 = var_14_1

sub_585550(arg1, *(arg1 + &data_976b58), *(arg1 + &data_976b54), *(arg1 + &data_976b5c), ecx_6, 
    edi_12, *(ecx_8 + &data_976b54), *(ecx_8 + &data_976b58), *(ecx_8 + &data_976b5c), edi_2, 
    edx_3, ebx_3, esi_1)

if (arg6 == 0)
    int32_t var_38_5 = esi_1
    int32_t var_3c_3 = ebx_3
    sub_494c90(edi_2, edx_3)
    data_703004 = 1

if (edi == 0)
    int32_t var_38_6 = var_c_1
    edx_5 = edi_12
    int32_t var_3c_4 = var_18_1
    ecx_5 = ecx_6
    goto label_413457

sub_564200(arg6)
sub_564200(edi)
