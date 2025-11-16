// 函数: sub_412cb0
// 地址: 0x412cb0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* edi = arg3
int32_t ebx = arg2

if (arg6 u> 0x20 || arg9 u> 0x20)
    return 

int32_t eax_1 = arg6 << 5

if ((&data_976b50)[arg6 * 8] == 0)
    sub_411500(eax_1, data_70300c, arg6, data_7030dc)

if ((&data_976b50)[arg9 * 8] == 0)
    sub_411500(arg9 << 5, data_70300c, arg9, data_7030dc)

void* ecx_2 = arg4

if (edi s> ecx_2)
    void* eax_4 = edi
    edi = ecx_2
    ecx_2 = eax_4

int32_t edx_2 = arg5

if (ebx s> edx_2)
    int32_t eax_5 = ebx
    ebx = edx_2
    edx_2 = eax_5

if (edi s>= (&data_976b58)[arg6 * 8] || ecx_2 s< 0 || ebx s>= (&data_976b5c)[arg6 * 8]
        || edx_2 s< 0)
    return 

void* esi_4 = ecx_2 - edi + arg7
int32_t esi_7 = edx_2 - ebx + arg8
int32_t ebx_1
int32_t edi_1

if (arg6 != arg9 || arg7 s< edi || arg7 s> ecx_2 || arg8 s< ebx || arg8 s> edx_2)
    int32_t var_24_4 = arg13
    int32_t var_28_2 = arg12
    int32_t var_2c_2 = arg11
    int32_t var_30_2 = arg10
    sub_585150(eax_1, (&data_976b58)[arg9 * 8], (&data_976b54)[arg9 * 8], (&data_976b5c)[arg9 * 8], 
        (&data_976b54)[arg6 * 8], (&data_976b58)[arg6 * 8], (&data_976b5c)[arg6 * 8], edi, ebx, 
        arg7, arg8, arg7.b, arg8.b, esi_4.b, esi_7.b)
    ebx_1 = arg7
    edi_1 = arg8
else
    int32_t var_34_1 = arg13
    edi_1 = arg8
    int32_t var_38_1 = arg12
    ebx_1 = arg7
    int32_t var_3c_1 = arg11
    int32_t var_40_1 = arg10
    sub_585150(sub_411a20(eax_1, arg6, 0x1d, edi, ebx, ecx_2, edx_2), (&data_976b58)[arg9 * 8], 
        (&data_976b54)[arg9 * 8], (&data_976b5c)[arg9 * 8], data_976ef4, data_976ef8, data_976efc, 
        0, 0, ebx_1, edi_1, ebx_1.b, edi_1.b, esi_4.b, esi_7.b)
    sub_4d6c40(0x976ef0, &data_976ef4)
    data_976ef8 = 0
    data_976efc = 0

if (arg9 == 0)
    int32_t var_24_5 = esi_7
    void* var_28_3 = esi_4
    sub_494c90(ebx_1, edi_1)
    data_703004 = 1

sub_564200(arg9)
