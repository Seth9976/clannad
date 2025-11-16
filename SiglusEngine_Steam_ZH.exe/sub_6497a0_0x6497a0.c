// 函数: sub_6497a0
// 地址: 0x6497a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c3868
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_4c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 s<= 0 || arg4 s<= 0)
    int32_t eax_3
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

arg3[3] = arg2
arg3[4] = arg4
sub_5979b0(arg3, (arg2 * arg4) << 2)
int32_t ebx = *arg3
bool cond:0 = ebx == arg3[1]
int32_t var_3c = 0

if (cond:0)
    ebx = 0

int32_t var_38 = 0
int32_t eax_7
int32_t edx
edx:eax_7 = sx.q(arg2)
int32_t var_34 = 0
int32_t ecx_1 = (eax_7 - edx) s>> 1
int32_t eax_11
int32_t edx_1
edx_1:eax_11 = sx.q(arg2 + 1)
int32_t eax_13 = (eax_11 - edx_1) s>> 1
int32_t eax_15
int32_t edx_2
edx_2:eax_15 = sx.q(arg4)
int32_t eax_17 = (eax_15 - edx_2) s>> 1
int32_t eax_19
int32_t edx_3
edx_3:eax_19 = sx.q(arg4 + 1)
int32_t eax_21 = (eax_19 - edx_3) s>> 1
int32_t var_8_1 = 0
int32_t eax_26
int32_t edx_6
edx_6:eax_26 = sx.q(arg6 - mods.dp.d(sx.q(ecx_1), arg6))
int32_t temp1_1 = mods.dp.d(edx_6:eax_26, arg6)
sub_6476b0(divs.dp.d(edx_6:eax_26, arg6), temp1_1 + ecx_1, &var_3c, 1, arg5, 2, arg6)
int32_t ecx_3 = var_3c

if (ecx_3 == var_38)
    ecx_3 = 0

int32_t edi_3 = 0
int32_t var_28 = ecx_3
int32_t var_30
int32_t var_2c

if (eax_17 s> 0)
    int32_t eax_29 = neg.d(temp1_1)
    int32_t var_1c_1 = eax_29
    
    do
        sub_6c97b0(eax_29, arg3[3], ebx, arg3[4], ecx_3, var_30, var_2c, eax_29, edi_3)
        eax_29 = var_1c_1
        edi_3 += 1
        ecx_3 = var_28
    while (edi_3 s< eax_17)

int32_t eax_34
int32_t edx_12
edx_12:eax_34 = sx.q(arg6 - mods.dp.d(sx.q(eax_13), arg6))
sub_6476b0(divs.dp.d(edx_12:eax_34, arg6), mods.dp.d(edx_12:eax_34, arg6) + eax_13, &var_3c, 1, 
    arg5, 3, arg6)
int32_t ecx_7 = var_3c

if (ecx_7 == var_38)
    ecx_7 = 0

int32_t edi_4 = 0
int32_t var_28_1 = ecx_7

if (eax_21 s> 0)
    do
        int32_t eax_37 = eax_17 + edi_4
        sub_6c97b0(eax_37, arg3[3], ebx, arg3[4], ecx_7, var_30, var_2c, ecx_1, eax_37)
        ecx_7 = var_28_1
        edi_4 += 1
    while (edi_4 s< eax_21)

int32_t temp1_5 = mods.dp.d(sx.q(arg6 - mods.dp.d(sx.q(eax_17), arg6)), arg6)
int32_t eax_43 = temp1_5 + eax_17
sub_6476b0(eax_43, 1, &var_3c, eax_43, arg5, 0, arg6)
int32_t ecx_11 = var_3c

if (ecx_11 == var_38)
    ecx_11 = 0

int32_t edi_6 = 0
int32_t var_28_2 = ecx_11

if (eax_13 s> 0)
    int32_t eax_45 = neg.d(temp1_5)
    int32_t var_1c_3 = eax_45
    
    do
        int32_t eax_47 = ecx_1 + edi_6
        sub_6c97b0(eax_47, arg3[3], ebx, arg3[4], ecx_11, var_30, var_2c, eax_47, eax_45)
        eax_45 = var_1c_3
        edi_6 += 1
        ecx_11 = var_28_2
    while (edi_6 s< eax_13)

int32_t eax_52
int32_t edx_23
edx_23:eax_52 = sx.q(arg6 - mods.dp.d(sx.q(eax_21), arg6))
sub_6476b0(divs.dp.d(edx_23:eax_52, arg6), 1, &var_3c, mods.dp.d(edx_23:eax_52, arg6) + eax_21, 
    arg5, 1, arg6)
int32_t ecx_15 = var_3c
int32_t eax_54 = ecx_15

if (ecx_15 == var_38)
    eax_54 = 0

int32_t edi_7 = 0
int32_t var_28_3 = eax_54

if (ecx_1 s> 0)
    do
        sub_6c97b0(eax_54, arg3[3], ebx, arg3[4], eax_54, var_30, var_2c, edi_7, eax_17)
        eax_54 = var_28_3
        edi_7 += 1
    while (edi_7 s< ecx_1)
    
    ecx_15 = var_3c

if (ecx_15 != 0)
    j__free(ecx_15)

eax_54.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_54
