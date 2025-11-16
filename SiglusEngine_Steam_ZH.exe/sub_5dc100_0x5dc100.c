// 函数: sub_5dc100
// 地址: 0x5dc100
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9bc4a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_5c
int32_t eax_2 = __security_cookie ^ &var_5c
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_2
int32_t __saved_edi_1 = __saved_edi_2
int32_t __saved_edi
int32_t var_6c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t** var_58 = arg2
sub_5defe0(arg2, *(arg1 + 0xd8), *(arg1 + 0xe8), *(arg1 + 0xf8), *(arg1 + 0x108), *(arg1 + 0x118), 
    *(arg1 + 0x128))
int32_t esi = *(arg1 + 0x164)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_2 = *arg2

if (ecx_2 == arg2[1])
    ecx_2 = nullptr

*(ecx_2 + arg2[3]) = esi
int32_t eax_10 = arg2[3] + 4
arg2[3] = eax_10
int32_t esi_1 = *(arg1 + 0x168)
sub_5979b0(arg2, eax_10 + 4)
int32_t* ecx_4 = *arg2

if (ecx_4 == arg2[1])
    ecx_4 = nullptr

*(ecx_4 + arg2[3]) = esi_1
int32_t eax_14 = arg2[3] + 4
arg2[3] = eax_14
int32_t esi_2 = *(arg1 + 0x16c)
sub_5979b0(arg2, eax_14 + 4)
int32_t* ecx_6 = *arg2

if (ecx_6 == arg2[1])
    ecx_6 = nullptr

*(ecx_6 + arg2[3]) = esi_2
int32_t eax_18 = arg2[3] + 4
arg2[3] = eax_18
int32_t esi_3 = *(arg1 + 0x170)
sub_5979b0(arg2, eax_18 + 4)
int32_t* ecx_8 = *arg2

if (ecx_8 == arg2[1])
    ecx_8 = nullptr

*(ecx_8 + arg2[3]) = esi_3
int32_t eax_22 = arg2[3] + 4
arg2[3] = eax_22
int16_t esi_4 = *(arg1 + 0x174)
sub_5979b0(arg2, eax_22 + 2)
int16_t* ecx_10 = *arg2

if (ecx_10 == arg2[1])
    ecx_10 = nullptr

*(ecx_10 + arg2[3]) = esi_4
int32_t eax_26 = arg2[3] + 2
arg2[3] = eax_26
int32_t esi_5 = *(arg1 + 0x178)
sub_5979b0(arg2, eax_26 + 4)
int32_t* ecx_12 = *arg2

if (ecx_12 == arg2[1])
    ecx_12 = nullptr

*(ecx_12 + arg2[3]) = esi_5
int32_t eax_30 = arg2[3] + 4
arg2[3] = eax_30
int32_t esi_6 = *(arg1 + 0x17c)
sub_5979b0(arg2, eax_30 + 4)
int32_t* ecx_14 = *arg2

if (ecx_14 == arg2[1])
    ecx_14 = nullptr

*(ecx_14 + arg2[3]) = esi_6
int32_t eax_34 = arg2[3] + 4
arg2[3] = eax_34
int32_t esi_7 = *(arg1 + 0x180)
int32_t edi_1 = *(arg1 + 0x184)
sub_5979b0(arg2, eax_34 + 8)
int32_t* ecx_16 = *arg2

if (ecx_16 == arg2[1])
    ecx_16 = nullptr

int32_t eax_36 = arg2[3]
*(ecx_16 + eax_36) = esi_7
*(ecx_16 + eax_36 + 4) = edi_1
int32_t eax_38 = arg2[3] + 8
arg2[3] = eax_38
int32_t esi_8 = *(arg1 + 0x188)
sub_5979b0(arg2, eax_38 + 4)
int32_t* ecx_18 = *arg2

if (ecx_18 == arg2[1])
    ecx_18 = nullptr

*(ecx_18 + arg2[3]) = esi_8
int32_t eax_42 = arg2[3] + 4
arg2[3] = eax_42
int32_t esi_9 = *(arg1 + 0x18c)
sub_5979b0(arg2, eax_42 + 4)
int32_t* ecx_20 = *arg2
int32_t var_24 = 7

