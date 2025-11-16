// 函数: sub_70eb20
// 地址: 0x70eb20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d0cab
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_ac = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = arg1
void* var_98 = eax_3
int32_t edi = 0
int32_t ebx_2 = (*(eax_3 + 0x78) - *(eax_3 + 0x74)) s>> 3

if (ebx_2 != 0)
    do
        int32_t ecx_1 = 0
        int32_t* eax_5 = *(eax_3 + 0x74) + (edi << 3)
        int32_t* eax_6 = *eax_5
        int32_t* eax_7 = *arg3
        int32_t edx_4 = (arg3[1] - eax_7) s>> 2
        
        if (edx_4 == 0)
        label_70ebb0:
            eax_7.b = 0
        else
            while (*eax_7 != eax_6[0x26])
                ecx_1 += 1
                eax_7 = &eax_7[1]
                
                if (ecx_1 u>= edx_4)
                    goto label_70ebb0
            
            eax_7.b = 1
        
        if (eax_7.b == 0)
            char var_74
            char* eax_8 = sub_70e680(*eax_5, &var_74)
            int32_t var_8_1 = 0
            char var_8c
            int32_t* eax_9 = (*(*eax_6 + 4))(&var_8c)
            var_8_1.b = 1
            char var_5c
            char* eax_10 = sub_6bdb10(eax_9.b, eax_9, &var_5c, " = ")
            var_8_1.b = 2
            char var_44
            char* eax_11 = sub_70ce20(eax_10, eax_10, &var_44, eax_8)
            var_8_1.b = 3
            var_8_1.b = 4
            char var_2c
            sub_6b3810(arg2, sub_6bdb10(eax_11.b, eax_11, &var_2c, ";\n"), nullptr, 0xffffffff)
            int32_t var_18
            
            if (var_18 u>= 0x10)
                j__free(var_2c.d)
            
            var_18 = 0xf
            int32_t var_1c_1 = 0
            var_2c = 0
            int32_t var_30
            
            if (var_30 u>= 0x10)
                j__free(var_44.d)
            
            var_30 = 0xf
            int32_t var_34_1 = 0
            var_44 = 0
            int32_t var_48
            
            if (var_48 u>= 0x10)
                j__free(var_5c.d)
            
            var_48 = 0xf
            int32_t var_4c_1 = 0
            var_5c = 0
            int32_t var_78
            
            if (var_78 u>= 0x10)
                j__free(var_8c.d)
            
            int32_t var_8_2 = 0xffffffff
            var_78 = 0xf
            int32_t var_7c_1 = 0
            var_8c = 0
            int32_t var_60
            
            if (var_60 u>= 0x10)
                j__free(var_74.d)
            
            var_60 = 0xf
            int32_t var_64_1 = 0
            var_74 = 0
        
        eax_3 = var_98
        edi += 1
    while (edi u< ebx_2)

int32_t* result = sub_6b3720(arg2, 0xb04184, 1)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
