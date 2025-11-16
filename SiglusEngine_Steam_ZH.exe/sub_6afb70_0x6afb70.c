// 函数: sub_6afb70
// 地址: 0x6afb70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cab88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_90 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t esi = *arg1
int32_t edi = arg1[1]
int32_t var_3c = 7
int32_t var_40 = 0
int16_t var_50 = 0
var_8_1.b = 1
int32_t var_54 = 7
int32_t var_58 = 0
int16_t var_68 = 0
sub_52e720(&var_68, &data_ad7c90, nullptr)
int32_t* arg_1c
int32_t* ebx = arg_1c
int32_t* arg_8
int32_t* ecx_1 = &arg_8
int32_t var_1c = 7

if (ebx u>= 8)
    ecx_1 = arg_8

int32_t var_20 = 0
int32_t** ecx_2 = &arg_8

if (ebx u>= 8)
    ecx_2 = arg_8

int16_t var_30 = 0
var_8_1.b = 3
void* var_34 = ecx_1 + (arg2 << 1)
int32_t** var_38 = ecx_2
sub_52e3c0(&var_30, &var_68, 0, 0xffffffff)
var_8_1.b = 5

if (var_54 u>= 8)
    j__free(var_68.d)

int32_t var_54_1 = 7
int32_t var_58_1 = 0
var_68 = 0

if (sub_6af790(&var_38) != 0)
label_6afd95:
    ebx.b = 1
else
    ebx = &arg_1c
    
    while (true)
        int32_t var_70
        
        if (sub_6af880(&var_38, &var_70) != 0)
            int16_t eax_8 = var_70.w
            
            if (eax_8 == 0x20)
                if (sub_6af750(arg1) == 0)
                    ebx.b = sub_6af730(arg1, esi, edi)
                    break
            else if (eax_8 != 0x25)
                if (sub_6af810(arg1, eax_8) == 0)
                    ebx.b = sub_6af730(arg1, esi, edi)
                    break
            else
                char eax_11
                int32_t ecx_9
                eax_11, ecx_9 = sub_6af880(&var_38, &var_70)
                
                if (eax_11 != 0)
                    int16_t eax_12 = var_70.w
                    
                    if (eax_12 == 0x64)
                        int32_t var_74
                        
                        if (sub_6af8f0(arg1, &var_74) == 0)
                            ebx.b = sub_6af730(arg1, esi, edi)
                            break
                        
                        int32_t* ecx_11 = ebx[1]
                        ebx = &ebx[1]
                        *ecx_11 = var_74
                    else if (eax_12 == 0x73)
                        int32_t var_94_6 = ecx_9
                        
                        if (sub_6afb10(arg1, &var_50) == 0)
                            ebx.b = sub_6af730(arg1, esi, edi)
                            break
                        
                        int32_t* ecx_13 = ebx[1]
                        ebx = &ebx[1]
                        
                        if (ecx_13 != &var_50)
                            sub_52e3c0(ecx_13, &var_50, 0, 0xffffffff)
                    else if (eax_12 == 0x36 && sub_6af880(&var_38, &var_70) != 0 && var_70.w == 0x34
                            && sub_6af880(&var_38, &var_70) != 0 && var_70.w == 0x64)
                        int32_t var_80
                        
                        if (sub_6afa00(arg1, &var_80) == 0)
                            ebx.b = sub_6af730(arg1, esi, edi)
                            break
                        
                        int32_t* ecx_17 = ebx[1]
                        ebx = &ebx[1]
                        *ecx_17 = var_80
                        int32_t var_7c
                        ecx_17[1] = var_7c
        
        if (sub_6af790(&var_38) != 0)
            goto label_6afd95

if (var_1c u>= 8)
    j__free(var_30.d)

int32_t var_1c_1 = 7
int32_t var_20_1 = 0
var_30 = 0

if (var_3c u>= 8)
    j__free(var_50.d)

int32_t var_3c_1 = 7
bool cond:3 = arg_1c u< 8
int32_t var_40_1 = 0
var_50 = 0

if (not(cond:3))
    j__free(arg_8)

int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
