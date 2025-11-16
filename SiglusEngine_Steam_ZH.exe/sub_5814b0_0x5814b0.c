// 函数: sub_5814b0
// 地址: 0x5814b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b6486
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg2
void* var_70 = ebx
int32_t var_64 = 0
int32_t var_4c = 7
int32_t var_50 = 0
int16_t var_60 = 0
int32_t var_8_1 = 0
int32_t var_30
int32_t var_1c
void* const ecx_4

if (arg3 == 0)
    ecx_4 = &data_ad7c90
else
    int32_t ebx_1 = *(arg3 + 0x134)
    void* var_84_1 = arg3
    int16_t* eax_5 = sub_6ad9b0(&var_30)
    var_8_1.b = 1
    
    if (&var_60 != eax_5)
        sub_52e3c0(&var_60, eax_5, 0, 0xffffffff)
    
    var_8_1.b = 0
    
    if (var_1c u>= 8)
        j__free(var_30)
    
    if (ebx_1 == 0xfffffffe)
        sub_532910(&var_60, 0xaef4dc, 6)
    else if (ebx_1 == 0xffffffff)
        sub_5329d0(&var_60, 0xaef4ec)
    
    eax_5.b = *(arg3 + 0x140)
    ecx_4 = &data_aeef34
    ebx = var_70
    
    if (eax_5.b == 0)
        ecx_4 = &data_ad9270

sub_52e820(&var_30, ecx_4)
var_8_1.b = 2
int32_t eax_7 = *(data_bac4e0 + 0x34)

if (eax_7 != 0)
    eax_7(*(ebx + 4), *arg4, *arg5, &var_30, eax_2)

var_8_1.b = 0

if (var_1c u>= 8)
    j__free(var_30)

*arg6 += 1
void* const ecx_8

if (arg3 == 0)
    ecx_8 = &data_ad7c90
else
    eax_7.b = *(arg3 + 0x141)
    ecx_8 = &data_aeef48
    
    if (eax_7.b == 0)
        ecx_8 = &data_ad9270

sub_52e820(&var_30, ecx_8)
var_8_1.b = 3
int32_t eax_9 = *(data_bac4e0 + 0x34)

if (eax_9 != 0)
    eax_9(*(ebx + 4), *arg4, *arg5, &var_30, eax_2)

var_8_1.b = 0

if (var_1c u>= 8)
    j__free(var_30)

*arg6 += 1
void* const ecx_12

if (arg3 == 0)
    ecx_12 = &data_ad7c90
else
    eax_9.b = *(arg3 + 0x142)
    ecx_12 = &data_aeef70
    
    if (eax_9.b == 0)
        ecx_12 = &data_ad9270

sub_52e820(&var_30, ecx_12)
var_8_1.b = 4
int32_t eax_11 = *(data_bac4e0 + 0x34)

if (eax_11 != 0)
    eax_11(*(ebx + 4), *arg4, *arg5, &var_30, eax_2)

var_8_1.b = 0

if (var_1c u>= 8)
    j__free(var_30)

*arg6 += 1
void* const ecx_16

if (arg3 == 0)
    ecx_16 = &data_ad7c90
else
    eax_11.b = *(arg3 + 0x143)
    ecx_16 = &data_aef500
    
    if (eax_11.b == 0)
        ecx_16 = &data_aef504

int32_t ecx_18 = sub_52e820(&var_30, ecx_16)
var_8_1.b = 5
int32_t eax_13 = *(data_bac4e0 + 0x34)

if (eax_13 != 0)
    ecx_18 = eax_13(*(ebx + 4), *arg4, *arg5, &var_30, eax_2)

var_8_1.b = 0

if (var_1c u>= 8)
    ecx_18 = j__free(var_30)

*arg6 += 1
int16_t var_48
int32_t var_34
int16_t* ecx_22
int32_t ebx_2

if (arg3 == 0)
    var_34 = 7
    int32_t var_38_1 = 0
    var_48 = 0
    sub_52e720(&var_48, &data_ad7c90, nullptr)
    ecx_22 = &var_48
    int32_t var_8_2 = 7
    ebx_2 = 2
