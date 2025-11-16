// 函数: sub_648930
// 地址: 0x648930
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
int32_t eax_6 = (eax_4 - edx) s>> 1
int32_t eax_8
int32_t edx_1
edx_1:eax_8 = sx.q(arg2 + 1)
int32_t var_30 = 0
int32_t eax_12
int32_t edx_2
edx_2:eax_12 = sx.q(arg4)
int32_t var_2c = 0
int32_t eax_14 = (eax_12 - edx_2) s>> 1
int32_t eax_16
int32_t edx_3
edx_3:eax_16 = sx.q(arg4 + 1)
int32_t var_8_1 = 0
int32_t var_84
int32_t var_80
int32_t var_28
int32_t var_24
int32_t ebx

if (arg6 != 0)
    if (arg2 s<= 0)
    label_648af9:
        int32_t eax_18
        eax_18.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_18
    
    arg3[3] = arg2
    arg3[4] = 1
    sub_5979b0(arg3, arg2 << 2)
    ebx = *arg3
    
    if (ebx == arg3[1])
        ebx = 0
    
    sub_648730(0, eax_6, &var_34, 1, arg5, 2, arg7)
    int32_t eax_23 = var_34
    
    if (eax_23 == var_30)
        eax_23 = 0
    
    sub_648730(sub_6c97b0(arg3, arg3[3], ebx, arg3[4], eax_23, var_28, var_24, 0, 0), 
        (eax_8 - edx_1) s>> 1, &var_34, 1, arg5, 3, arg7)
    var_80 = 0
    var_84 = eax_6
else
    if (arg4 s<= 0)
        goto label_648af9
    
    arg3[4] = arg4
    arg3[3] = 1
    sub_5979b0(arg3, arg4 << 2)
    ebx = *arg3
    
    if (ebx == arg3[1])
        ebx = 0
    
    sub_648730(0, 1, &var_34, eax_14, arg5, 0, arg7)
    int32_t eax_20 = var_34
    
    if (eax_20 == var_30)
        eax_20 = 0
    
    sub_648730(sub_6c97b0(eax_20, arg3[3], ebx, arg3[4], eax_20, var_28, var_24, 0, 0), 1, &var_34, 
        (eax_16 - edx_3) s>> 1, arg5, 1, arg7)
    var_80 = eax_14
    var_84 = 0

int32_t esi_3 = var_34
int32_t eax_26 = esi_3

if (esi_3 == var_30)
    eax_26 = 0

sub_6c97b0(arg3, arg3[3], ebx, arg3[4], eax_26, var_28, var_24, var_84, var_80)

if (esi_3 != 0)
    j__free(esi_3)

int32_t eax_28
eax_28.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_28
