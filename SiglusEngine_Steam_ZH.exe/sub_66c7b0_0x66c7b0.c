// 函数: sub_66c7b0
// 地址: 0x66c7b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c6480
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = arg2
int32_t result_1 = result
int32_t* esi = arg1
int32_t* var_4c = esi

if (esi != result)
    void** ebx_1 = &esi[0xc]
    void** var_48_1 = ebx_1
    
    if (ebx_1 != result)
        do
            int32_t var_30_1 = 7
            int16_t* var_34_1 = nullptr
            void** edi_1 = ebx_1
            int16_t var_44 = 0
            sub_52e3c0(&var_44, ebx_1, 0, 0xffffffff)
            int32_t var_8_1 = 0
            int16_t var_2c = 0
            int32_t var_18_1 = 7
            int32_t var_1c_1 = 0
            int32_t ecx_2 = sub_52e3c0(&var_2c, &ebx_1[6], 0, 0xffffffff)
            int32_t var_8_2 = 1
            int32_t* eax_4
            
            if (esi[5] u< 8)
                eax_4 = esi
            else
                eax_4 = *esi
            
            int32_t var_68_1 = esi[4]
            int32_t eax_5
            void* ecx_4
            eax_5, ecx_4 = sub_536340(&var_44, ecx_2, var_34_1, eax_4)
            
            if (eax_5 s>= 0)
                void** esi_1 = ebx_1
                
                while (true)
                    esi_1 -= 0x30
                    void** eax_7
                    
                    if (esi_1[5] u< 8)
                        eax_7 = esi_1
                    else
                        eax_7 = *esi_1
                    
                    int32_t var_68_2 = esi_1[4]
                    
                    if (sub_536340(&var_44, ecx_4, var_34_1, eax_7) s>= 0)
                        break
                    
                    if (edi_1 != esi_1)
                        sub_52e3c0(edi_1, esi_1, 0, 0xffffffff)
                    
                    ecx_4 = &edi_1[6]
                    
                    if (ecx_4 != &esi_1[6])
                        ecx_4 = sub_52e3c0(ecx_4, &esi_1[6], 0, 0xffffffff)
                    
                    edi_1 = esi_1
                
                if (edi_1 != &var_44)
                    sub_52e3c0(edi_1, &var_44, 0, 0xffffffff)
                
                if (&edi_1[6] != &var_2c)
                    sub_52e3c0(&edi_1[6], &var_2c, 0, 0xffffffff)
                
                esi = var_4c
                ebx_1 = var_48_1
            else
                int32_t result_2 = result_1
                sub_66e9a0(&ebx_1[0xc], ebx_1, esi, &ebx_1[0xc])
                
                if (esi != &var_44)
                    sub_52e3c0(esi, &var_44, 0, 0xffffffff)
                
                if (&esi[6] != &var_2c)
                    sub_52e3c0(&esi[6], &var_2c, 0, 0xffffffff)
            
            int32_t var_8_3 = 0xffffffff
            
            if (var_18_1 u>= 8)
                j__free(var_2c.d)
            
            result = 0
            int32_t var_18_2 = 7
            int32_t var_1c_2 = 0
            var_2c = 0
            
            if (var_30_1 u>= 8)
                result = j__free(var_44.d)
            
            ebx_1 = &ebx_1[0xc]
            var_48_1 = ebx_1
        while (ebx_1 != result_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