else
    *(arg3 + 0x130)
    int32_t var_84_15 = ecx_18
    ecx_22 = sub_6ad9b0(&var_30)
    var_8_1.b = 6
    ebx_2 = 1

int32_t var_64_1 = ebx_2
int32_t eax_16 = *(data_bac4e0 + 0x34)

if (eax_16 != 0)
    ecx_22 = eax_16(*(var_70 + 4), *arg4, *arg5, ecx_22, eax_2)

if ((ebx_2.b & 2) != 0)
    ebx_2 &= 0xfffffffd
    int32_t var_64_2 = ebx_2
    
    if (var_34 u>= 8)
        ecx_22 = j__free(var_48.d)
    
    var_34 = 7
    int32_t var_38_2 = 0
    var_48 = 0

int32_t var_8_3 = 0

if ((ebx_2.b & 1) != 0)
    ebx_2 &= 0xfffffffe
    int32_t var_64_3 = ebx_2
    
    if (var_1c u>= 8)
        ecx_22 = j__free(var_30)

*arg6 += 1
int16_t* ecx_28
int32_t ebx_3

if (arg3 == 0)
    var_34 = 7
    int32_t var_38_3 = 0
    var_48 = 0
    sub_52e720(&var_48, &data_ad7c90, nullptr)
    ecx_28 = &var_48
    int32_t var_8_4 = 9
    ebx_3 = ebx_2 | 8
else
    *(arg3 + 0x1cc)
    int16_t* var_84_19 = ecx_22
    ecx_28 = sub_6ad9b0(&var_30)
    var_8_3.b = 8
    ebx_3 = ebx_2 | 4

int32_t var_64_4 = ebx_3
int32_t eax_19 = *(data_bac4e0 + 0x34)

if (eax_19 != 0)
    ecx_28 = eax_19(*(var_70 + 4), *arg4, *arg5, ecx_28, eax_2)

if ((ebx_3.b & 8) != 0)
    ebx_3 &= 0xfffffff7
    int32_t var_64_5 = ebx_3
    
    if (var_34 u>= 8)
        ecx_28 = j__free(var_48.d)
    
    var_34 = 7
    int32_t var_38_4 = 0
    var_48 = 0

int32_t var_8_5 = 0

if ((ebx_3.b & 4) != 0)
    ebx_3 &= 0xfffffffb
    int32_t var_64_6 = ebx_3
    
    if (var_1c u>= 8)
        ecx_28 = j__free(var_30)

*arg6 += 1
int16_t* ecx_34
int32_t ebx_4

if (arg3 == 0)
    var_34 = 7
    int32_t var_38_5 = 0
    var_48 = 0
    sub_52e720(&var_48, &data_ad7c90, nullptr)
    ecx_34 = &var_48
    int32_t var_8_6 = 0xb
    ebx_4 = ebx_3 | 0x20
else
    *(arg3 + 0x1d0)
    int16_t* var_84_23 = ecx_28
    ecx_34 = sub_6ad9b0(&var_30)
    var_8_5.b = 0xa
    ebx_4 = ebx_3 | 0x10

int32_t var_64_7 = ebx_4
int32_t eax_22 = *(data_bac4e0 + 0x34)

if (eax_22 != 0)
    eax_22(*(var_70 + 4), *arg4, *arg5, ecx_34, eax_2)

if ((ebx_4.b & 0x20) != 0)
    ebx_4 &= 0xffffffdf
    
    if (var_34 u>= 8)
        j__free(var_48.d)
    
    int32_t var_34_1 = 7
    int32_t var_38_6 = 0
    var_48 = 0

int32_t var_8_7 = 0

if ((ebx_4.b & 0x10) != 0)
    if (var_1c u>= 8)
        j__free(var_30)
    
    int32_t var_1c_1 = 7
    int32_t var_20_1 = 0
    var_30.w = 0

void* eax_23 = data_bac4e0
*arg6 += 1
int32_t result = *(eax_23 + 0x34)

if (result != 0)
    result = result(*(var_70 + 4), *arg4, *arg5, &var_60, eax_2)

*arg6 += 1

if (var_4c u>= 8)
    result = j__free(var_60.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
