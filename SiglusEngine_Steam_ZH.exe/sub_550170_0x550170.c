// 函数: sub_550170
// 地址: 0x550170
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b1868
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_80 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_1c = 7
int32_t var_20 = 0
int16_t var_30 = 0
int32_t var_8_1 = 0
int32_t ebx = 0
int32_t* i = *(arg3 + 8)
int32_t esi_2

if (i u>= *(arg3 + 0xc))
    esi_2 = *(data_bac45c + 0x64)
else
    void* esi_1 = &i[3]
    
    do
        int32_t eax_4 = *i
        
        if (eax_4 == 0)
            if (&var_30 != esi_1)
                sub_52e3c0(&var_30, esi_1, 0, 0xffffffff)
        else if (eax_4 == 1)
            ebx = *(esi_1 - 4)
        
        i = &i[0x59]
        esi_1 += 0x164
    while (i u< *(arg3 + 0xc))
    
    if (var_20 == 0)
        esi_2 = *(data_bac45c + 0x64)
    else
        esi_2 = sub_6980b0(data_bac45c, &var_30)
        
        if (esi_2 == 0xffffffff)
            int16_t var_48
            int16_t* eax_10 = sub_548cb0(&var_30, 0xad8960, &var_48, &var_30)
            var_8_1.b = 1
            int16_t var_60
            int16_t* eax_11 = sub_532b80(eax_10, eax_10, &var_60, 0xad8948)
            var_8_1.b = 2
            sub_684160(data_bac424, 9, eax_11)
            int32_t var_4c
            
            if (var_4c u>= 8)
                j__free(var_60.d)
            
            int32_t var_4c_1 = 7
            int32_t var_50_1 = 0
            var_60 = 0
            int32_t var_34
            
            if (var_34 u>= 8)
                j__free(var_48.d)
            
            int32_t var_34_1 = 7
            int32_t var_38_1 = 0
            var_48 = 0

if (ebx s<= 0)
    ebx = *(data_bac45c + 0x68)

*arg2 = esi_2
int32_t* result = arg4
*result = ebx

if (var_1c u>= 8)
    result = j__free(var_30.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
