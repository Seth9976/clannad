// 函数: sub_5e4840
// 地址: 0x5e4840
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bcaa4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_1c0 = arg1
arg1[0x20] = 0x51e
void arg_20
__builtin_memcpy(arg1, &arg_20, 0x80)

if (&arg1[0x21] != arg2)
    sub_52e3c0(&arg1[0x21], arg2, 0, 0xffffffff)

arg1[0x27] = arg8
int32_t eax_4
eax_4.b = arg3
arg1[0x28].b = eax_4.b
void arg_a0
__builtin_memcpy(&arg1[0x2b], &arg_a0, 0x80)
*(arg1 + 0xa1) = arg4
*(arg1 + 0xa2) = arg5
arg1[0x2a] = arg7
int32_t eax_7
eax_7.b = arg6
void arg_120
__builtin_memcpy(&arg1[0x4b], &arg_120, 0x80)
int16_t* var_1d4_2 = u".x_rep"
*(arg1 + 0xa3) = eax_7.b
int32_t var_30
int16_t* eax_8 = sub_532b80(eax_7, arg2, &var_30, var_1d4_2)
int32_t var_8_1 = 0
int32_t var_34 = 1
arg1[0x2a1] = 0
int32_t var_b0[0x14]
__builtin_memcpy(&var_b0, &arg_20, 0x80)
var_b0[arg9] = 0x36
int32_t var_34_1 = var_34 + 1
int16_t* var_1e0 = eax_8
void var_264
__builtin_memcpy(&var_264, &var_b0, 0x80)
int32_t eax_10 = sub_5c1e20(&arg1[0x273], var_264)
int32_t var_8_2 = 0xffffffff
int32_t var_1c

if (var_1c u>= 8)
    eax_10 = j__free(var_30)

int16_t* eax_11 = sub_532b80(eax_10, arg2, &var_30, u".y_rep")
int32_t var_8_3 = 1
int32_t var_34_2 = 1
arg1[0x2d0] = 0
__builtin_memcpy(&var_b0, &arg_20, 0x80)
var_b0[arg9] = 0x3f
int32_t var_34_3 = var_34_2 + 1
int16_t* var_1e0_1 = eax_11
__builtin_memcpy(&var_264, &var_b0, 0x80)
int32_t eax_13 = sub_5c1e20(&arg1[0x2a2])
int32_t var_8_4 = 0xffffffff

if (var_1c u>= 8)
    eax_13 = j__free(var_30)

int16_t* eax_14 = sub_532b80(eax_13, arg2, &var_30, u".z_rep")
int32_t var_8_5 = 2
int32_t var_34_4 = 1
arg1[0x2ff] = 0
__builtin_memcpy(&var_b0, &arg_20, 0x80)
var_b0[arg9] = 0x6e
int32_t var_34_5 = var_34_4 + 1
int16_t* var_1e0_2 = eax_14
__builtin_memcpy(&var_264, &var_b0, 0x80)
int32_t eax_16 = sub_5c1e20(&arg1[0x2d1])
int32_t var_8_6 = 0xffffffff

if (var_1c u>= 8)
    eax_16 = j__free(var_30)

int16_t* eax_17 = sub_532b80(eax_16, arg2, &var_30, u".tr_rep")
int32_t var_8_7 = 3
int32_t var_34_6 = 1
arg1[0x32e] = 0xff
__builtin_memcpy(&var_b0, &arg_20, 0x80)
var_b0[arg9] = 0x8d
int32_t var_34_7 = var_34_6 + 1
int16_t* var_1e0_3 = eax_17
__builtin_memcpy(&var_264, &var_b0, 0x80)
int32_t eax_19 = sub_5c1e20(&arg1[0x300])
int32_t var_8_8 = 0xffffffff

if (var_1c u>= 8)
    eax_19 = j__free(var_30)

int16_t* eax_20 = sub_532b80(eax_19, arg2, &var_30, &data_af3068)
int32_t var_8_9 = 4
int32_t var_1d8_2 = 1
int32_t var_1dc_2 = 0
int32_t var_34_8 = 1
__builtin_memcpy(&var_b0, &arg_20, 0x80)
int16_t* var_1e0_4 = eax_20
var_b0[arg9] = 0x6f
int32_t var_34_9 = var_34_8 + 1
__builtin_memcpy(&var_264, &var_b0, 0x80)
int32_t eax_22 = sub_5c3640(&arg1[0x32f])
int32_t var_8_10 = 0xffffffff

if (var_1c u>= 8)
    eax_22 = j__free(var_30)