if (ecx_20 == arg2[1])
    ecx_20 = nullptr

int32_t var_28 = 0
*(ecx_20 + arg2[3]) = esi_9
arg2[3] += 4
int32_t var_70_11 = 0xffffffff
int128_t var_80_1
var_80_1:0xc.d = 0
int16_t var_38 = 0
var_80_1:8.d = arg1 + 0x134
sub_52e3c0(&var_38)
int32_t var_c_1 = 0
sub_5b0590(arg2, &var_38)
int32_t var_c_2 = 0xffffffff

if (var_24 u>= 8)
    j__free(var_38.d)

int32_t var_3c = 7
int32_t var_70_14 = 0xffffffff
var_80_1:0xc.d = 0
int16_t var_50 = 0
int32_t var_40 = 0
var_80_1:8.d = arg1 + 0x14c
sub_52e3c0(&var_50)
int32_t var_c_3 = 1
sub_5b0590(arg2, &var_50)
int32_t var_c_4 = 0xffffffff

if (var_3c u>= 8)
    j__free(var_50.d)

int32_t esi_10 = *(arg1 + 0x194)
var_50 = 0
int32_t var_3c_1 = 7
int32_t var_40_1 = 0
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_26 = *arg2

if (ecx_26 == arg2[1])
    ecx_26 = nullptr

*(ecx_26 + arg2[3]) = esi_10
int32_t eax_51 = arg2[3] + 4
arg2[3] = eax_51
int32_t esi_11 = *(arg1 + 0x198)
sub_5979b0(arg2, eax_51 + 4)
int32_t* ecx_28 = *arg2

if (ecx_28 == arg2[1])
    ecx_28 = nullptr

*(ecx_28 + arg2[3]) = esi_11
int32_t eax_55 = arg2[3] + 4
arg2[3] = eax_55
int32_t esi_12 = *(arg1 + 0x19c)
sub_5979b0(arg2, eax_55 + 4)
int32_t* ecx_30 = *arg2

if (ecx_30 == arg2[1])
    ecx_30 = nullptr

*(ecx_30 + arg2[3]) = esi_12
int32_t eax_59 = arg2[3] + 4
arg2[3] = eax_59
int32_t esi_13 = *(arg1 + 0x1a0)
sub_5979b0(arg2, eax_59 + 4)
int32_t* ecx_32 = *arg2

if (ecx_32 == arg2[1])
    ecx_32 = nullptr

*(ecx_32 + arg2[3]) = esi_13
int32_t eax_63 = arg2[3] + 4
arg2[3] = eax_63
int32_t* ebx
ebx.b = *(arg1 + 0x1a4)
sub_5979b0(var_58, eax_63 + 1)
int32_t* ecx_34 = *var_58

if (ecx_34 == var_58[1])
    ecx_34 = nullptr

*(ecx_34 + var_58[3]) = ebx.b
int32_t eax_67 = var_58[3] + 1
var_58[3] = eax_67
ebx.b = *(arg1 + 0x1a5)
sub_5979b0(var_58, eax_67 + 1)
int32_t* ecx_36 = *var_58

if (ecx_36 == var_58[1])
    ecx_36 = nullptr

*(ecx_36 + var_58[3]) = ebx.b
int32_t eax_71 = var_58[3] + 1
var_58[3] = eax_71
ebx.b = *(arg1 + 0x1a6)
sub_5979b0(var_58, eax_71 + 1)
int32_t* ecx_38 = *var_58

if (ecx_38 == var_58[1])
    ecx_38 = nullptr

*(ecx_38 + var_58[3]) = ebx.b
int32_t eax_75 = var_58[3] + 1
var_58[3] = eax_75
ebx.b = *(arg1 + 0x1a7)
sub_5979b0(var_58, eax_75 + 1)
char* edx = *var_58

if (edx == var_58[1])
    edx = nullptr

edx[var_58[3]] = ebx.b
var_58[3] += 1
int32_t result = sub_5deeb0(var_58, arg1 + 0x1ac)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_5c)
return result
