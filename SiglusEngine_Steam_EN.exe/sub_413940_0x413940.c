// 函数: sub_413940
// 地址: 0x413940
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg6
int32_t ebx = arg3
int32_t var_18 = arg2

if (esi s>= 0x21)
    return 

if ((&data_976b50)[esi * 8] == 0)
    sub_411500(esi << 5, data_70300c, esi, data_7030dc)
    arg2 = var_18

int32_t edi_1 = arg4

if (ebx s> edi_1)
    int32_t eax_2 = ebx
    ebx = edi_1
    edi_1 = eax_2

int32_t ecx_1 = arg5

if (arg2 s> ecx_1)
    int32_t eax_3 = arg2
    var_18 = ecx_1
    arg2 = ecx_1
    ecx_1 = eax_3
    arg5 = ecx_1

int32_t var_10_1 = 0
char var_14_1 = 0
int32_t eax_5

if (arg10 u<= 3)
    eax_5 = arg10 * 5

int32_t eax_6

if (arg10 u> 3 || *((eax_5 << 3) + &data_7030e0) == 0)
    eax_6 = 0
else
    var_10_1 = *((eax_5 << 3) + &data_7030e0:4)
    eax_6 = *((eax_5 << 3) + &data_7030e0:0xc)
    var_14_1 = (*((eax_5 << 3) + &data_7030e0:8)).b
    esi = arg6

int32_t var_2c_2 = 0
int32_t var_30_1 = 0xff
int32_t var_34_1 = 0
int32_t var_38_1 = arg9
int32_t var_3c_1 = arg8
sub_58bcc0(eax_6, (&data_976b58)[esi * 8], (&data_976b54)[esi * 8], (&data_976b5c)[esi * 8], ebx, 
    arg2, edi_1, ecx_1, 0xffffffff, 0xff, 0xffffffff, 0xffffffff, ecx_1, var_10_1, arg17, arg14, 
    var_14_1, eax_6.b, arg12, arg13, arg11, arg16, arg15, 0, 0, 0, 0, arg7)

if (esi == 0)
    int32_t var_2c_3 = arg5
    int32_t var_30_2 = edi_1
    sub_494c90(ebx, var_18)
    data_703004 = 1

if (data_702fc0 == 0 || data_1af0a78 == 0)
    return 

bool cond:0_1

if (esi s<= 0x10)
    cond:0_1 = data_1318520 != 2
    *((esi << 2) + &data_20cc940) = 1
label_413ab1:
    
    if (not(cond:0_1))
        sub_563b20(0)
else if (esi == 0xffffffff)
    cond:0_1 = data_1318520 != 1
    goto label_413ab1
