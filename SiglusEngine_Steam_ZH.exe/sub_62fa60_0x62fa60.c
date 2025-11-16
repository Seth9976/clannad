// 函数: sub_62fa60
// 地址: 0x62fa60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c1130
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t eax_2 = __security_cookie ^ &var_4
int32_t var_14 = eax_2
int32_t var_16c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = data_bac504
int32_t var_1e = 0
*(ebx + 0x10) = 0.q
*(ebx + 0x18) = 0
int32_t var_1a = 0
void* eax_3 = ebx + 0x20
*(ebx + 0xb8) = 0xffffffff
*(ebx + 0x1c) = 0
bool cond:0 = *(eax_3 + 0x14) u< 8
*(eax_3 + 0x10) = 0

if (not(cond:0))
    eax_3 = *eax_3

*eax_3 = 0
void* eax_4 = ebx + 0x38
bool cond:1 = *(eax_4 + 0x14) u< 8
*(eax_4 + 0x10) = 0

if (not(cond:1))
    eax_4 = *eax_4

*eax_4 = 0
void* eax_5 = ebx + 0x50
bool cond:2 = *(eax_5 + 0x14) u< 8
*(eax_5 + 0x10) = 0

if (not(cond:2))
    eax_5 = *eax_5

*eax_5 = 0
void* eax_6 = ebx + 0x68
bool cond:3 = *(eax_6 + 0x14) u< 8
*(eax_6 + 0x10) = 0

if (not(cond:3))
    eax_6 = *eax_6

*eax_6 = 0
void* eax_7 = ebx + 0x80
bool cond:4 = *(eax_7 + 0x14) u< 8
*(eax_7 + 0x10) = 0

if (not(cond:4))
    eax_7 = *eax_7

*eax_7 = 0
*(ebx + 0x9c) = *(ebx + 0x98)
*(ebx + 0xa4) = 0
*(ebx + 0xac) = *(ebx + 0xa8)
*(ebx + 0xb4) = 0
*(ebx + 0xc0) = *(ebx + 0xbc)
sub_5d4e30(ebx + 0xc8, *(*(ebx + 0xc8) + 4))
void* eax_12 = *(ebx + 0xc8)
*(eax_12 + 4) = eax_12
int32_t* eax_13 = *(ebx + 0xc8)
*eax_13 = eax_13
void* eax_14 = *(ebx + 0xc8)
*(eax_14 + 8) = eax_14
*(ebx + 0xcc) = 0
int32_t var_1e_1 = 0
*(ebx + 0xf4) = 0.q
*(ebx + 0xfc) = 0
int32_t var_1a_1 = 0
void* eax_15 = ebx + 0x104
*(ebx + 0x100) = 0
bool cond:5 = *(eax_15 + 0x14) u< 8
*(eax_15 + 0x10) = 0

if (not(cond:5))
    eax_15 = *eax_15

*eax_15 = 0
void* eax_16 = ebx + 0x11c
bool cond:6 = *(eax_16 + 0x14) u< 8
*(eax_16 + 0x10) = 0

if (not(cond:6))
    eax_16 = *eax_16

*eax_16 = 0
void* eax_17 = ebx + 0x134
bool cond:7 = *(eax_17 + 0x14) u< 8
*(eax_17 + 0x10) = 0

if (not(cond:7))
    eax_17 = *eax_17

*eax_17 = 0
void* eax_18 = ebx + 0x14c
bool cond:8 = *(eax_18 + 0x14) u< 8
*(eax_18 + 0x10) = 0

if (not(cond:8))
    eax_18 = *eax_18

*eax_18 = 0
void* eax_19 = ebx + 0x164
bool cond:9 = *(eax_19 + 0x14) u< 8
*(eax_19 + 0x10) = 0

if (not(cond:9))
    eax_19 = *eax_19

*eax_19 = 0
*(ebx + 0x180) = *(ebx + 0x17c)
*(ebx + 0x188) = 0
*(ebx + 0x190) = *(ebx + 0x18c)
*(ebx + 0x198) = 0
void* ecx_1 = ebx + 0x19c
int32_t edi = *(ecx_1 + 4)
void* esi_1 = *ecx_1

if (esi_1 != edi)
    do
        sub_634480(esi_1)
        esi_1 += 0xa8
    while (esi_1 != edi)
    
    ecx_1 = ebx + 0x19c

