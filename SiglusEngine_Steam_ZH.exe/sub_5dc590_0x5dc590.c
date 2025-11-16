// 函数: sub_5dc590
// 地址: 0x5dc590
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bc4e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = *arg2

if (eax_3 == arg2[1])
    eax_3 = 0

int128_t* ecx_1 = arg2[3] + eax_3
*(arg1 + 0xd8) = *ecx_1
*(arg1 + 0xe8) = ecx_1[1]
*(arg1 + 0xf8) = ecx_1[2]
*(arg1 + 0x108) = ecx_1[3]
*(arg1 + 0x118) = ecx_1[4]
*(arg1 + 0x128) = ecx_1[5].d
arg2[3] += 0x54
int32_t eax_5 = *arg2

if (eax_5 == arg2[1])
    eax_5 = 0

*(arg1 + 0x164) = *(arg2[3] + eax_5)
arg2[3] += 4
int32_t eax_7 = *arg2

if (eax_7 == arg2[1])
    eax_7 = 0

*(arg1 + 0x168) = *(arg2[3] + eax_7)
arg2[3] += 4
int32_t eax_9 = *arg2

if (eax_9 == arg2[1])
    eax_9 = 0

*(arg1 + 0x16c) = *(arg2[3] + eax_9)
arg2[3] += 4
int32_t eax_11 = *arg2

if (eax_11 == arg2[1])
    eax_11 = 0

*(arg1 + 0x170) = *(arg2[3] + eax_11)
arg2[3] += 4
int32_t eax_13 = *arg2

if (eax_13 == arg2[1])
    eax_13 = 0

eax_13.w = *(arg2[3] + eax_13)
*(arg1 + 0x174) = eax_13.w
arg2[3] += 2
int32_t eax_14 = *arg2

if (eax_14 == arg2[1])
    eax_14 = 0

*(arg1 + 0x178) = *(arg2[3] + eax_14)
arg2[3] += 4
int32_t eax_16 = *arg2

if (eax_16 == arg2[1])
    eax_16 = 0

*(arg1 + 0x17c) = *(arg2[3] + eax_16)
arg2[3] += 4
int32_t ecx_9 = *arg2
int32_t* edx = arg2[3]

if (ecx_9 == arg2[1])
    ecx_9 = 0

*(arg1 + 0x180) = *(edx + ecx_9)
*(arg1 + 0x184) = *(edx + ecx_9 + 4)
arg2[3] += 8
int32_t eax_20 = *arg2

if (eax_20 == arg2[1])
    eax_20 = 0

*(arg1 + 0x188) = *(arg2[3] + eax_20)
arg2[3] += 4
int32_t eax_22 = *arg2

if (eax_22 == arg2[1])
    eax_22 = 0

*(arg1 + 0x18c) = *(arg2[3] + eax_22)
arg2[3] += 4
int32_t var_44
void** eax_24 = sub_5b0600(arg2, &var_44)
int32_t var_8_1 = 0

if (arg1 + 0x134 != eax_24)
    sub_52e3c0(arg1 + 0x134, eax_24, 0, 0xffffffff)

int32_t var_8_2 = 0xffffffff
int32_t var_30

if (var_30 u>= 8)
    j__free(var_44)

int16_t var_2c
void** eax_25 = sub_5b0600(arg2, &var_2c)
int32_t var_8_3 = 1

if (arg1 + 0x14c != eax_25)
    sub_52e3c0(arg1 + 0x14c, eax_25, 0, 0xffffffff)

int32_t var_8_4 = 0xffffffff
int32_t var_18

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t* ecx_16 = *arg2
bool cond:4 = ecx_16 == arg2[1]
var_2c = 0

if (cond:4)
    ecx_16 = nullptr

int32_t var_18_1 = 7
int32_t var_1c = 0
*(arg1 + 0x194) = *(ecx_16 + arg2[3])
arg2[3] += 4
int32_t eax_28 = *arg2

if (eax_28 == arg2[1])
    eax_28 = 0

*(arg1 + 0x198) = *(arg2[3] + eax_28)
arg2[3] += 4
int32_t eax_30 = *arg2

if (eax_30 == arg2[1])
    eax_30 = 0

*(arg1 + 0x19c) = *(arg2[3] + eax_30)
arg2[3] += 4
int32_t eax_32 = *arg2

if (eax_32 == arg2[1])
    eax_32 = 0

*(arg1 + 0x1a0) = *(arg2[3] + eax_32)
arg2[3] += 4
int32_t eax_34 = *arg2

if (eax_34 == arg2[1])
    eax_34 = 0

*(arg1 + 0x1a4) = arg2[3][eax_34]
arg2[3] += 1
int32_t eax_36 = *arg2

if (eax_36 == arg2[1])
    eax_36 = 0

*(arg1 + 0x1a5) = arg2[3][eax_36]
arg2[3] += 1
int32_t eax_38 = *arg2

if (eax_38 == arg2[1])
    eax_38 = 0

*(arg1 + 0x1a6) = arg2[3][eax_38]
arg2[3] += 1
int32_t eax_40 = *arg2

if (eax_40 == arg2[1])
    eax_40 = 0

*(arg1 + 0x1a7) = arg2[3][eax_40]
arg2[3] += 1
sub_5def20(arg2, arg1 + 0x1ac)
int32_t eax_48
int32_t ecx_26

if (*(data_bac510 + 0x10bd8) != 1)
    int32_t ecx_27 = *(arg1 + 0xd8)
    ecx_26 = *(arg1 + 0xdc)
    *(arg1 + 0x12c) = (ecx_27 - 1) * *(arg1 + 0x1c) + ecx_27 * *(arg1 + 0x18)
    eax_48 = (ecx_26 - 1) * *(arg1 + 0x20)
else
    int32_t ecx_24 = *(arg1 + 0xdc)
    ecx_26 = *(arg1 + 0xd8)
    *(arg1 + 0x12c) = (ecx_24 - 1) * *(arg1 + 0x20) + ecx_24 * *(arg1 + 0x18)
    eax_48 = (ecx_26 - 1) * *(arg1 + 0x1c)

int32_t result = eax_48 + ecx_26 * *(arg1 + 0x18)
*(arg1 + 0x130) = result
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
