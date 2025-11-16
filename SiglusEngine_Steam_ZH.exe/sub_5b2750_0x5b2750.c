// 函数: sub_5b2750
// 地址: 0x5b2750
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ba548
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x80) = 0x53c
void arg_8
__builtin_memcpy(arg1, &arg_8, 0x80)

if (arg1 + 0x84 != arg2)
    sub_52e3c0(arg1 + 0x84, arg2, 0, 0xffffffff)

int16_t* var_1cc_2 = u".object"
*(arg1 + 0x9c) = 0
int32_t var_30
int16_t* eax_4 = sub_532b80(arg2, arg2, &var_30, var_1cc_2)
int32_t var_8_1 = 0
int32_t var_34 = 1
int32_t var_b0[0xe]
__builtin_memcpy(&var_b0, &arg_8, 0x80)
int32_t var_bc = 0
var_b0[arg3] = 0
int32_t var_34_1 = var_34 + 1
void* eax_6 = arg1 + 0xa0
int32_t var_13c = 0
void var_138
__builtin_memcpy(eax_6 + 0xbc, &var_138, 0x80)
void* edx_1 = eax_6 + 4
*(eax_6 + 0xb8) = 0
*(eax_6 + 0xba) = 0
void* var_b8 = edx_1
void var_1b8
__builtin_memcpy(eax_6 + 0x13c, &var_1b8, 0x80)
*(edx_1 + 0x80) = 0x51f
__builtin_memcpy(edx_1, &var_b0, 0x80)

if (edx_1 + 0x84 != eax_4)
    sub_52e3c0(edx_1 + 0x84, eax_4, 0, 0xffffffff)
    edx_1 = var_b8
    eax_6 = arg1 + 0xa0

*(edx_1 + 0x9c) = 0
int32_t var_1cc_4 = 0
*(eax_6 + 0xb0) = 0
*(eax_6 + 0xb4) = 1
sub_5571d0(eax_6 + 0xa4, var_1cc_4)
(**(arg1 + 0xa0))(0, 0)
int32_t var_8_2 = 0xffffffff
int32_t var_1c

if (var_1c u>= 8)
    j__free(var_30)

void* eax_8 = arg1 + 0x260
*(arg1 + 0x25c) = 0xffffffff
bool cond:0 = *(eax_8 + 0x14) u< 8
*(eax_8 + 0x10) = 0

if (not(cond:0))
    eax_8 = *eax_8

*eax_8 = 0
void* eax_9 = arg1 + 0x278
bool cond:1 = *(eax_9 + 0x14) u< 8
*(eax_9 + 0x10) = 0

if (not(cond:1))
    eax_9 = *eax_9

void* var_1cc_7 = var_b8
*eax_9 = 0
int32_t var_1d0_4 = 0
sub_551590(*(arg1 + 0x304), *(arg1 + 0x308))
*(arg1 + 0x308) = *(arg1 + 0x304)
sub_67d4b0(arg1 + 0x2c0)
*(arg1 + 0x310) = 0
int32_t* esi_1 = *(arg1 + 0x314)
*(arg1 + 0x314) = 0

if (esi_1 != 0)
    bool cond:2_1 = esi_1[1] != 1
    esi_1[1]
    esi_1[1] -= 1
    
    if (not(cond:2_1))
        (*(*esi_1 + 4))(eax_2)
        bool cond:5_1 = esi_1[2] != 1
        esi_1[2]
        esi_1[2] -= 1
        
        if (not(cond:5_1))
            (*(*esi_1 + 8))()

*(arg1 + 0x318) = 0
int32_t* esi_2 = *(arg1 + 0x31c)
*(arg1 + 0x31c) = 0

if (esi_2 != 0)
    bool cond:4_1 = esi_2[1] != 1
    esi_2[1]
    esi_2[1] -= 1
    
    if (not(cond:4_1))
        (*(*esi_2 + 4))(eax_2)
        int32_t edi_4 = esi_2[2]
        esi_2[2] -= 1
        
        if (edi_4 == 1)
            (*(*esi_2 + 8))()

sub_6efe60(arg1 + 0x320)
*(arg1 + 0x440) = 0
*(arg1 + 0x444) = 0
*(arg1 + 0x448) = 0
*(arg1 + 0x44c) = 0
sub_6efdb0(arg1 + 0x320)
sub_6efe60(arg1 + 0x450)
*(arg1 + 0x570) = 0
*(arg1 + 0x574) = 0
*(arg1 + 0x578) = 0
*(arg1 + 0x57c) = 0
sub_6efdb0(arg1 + 0x450)
bool cond:3 = *(arg1 + 0x2a4) u< 8
void* result = arg1 + 0x290
*(result + 0x10) = 0

if (not(cond:3))
    result = *result

*result = 0
*(arg1 + 0x2a8) = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
