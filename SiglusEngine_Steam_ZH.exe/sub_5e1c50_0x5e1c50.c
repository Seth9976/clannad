// 函数: sub_5e1c50
// 地址: 0x5e1c50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ba611
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3f4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = arg3

if (&arg1[3] != arg2)
    sub_52e3c0(&arg1[3], arg2, 0, 0xffffffff)

int32_t var_3d0 = 0
void** ecx_1

if (arg2[5] u< 8)
    ecx_1 = arg2
else
    ecx_1 = *arg2

void** var_3e0 = ecx_1

while (true)
    int32_t edi_1 = arg2[5]
    void** eax_4
    
    if (edi_1 u< 8)
        eax_4 = arg2
    else
        eax_4 = *arg2
    
    int32_t edx_2 = arg2[4] * 2
    
    if (ecx_1 == eax_4 + edx_2)
        break
    
    int32_t var_3d8 = 0
    uint32_t var_3d4 = 0xffffffff
    void** eax_6
    
    if (edi_1 u< 8)
        eax_6 = arg2
    else
        eax_6 = *arg2
    
    void* eax_7 = eax_6 + edx_2
    sub_64f180(eax_7, &var_3d8, &var_3e0, eax_7, &var_3d4)
    int32_t var_3cc
    sub_5db1c0(&var_3cc)
    int32_t eax_8 = arg5
    int32_t var_8_1 = 0
    int32_t edi_2 = var_3d8
    var_3cc = edi_2
    
    if (edi_2 == 1)
        eax_8 = 0
    
    int32_t var_3c4_1 = arg4
    int32_t var_3c0_1 = eax_8
    int32_t var_3bc_1 = arg6
    uint32_t var_3c8_1 = var_3d4
    int32_t var_3b8_1 = arg7
    int32_t var_3b4_1 = var_3d0
    int32_t var_3b0_1 = 0
    sub_5b4a00(&arg1[0x20], &var_3cc)
    
    if (edi_2 == 0)
        int32_t eax_12 = data_b9c398
        
        if ((eax_12.b & 1) == 0)
            data_b9c398 = eax_12 | 1
            sub_6ad730()
    
    int32_t eax_19
    
    if (edi_2 != 0 || *(zx.d(var_3d4.w) + 0xb9c3a0) != 1)
        eax_19 = arg4
    else
        int32_t eax_17
        int32_t edx_4
        edx_4:eax_17 = sx.q(arg4)
        eax_19 = (eax_17 - edx_4) s>> 1
    
    var_3d0 += eax_19
    int32_t var_8_2 = 2
    void var_148
    sub_6efc80(&var_148)
    var_8_2.b = 1
    void var_278
    sub_6efc80(&var_278)
    int32_t var_8_3 = 0xffffffff
    void var_3a8
    sub_6efc80(&var_3a8)
    ecx_1 = var_3e0

int32_t result = var_3d0 - arg8
arg1[9] = result
arg1[0xa] = arg4
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
