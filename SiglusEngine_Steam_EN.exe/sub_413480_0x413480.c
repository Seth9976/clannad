// 函数: sub_413480
// 地址: 0x413480
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* var_24 = arg3
int32_t ecx = arg11
int32_t var_28 = arg2

if (ecx u> 0x20)
    return 

arg1 = arg6

if (arg1 u> 0x20)
    return 

int32_t esi_2 = arg1 << 5

if ((&data_976b50)[arg1 * 8] == 0)
    arg1 = sub_411500(arg1, data_70300c, arg1, data_7030dc)
    ecx = arg11

if ((&data_976b50)[ecx * 8] == 0)
    sub_411500(arg1, data_70300c, ecx, data_7030dc)

void* edi_1 = arg4
void* eax = var_24

if (eax s> edi_1)
    var_24 = edi_1
    edi_1 = eax
    arg4 = edi_1

arg1 = arg5

if (var_28 s> arg1)
    arg1 = var_28
    var_28 = arg5
    arg5 = arg1

int32_t edx_4 = (&data_976b58)[arg1 * 8]

if (var_24 s>= edx_4 || edi_1 s< 0)
    return 

int32_t esi_3 = (&data_976b5c)[arg1 * 8]

if (var_28 s>= esi_3 || arg1 s< 0)
    return 

int32_t esi_4 = arg7

if (esi_4 s> arg9)
    int32_t eax_1 = esi_4
    esi_4 = arg9
    arg9 = eax_1

int32_t edi_2 = arg8
arg1 = arg10

if (edi_2 s> arg1)
    arg1 = edi_2
    edi_2 = arg10
    arg10 = arg1

void* ecx_3 = (&data_976b58)[ecx * 8]

if (esi_4 s>= ecx_3 || arg9 s< 0)
    return 

void* edx_6 = (&data_976b5c)[ecx * 8]

if (edi_2 s>= edx_6 || arg1 s< 0)
    return 

void var_58

if (arg6 != arg11 || esi_4 s< var_24 || esi_4 s> arg4 || edi_2 s< var_28 || edi_2 s> arg5)
    int32_t var_34_5 = 0
    int32_t var_38_3 = arg12
    int32_t var_3c_3 = 0
    int32_t var_40_3 = 0
    int32_t var_44_2 = 0
    int32_t var_48_2 = 0
    sub_5856e0(esi_2, ecx_3, (&data_976b54)[ecx * 8], edx_6, esi_4, edi_2, arg9, arg10, 
        (&data_976b54)[arg1 * 8], edx_4, esi_3, arg13, var_24, var_28, arg4, arg5, 0, 0, edx_4, 
        esi_3, 0xff, 0xffffffff, 0xffffffff, 0xffffffff, var_24, 0, var_58)
else
    int32_t ecx_6 = sub_411a20(arg4, arg6, 0x1d, var_24, var_28, arg4, arg5)
    int32_t edx_9 = data_976efc
    int32_t var_34_4 = 0
    int32_t var_38_2 = arg12
    int32_t var_3c_2 = 0
    int32_t var_40_2 = 0
    int32_t var_44_1 = 0
    int32_t var_48_1 = 0
    int32_t ecx_7 = data_976ef8
    sub_5856e0(ecx_7 - 1, (&data_976b58)[ecx * 8], (&data_976b54)[ecx * 8], 
        (&data_976b5c)[ecx * 8], esi_4, edi_2, arg9, arg10, data_976ef4, ecx_7, edx_9, arg13, 0, 0, 
        ecx_7 - 1, edx_9 - 1, 0, 0, ecx_7, edx_9, 0xff, 0xffffffff, 0xffffffff, 0xffffffff, ecx_6, 
        0, var_58)
    sub_4d6c40(0x976ef0, &data_976ef4)
    data_976ef8 = 0
    data_976efc = 0
int32_t eax_6 = arg11

if (eax_6 == 0)
    int32_t var_34_6 = arg10
    int32_t var_38_4 = arg9
    sub_494c90(esi_4, edi_2)
    eax_6 = arg11
    data_703004 = 1

sub_564200(eax_6)
