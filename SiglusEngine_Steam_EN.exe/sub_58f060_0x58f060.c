// 函数: sub_58f060
// 地址: 0x58f060
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_702fe8 == 0 || arg3 == 0 || arg11 == 0)
    return 

int32_t ecx_1 = arg6
int32_t edi_1 = arg8

if (ecx_1 s> edi_1)
    int32_t eax_1 = ecx_1
    ecx_1 = edi_1
    edi_1 = eax_1

void* edx_1 = arg9
void* esi_1 = arg7

if (esi_1 s> edx_1)
    void* eax_2 = esi_1
    esi_1 = edx_1
    edx_1 = eax_2

if (ecx_1 s>= arg4 || edi_1 s< 0 || esi_1 s>= arg5 || edx_1 s< 0)
    return 

if (ecx_1 s< 0)
    ecx_1 = 0

if (edi_1 s>= arg4)
    edi_1 = arg4 - 1

if (esi_1 s< 0)
    esi_1 = nullptr

if (edx_1 s>= arg5)
    edx_1 = arg5 - 1

int32_t var_8_1 = arg1
void* var_c_1 = arg2
int32_t eax_5 = arg1 - ecx_1 + edi_1
int32_t var_10_1 = eax_5
void* ebx_4 = arg2 - esi_1 + edx_1

if (arg1 s> eax_5)
    var_8_1 = eax_5
    var_10_1 = arg1

if (arg2 s> ebx_4)
    var_c_1 = ebx_4
    ebx_4 = arg2

if (var_8_1 s>= data_702fec || var_10_1 s< 0 || var_c_1 s>= data_702ff0 || ebx_4 s< 0)
    return 

if (var_8_1 s< 0)
    ecx_1 -= var_8_1
    var_8_1 = 0

if (var_10_1 s>= data_702fec)
    int32_t eax_10 = data_702fec - 1
    var_10_1 = eax_10
    ecx_1 += eax_10 - var_8_1

if (var_c_1 s< 0)
    esi_1 -= var_c_1
    var_c_1 = nullptr

int32_t eax = data_702ff0

if (ebx_4 s>= eax)
    ebx_4 = eax - 1
    esi_1 += ebx_4 - var_c_1

int32_t edx_3 = edx_1 - esi_1 + 1
data_20f339c = edi_1 - ecx_1 + 1
data_20f33a0 = edx_3

if (edi_1 - ecx_1 + 1 s<= 0 || edx_3 s<= 0)
    return 

data_20f33a4 = var_10_1 - var_8_1 + 1
data_20f33a8 = ebx_4 - var_c_1 + 1

if (var_10_1 - var_8_1 + 1 s<= 0 || data_20f33a8 s<= 0)
    return 

if (arg10 == 0)
    int32_t var_20 = 0
    int32_t var_24 = arg11.d
    int32_t var_28 = 0
    int32_t var_2c = 0
    int32_t var_30 = 0
    sub_584980(var_c_1, data_702fec, data_702fe8, data_702ff0, arg3, arg4, arg5, ecx_1, esi_1, 0, 
        var_8_1, var_c_1, var_8_1, var_c_1.b, var_10_1, ebx_4, ecx_1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, nullptr)
    return 

int32_t ebx_5 = data_20f33a4

if (edi_1 - ecx_1 + 1 s>= edx_3)
    edx_3 = edi_1 - ecx_1 + 1

data_20f33c0 = edx_3
data_20f33b8 = arg4 << 2
data_20f33b4 = (data_702fec - ebx_5) << 2
int32_t ecx_3 = data_702fe8
data_20f33bc = ebx_5 << 2
data_20f33b0 = arg3 + ((arg4 * esi_1 + ecx_1) << 2)
uint32_t ecx_4 = zx.d(arg11)
data_20f33ac = ecx_3 + ((var_c_1 * data_702fec + var_8_1) << 2)
data_1cd43ac = ecx_4 << 2
data_1cd43a8 = 0xff - ecx_4
data_1cd43a4 = *(data_1cd4328 + (ecx_4 << 2))

if (edx_3 s<= 0x50)
    if (edx_3 s<= 2)
        edx_3 <<= 0xd
    else if (edx_3 s<= 5)
        edx_3 <<= 0xc
    else if (edx_3 s<= 0xa)
        edx_3 <<= 0xb
    else if (edx_3 s<= 0x14)
        edx_3 <<= 0xa
    else if (edx_3 s> 0x28)
        edx_3 <<= 8
    else
        edx_3 <<= 9
    
    data_20f33c0 = edx_3
else if (edx_3 s<= 0x280)
    if (edx_3 s<= 0xa0)
        edx_3 <<= 7
    else if (edx_3 s> 0x140)
        edx_3 <<= 5
    else
        edx_3 <<= 6
    
    data_20f33c0 = edx_3
else if (edx_3 s<= 0x500)
    edx_3 <<= 4
    data_20f33c0 = edx_3
else if (edx_3 s<= 0xa00)
    edx_3 <<= 3
    data_20f33c0 = edx_3
else if (edx_3 s<= 0x1400)
    edx_3 <<= 2
    data_20f33c0 = edx_3
else if (edx_3 s<= 0x2800)
    edx_3 *= 2
    data_20f33c0 = edx_3

data_20f33c4 = *((zx.d(arg10) u>> 2 << 2) + &data_6131b0) * edx_3 s/ 0x14d60

if (arg11 == 0xff)
    sub_58ef10()
    return 

sub_58ef90()
