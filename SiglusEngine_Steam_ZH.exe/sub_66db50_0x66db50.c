// 函数: sub_66db50
// 地址: 0x66db50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c66d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_70 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_2 = (arg2 - arg3) s/ 0x30
int32_t result = result_2
int32_t i_4 = (arg4 - arg3) s/ 0x30
int32_t i_3 = i_4
int32_t i_2 = i_3

if (result != 0)
    int32_t ecx_3 = result
    int32_t i
    
    do
        i_2 = ecx_3
        i = mods.dp.d(sx.q(i_3), ecx_3)
        ecx_3 = i
        i_3 = i_2
    while (i != 0)
    result = result_2

if (i_3 s< i_4 && i_3 s> 0)
    void** ecx_4 = arg3
    result *= 0x30
    void* edi_3 = &ecx_4[i_3 * 0xc]
    int32_t result_1 = result
    void* var_60_1 = edi_3
    int32_t i_1
    
    do
        void** esi_3 = edi_3 + result
        void** ebx_1 = edi_3
        
        if (esi_3 == arg4)
            esi_3 = ecx_4
        
        do
            if (ebx_1 != esi_3)
                int32_t var_34_1 = 7
                int32_t var_38_1 = 0
                int16_t var_48 = 0
                sub_52e3c0(&var_48, ebx_1, 0, 0xffffffff)
                int32_t var_8_1 = 0
                sub_52e3c0(ebx_1, esi_3, 0, 0xffffffff)
                
                if (esi_3 != &var_48)
                    sub_52e3c0(esi_3, &var_48, 0, 0xffffffff)
                
                int32_t var_8_2 = 0xffffffff
                
                if (var_34_1 u>= 8)
                    j__free(var_48.d)
                
                int32_t var_1c_1 = 7
                int32_t var_20_1 = 0
                int16_t var_30 = 0
                sub_52e3c0(&var_30, &ebx_1[6], 0, 0xffffffff)
                int32_t var_8_3 = 1
                
                if (&ebx_1[6] != &esi_3[6])
                    sub_52e3c0(&ebx_1[6], &esi_3[6], 0, 0xffffffff)
                
                if (&esi_3[6] != &var_30)
                    sub_52e3c0(&esi_3[6], &var_30, 0, 0xffffffff)
                
                int32_t var_8_4 = 0xffffffff
                
                if (var_1c_1 u>= 8)
                    j__free(var_30.d)
                
                edi_3 = var_60_1
                int32_t var_1c_2 = 7
                int32_t var_20_2 = 0
                var_30 = 0
            
            ebx_1 = esi_3
            int32_t ecx_15 = (arg4 - esi_3) s/ 0x30
            
            if (result_2 s>= ecx_15)
                ecx_4 = arg3
                result = result_1
                esi_3 = &ecx_4[(result_2 - ecx_15) * 0xc]
            else
                result = result_1
                esi_3 += result
                ecx_4 = arg3
        while (esi_3 != edi_3)
        
        edi_3 -= 0x30
        i_1 = i_2 - 1
        var_60_1 = edi_3
        i_2 = i_1
    while (i_1 s> 0)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
