// 函数: sub_648430
// 地址: 0x648430
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c3748
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_44 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_4
int32_t edx
edx:eax_4 = sx.q(arg2)
int32_t var_34 = 0
int32_t var_30 = 0
int32_t edi_1 = (eax_4 - edx) s>> 1
int32_t eax_7
int32_t edx_1
edx_1:eax_7 = sx.q(arg2 + 1)
int32_t eax_9 = (eax_7 - edx_1) s>> 1
int32_t eax_11
int32_t edx_2
edx_2:eax_11 = sx.q(arg4)
int32_t var_2c = 0
int32_t eax_13 = (eax_11 - edx_2) s>> 1
int32_t eax_15
int32_t edx_3
edx_3:eax_15 = sx.q(arg4 + 1)
int32_t eax_17 = (eax_15 - edx_3) s>> 1
int32_t var_8_1 = 0
int32_t var_84
int32_t var_80
int32_t var_28
int32_t var_24
int32_t eax_33
int32_t ecx_6
int32_t edi_3

if (arg6 != 0)
    if (arg2 s<= 0)
    label_64865a:
        eax_17.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_17
    
    arg3[3] = arg2
    arg3[4] = 1
    sub_5979b0(arg3, arg2 << 2)
    int32_t eax_35 = *arg3
    
    if (eax_35 == arg3[1])
        eax_35 = 0
    
    int32_t eax_40
    int32_t edx_17
    edx_17:eax_40 = sx.q(arg7 - mods.dp.d(sx.q(edi_1), arg7))
    int32_t temp1_5 = mods.dp.d(edx_17:eax_40, arg7)
    sub_6476b0(divs.dp.d(edx_17:eax_40, arg7), temp1_5 + edi_1, &var_34, 1, arg5, 2, arg7)
    int32_t eax_42 = var_34
    
    if (eax_42 == var_30)
        eax_42 = 0
    
    sub_6c97b0(arg3, arg3[3], eax_35, arg3[4], eax_42, var_28, var_24, neg.d(temp1_5), 0)
    int32_t eax_48
    int32_t edx_24
    edx_24:eax_48 = sx.q(arg7 - mods.dp.d(sx.q(eax_9), arg7))
    sub_6476b0(divs.dp.d(edx_24:eax_48, arg7), mods.dp.d(edx_24:eax_48, arg7) + eax_9, &var_34, 1, 
        arg5, 3, arg7)
    edi_3 = var_34
    eax_33 = edi_3
    var_80 = 0
    var_84 = edi_1
    
    if (edi_3 == var_30)
        eax_33 = 0
    
    ecx_6 = eax_35
else
    if (arg4 s<= 0)
        goto label_64865a
    
    arg3[4] = arg4
    arg3[3] = 1
    sub_5979b0(arg3, arg4 << 2)
    int32_t eax_19 = *arg3
    
    if (eax_19 == arg3[1])
        eax_19 = 0
    
    int32_t temp1_1 = mods.dp.d(sx.q(arg7 - mods.dp.d(sx.q(eax_13), arg7)), arg7)
    int32_t eax_25 = temp1_1 + eax_13
    sub_6476b0(eax_25, 1, &var_34, eax_25, arg5, 0, arg7)
    int32_t eax_26 = var_34
    
    if (eax_26 == var_30)
        eax_26 = 0
    
    sub_6c97b0(eax_26, arg3[3], eax_19, arg3[4], eax_26, var_28, var_24, 0, neg.d(temp1_1))
    int32_t eax_31
    int32_t edx_12
    edx_12:eax_31 = sx.q(arg7 - mods.dp.d(sx.q(eax_17), arg7))
    sub_6476b0(divs.dp.d(edx_12:eax_31, arg7), 1, &var_34, mods.dp.d(edx_12:eax_31, arg7) + eax_17, 
        arg5, 1, arg7)
    edi_3 = var_34
    eax_33 = edi_3
    var_80 = eax_13
    
    if (edi_3 == var_30)
        eax_33 = 0
    
    var_84 = 0
    ecx_6 = eax_19

sub_6c97b0(arg3, arg3[3], ecx_6, arg3[4], eax_33, var_28, var_24, var_84, var_80)

if (edi_3 != 0)
    j__free(edi_3)

int32_t eax_51
eax_51.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_51
