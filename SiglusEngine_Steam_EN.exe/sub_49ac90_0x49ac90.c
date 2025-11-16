// 函数: sub_49ac90
// 地址: 0x49ac90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 u> 7 || arg2 u> 1)
    return 

int32_t eax = arg2 + (arg3 << 1)
(&data_8d02b4)[eax * 0xb20] = arg4
(&data_8d02b8)[eax * 0xb20] = arg5
(&data_8d02bc)[eax * 0xb20] = arg6
*(eax * 0x2c80 + 0x8d02c8) = arg8
*(eax * 0x2c80 + 0x8d02cc) = arg9
*(eax * 0x2c80 + 0x8d02d0) = arg10
*(eax * 0x2c80 + 0x8d02d4) = arg11
*(eax * 0x2c80 + 0x8d02c0) = 1
(&data_8d02c4)[eax * 0xb20] = 0
int32_t var_1c
int32_t var_18
void var_10
void var_c
sub_49a330(&var_1c, &var_c, *(eax * 0x2c80 + 0x8d0318), &var_1c, &var_18, &var_10)
int32_t edi_1 = arg12
int32_t eax_9 = var_1c

if (edi_1 s< 0)
    edi_1 = 0
else if (edi_1 s>= eax_9)
    edi_1 = eax_9 - 1

int32_t edx_1 = arg14

if (edx_1 s< 0)
    edx_1 = 0
else if (edx_1 s>= eax_9)
    edx_1 = eax_9 - 1

int32_t eax_10 = arg13
int32_t ebx_1 = var_18

if (eax_10 s< 0)
    eax_10 = 0
else if (eax_10 s>= ebx_1)
    eax_10 = ebx_1 - 1

int32_t ecx_1 = arg15

if (ecx_1 s< 0)
    ecx_1 = 0
else if (ecx_1 s>= ebx_1)
    ecx_1 = ebx_1 - 1

*(eax * 0x2c80 + 0x8d0308) = var_1c
*(eax * 0x2c80 + 0x8d030c) = var_18
*(eax * 0x2c80 + 0x8d02e8) = edi_1
*(eax * 0x2c80 + 0x8d02ec) = eax_10
*(eax * 0x2c80 + 0x8d02f0) = edx_1
*(eax * 0x2c80 + 0x8d02f4) = ecx_1
*(eax * 0x2c80 + 0x8d02f8) = edi_1
*(eax * 0x2c80 + 0x8d02fc) = eax_10

if (edi_1 s<= edx_1)
    *(eax * 0x2c80 + 0x8d0300) = edx_1 - edi_1 + 1
else
    *(eax * 0x2c80 + 0x8d0300) = edi_1 - edx_1 + 1

if (eax_10 s<= ecx_1)
    *(eax * 0x2c80 + 0x8d0304) = ecx_1 - eax_10 + 1
else
    *(eax * 0x2c80 + 0x8d0304) = eax_10 - ecx_1 + 1

int32_t edi_4 = arg16
*(eax * 0x2c80 + 0x8d0314) = arg17

if (edi_4 s> 0x100)
    edi_4 = 0x100
    int32_t var_2c_2 = 0x100
    char* eax_14 = sub_4c84d0(&data_7027c0, 0x61b248)
    
    if (data_702fc0 != 0)
        sub_55f390(
            sub_55f1e0(sub_55ef70(eax_14, data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
            data_72d6ac, data_719b6c, &data_7027c0, nullptr)
        sub_4a1e40(3)
else if (edi_4 s< 0)
    edi_4 = 0

*(eax * 0x2c80 + 0x8d2f18) = edi_4
int32_t eax_17

if (edi_4 s> 0)
    eax_17 = 0
else
    eax_17 = edi_4 - 1

*(eax * 0x2c80 + 0x8d2f1c) = eax_17
*(eax * 0x2c80 + 0x8d2f20) = edi_4 - 1
(&data_8d2f24)[eax * 0xb20] = 0xffffffff
(&data_8d2f28)[eax * 0xb20] = 0xffffffff
*(eax * 0x2c80 + 0x8d2f2c) = 0xffffffff
*(eax * 0x2c80 + 0x8d2f30) = 0xffffffff
(&data_f466f8)[eax] = arg7
(&data_8d0310)[eax * 0xb20] = 0
(&data_20f0094)[eax] += 1