*(ecx_1 + 4) = *ecx_1
sub_630e80(ecx_1, *(data_bac510 + 0x10b94))
*(ebx + 0x4b3c4) = 0
*(ebx + 0x4b3cc) = 0xffffffff
*(ebx + 0x4a684) = 0
*(ebx + 0x4a686) = 0
*(ebx + 0x4a6bc) = 0
*(ebx + 0x4a6c0) = 0
*(ebx + 0x4a6ed) = 0
*(ebx + 0x4a6f0) = 0
*(ebx + 0x4a6f4) = 0xff
*(ebx + 0x4a6f8) = 0xff
*(ebx + 0x4a6fc) = 0
*(ebx + 0x4a700) = 0
*(ebx + 0x4a704) = 0xff
*(ebx + 0x4a708) = 0xff
*(ebx + 0x4a75c) = 0
sub_65fd10()
sub_62f7d0(ebx + 0x4ab00)
*(ebx + 0x4b00c) = 0
*(ebx + 0x4b024) = *(ebx + 0x4b020)
__builtin_memset(ebx + 0x4b040, 0, 0x24)
sub_681670(0)
sub_621120()
sub_686530(ebx + 0x4b2f4)
sub_5bcff0(ebx + 0x556b8)
sub_5bdc80(ebx + 0x5623c)
void* var_170_2 = 9
var_1a_1 = 7
wchar16 const* const var_174 = u"user_prop"
var_1e_1 = 0
int16_t var_2c = 0
sub_52e720(&var_2c, var_174, var_170_2)
int32_t var_8_1 = 0
int32_t var_60 = 0
int32_t var_178 = *(*(data_bac45c + 0x10) + 0x50)
int16_t* var_17c = &var_2c
void var_200
int32_t var_dc
__builtin_memcpy(&var_200, &var_dc, 0x80)
sub_631b60(ebx + 0x562f4)
int32_t var_8_2 = 0xffffffff

if (var_1a_1 u>= 8)
    j__free(var_2c.d)

void* var_170_4 = 7
var_1a_1 = 7
int32_t (* const* const var_174_1)() = &boost::any::placeholder::`vftable'.vFunc_3
var_1e_1 = 0
var_2c = 0
int32_t var_8_3 = 1
int32_t var_170_5 = sub_52e720(&var_2c, var_174_1, var_170_4)
int32_t var_174_2 = 0
int32_t var_60_1 = 1
int32_t var_178_1 = *(data_bac510 + 0x123f8)
var_dc = 0x28
int16_t* var_17c_1 = &var_2c
__builtin_memcpy(&var_200, &var_dc, 0x80)
sub_5ba740(ebx + 0x56464)
int32_t var_8_4 = 0xffffffff

if (var_1a_1 u>= 8)
    j__free(var_2c.d)

void* var_170_7 = 0xc
var_1a_1 = 7
wchar16 const* const var_174_3 = u"frame_action"
var_1e_1 = 0
var_2c = 0
sub_52e720(&var_2c, var_174_3, var_170_7)
int32_t var_8_5 = 2
int32_t var_e0 = 0
int32_t var_60_2 = 1
var_dc = 0x4f
void var_1ec
void var_15c
__builtin_memcpy(&var_1ec, &var_15c, 0x80)
void var_26c
__builtin_memcpy(&var_26c, &var_dc, 0x80)
sub_5bf5c0(ebx + 0x5651c, &var_2c, var_26c)
int32_t var_8_6 = 0xffffffff

if (var_1a_1 u>= 8)
    j__free(var_2c.d)

void* var_170_9 = 0xf
var_1a_1 = 7
wchar16 const* const var_174_4 = u"frame_action_ch"
var_1e_1 = 0
var_2c = 0
sub_52e720(&var_2c, var_174_4, var_170_9)
int32_t var_8_7 = 3
void* eax_28 = data_bac510
int32_t var_e0_1 = 0
int32_t var_60_3 = 1
var_dc = 0x35
int32_t eax_29 = *(eax_28 + 0xa48b58)
int32_t var_170_10 = __builtin_memcpy(ebx + 0x568a0, &var_15c, 0x80)
int32_t var_174_5 = 0
int32_t var_178_2 = eax_29
int16_t* var_17c_2 = &var_2c
__builtin_memcpy(&var_200, &var_dc, 0x80)
sub_5c0880(ebx + 0x567e8)
int32_t var_8_8 = 0xffffffff

if (var_1a_1 u>= 8)
    j__free(var_2c.d)

void* var_170_12 = 6
var_1a_1 = 7
wchar16 const* const var_174_6 = u"g00buf"
var_1e_1 = 0
var_2c = 0
sub_52e720(&var_2c, var_174_6, var_170_12)
int32_t var_8_9 = 4
void* eax_30 = data_bac510
int32_t var_60_4 = 1
var_dc = 0x7c
int32_t var_178_3 = *(eax_30 + 0x1274c)
int16_t* var_17c_3 = &var_2c
__builtin_memcpy(&var_200, &var_dc, 0x80)
sub_631c50(ebx + 0x56920)
int32_t var_8_10 = 0xffffffff
int32_t entry_ebx
return sub_630053(&var_4, arg2, arg1, entry_ebx) __tailcall
