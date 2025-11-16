// 函数: sub_6fe6b0
// 地址: 0x6fe6b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ce659
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t* var_1c = arg1
*(arg1 + 0x14) = 7
*(arg1 + 0x10) = 0
*arg1 = 0
int32_t var_8_1 = 0
void* eax_3 = &arg1[0xe]
*(eax_3 + 0x14) = 7
*(eax_3 + 0x10) = 0
*eax_3 = 0
__builtin_memset(&arg1[0x50], 0, 0x34)
bool cond:0 = *(arg1 + 0x14) u< 8
*(arg1 + 0x10) = 0
int16_t* ecx

if (cond:0)
    ecx = arg1
else
    ecx = *arg1

*ecx = 0
*(arg1 + 0x18) = 0
bool cond:1 = *(eax_3 + 0x14) u< 8
*(eax_3 + 0x10) = 0

if (not(cond:1))
    eax_3 = *eax_3

*eax_3 = 0
__builtin_memset(&arg1[0x26], 0, 0x11)
*(arg1 + 0x34) = 0
__builtin_memset(&arg1[0x30], 0, 0x21)
*(arg1 + 0x38) = 9
*(arg1 + 0x3c) = 0
int128_t xmm0 = data_b0db60
*(arg1 + 0x40) = 0
*(arg1 + 0x44) = 1
arg1[0x24] = 1
*(arg1 + 0x84) = 0x3f800000
*(arg1 + 0x88) = 0x3cf5c28f
*(arg1 + 0x8c) = xmm0
*(arg1 + 0x9c) = 0x3f800000
var_8_1.b = 7
*(arg1 + 0xa0) = 0
int32_t* edi = *(arg1 + 0xa4)
int32_t var_14 = 0
int32_t var_18 = 0
*(arg1 + 0xa4) = 0

if (edi != 0)
    bool cond:2_1 = edi[1] != 1
    edi[1] -= 1
    
    if (not(cond:2_1))
        (*(*edi + 4))(eax_2)
        bool cond:4_1 = edi[2] != 1
        edi[2]
        edi[2] -= 1
        
        if (not(cond:4_1))
            (*(*edi + 8))()

var_8_1.b = 8
*(arg1 + 0xa8) = 0
int32_t* edi_1 = *(arg1 + 0xac)
var_14 = 0
int32_t var_18_1 = 0
*(arg1 + 0xac) = 0

if (edi_1 != 0)
    bool cond:3_1 = edi_1[1] != 1
    edi_1[1]
    edi_1[1] -= 1
    
    if (not(cond:3_1))
        (*(*edi_1 + 4))(eax_2)
        int32_t ecx_5 = edi_1[2]
        edi_1[2] -= 1
        
        if (ecx_5 == 1)
            (*(*edi_1 + 8))()

var_8_1.b = 6
*(arg1 + 0xb4) = *(arg1 + 0xb0)
var_14 = 0xa
sub_59a180(&arg1[0x58], &var_14)
*(arg1 + 0xc0) = *(arg1 + 0xbc)
var_14 = 0x14
sub_59a180(&arg1[0x5e], &var_14)
*(arg1 + 0xcc) = *(arg1 + 0xc8)
var_14 = 0x1e
sub_59a180(&arg1[0x64], &var_14)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