int16_t* eax_23 = sub_532b80(eax_22, arg2, &var_30, u".frame_action")
int32_t var_8_11 = 5
int32_t var_34_10 = 1
__builtin_memcpy(&var_b0, &arg_20, 0x80)
var_b0[arg9] = 0x34
int32_t var_34_11 = var_34_10 + 1
void var_250
__builtin_memcpy(&var_250, &arg_20, 0x80)
void var_2d0
__builtin_memcpy(&var_2d0, &var_b0, 0x80)
int32_t eax_25 = sub_5bf5c0(&arg1[0x3a5], eax_23, var_2d0)
int32_t var_8_12 = 0xffffffff

if (var_1c u>= 8)
    eax_25 = j__free(var_30)

int16_t* eax_26 = sub_532b80(eax_25, arg2, &var_30, u".frame_action_ch")
int32_t var_8_13 = 6
int32_t var_1d8_3 = 1
int32_t var_34_12 = 1
__builtin_memcpy(&var_b0, &arg_20, 0x80)
int32_t var_1dc_3 = 0
int16_t* var_1e0_5 = eax_26
var_b0[arg9] = 0x73
int32_t var_34_13 = var_34_12 + 1
__builtin_memcpy(&arg1[0x486], &arg_20, 0x80)
__builtin_memcpy(&var_264, &var_b0, 0x80)
int32_t eax_28 = sub_5c0880(&arg1[0x458])
int32_t var_8_14 = 0xffffffff

if (var_1c u>= 8)
    eax_28 = j__free(var_30)

int16_t* eax_29 = sub_532b80(eax_28, arg2, &var_30, u".child")
int32_t var_8_15 = 7
int32_t var_34_14 = 1
__builtin_memcpy(&var_b0, &arg_20, 0x80)
var_b0[arg9] = 0x5d
int32_t var_34_15 = var_34_14 + 1
void var_1b0
void* eax_31 = sub_5d5d50(&var_1b0, &arg_120)
void var_130
void* eax_32 = sub_5d5d50(&var_130, &arg_a0)
__builtin_memcpy(&var_250, eax_31, 0x80)
__builtin_memcpy(&var_2d0, eax_32, 0x80)
void var_350
__builtin_memcpy(&var_350, &var_b0, 0x80)
int32_t* esi_2 = var_1c0
sub_5f0c10(&esi_2[0x4e4], eax_29, 0, 1, 0, arg4, arg5, esi_2)
int32_t var_8_16 = 0xffffffff

if (var_1c u>= 8)
    j__free(var_30)

int32_t* edi_4 = sub_745f3f(0x130)
var_1c0 = edi_4
int32_t var_8_17 = 8

if (edi_4 == 0)
    edi_4 = nullptr
else
    sub_6efae0(edi_4)
    edi_4[0x48] = 0
    edi_4[0x49] = 0
    edi_4[0x4a] = 0
    edi_4[0x4b] = 0

int32_t* var_1bc = edi_4
int32_t var_1b8 = 0
int32_t var_8_18 = 9
int32_t* eax_34 = sub_5f2150(&var_1c0, edi_4)
int32_t ecx_21 = *eax_34
*eax_34 = var_1b8
int32_t* edx_18 = var_1c0

if (edx_18 != 0)
    bool cond:0_1 = edx_18[1] != 1
    edx_18[1]
    edx_18[1] -= 1
    
    if (not(cond:0_1))
        (*(*edx_18 + 4))(eax_2)
        bool cond:2_1 = edx_18[2] != 1
        edx_18[2]
        edx_18[2] -= 1
        
        if (not(cond:2_1))
            (*(*edx_18 + 8))()

int32_t* var_1d4_20 = edi_4
int32_t* var_1d8_4 = edi_4
int32_t** var_1dc_4 = &var_1bc
int32_t var_8_19 = 0xa
int32_t* edi_5 = nullptr
esi_2[0x560] = var_1bc
int32_t* edx_20 = esi_2[0x561]
int32_t* var_1b8_2 = nullptr
var_1bc = nullptr
esi_2[0x561] = ecx_21

if (edx_20 != 0)
    bool cond:1_1 = edx_20[1] != 1
    edx_20[1]
    edx_20[1] -= 1
    
    if (not(cond:1_1))
        (*(*edx_20 + 4))(eax_2)
        bool cond:4_1 = edx_20[2] != 1
        edx_20[2]
        edx_20[2] -= 1
        
        if (not(cond:4_1))
            (*(*edx_20 + 8))()
    
    edi_5 = var_1b8_2

int32_t var_8_20 = 0xffffffff

if (edi_5 != 0)
    bool cond:3_1 = edi_5[1] != 1
    edi_5[1]
    edi_5[1] -= 1
    
    if (not(cond:3_1))
        (*(*edi_5 + 4))(eax_2)
        int32_t ebx_2 = edi_5[2]
        edi_5[2] -= 1
        
        if (ebx_2 == 1)
            (*(*edi_5 + 8))()

char var_1d4_21 = 0
esi_2[0x6c] = 0
esi_2[0x6d] = 0
sub_5e5060(esi_2, var_1d4_21)
void* result = sub_5e5540(esi_2, 0)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
