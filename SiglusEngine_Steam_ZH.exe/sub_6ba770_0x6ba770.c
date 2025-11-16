// 函数: sub_6ba770
// 地址: 0x6ba770
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cb7f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_7c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg1
int32_t* var_64 = ebx
int32_t* result

if (ebx[1] == 0)
    result = &ebx[2]
    
    if (arg2 + 0x30 != result)
        result = sub_52e3c0(arg2 + 0x30, result, 0, 0xffffffff)
else
    result = *ebx
    int32_t* i = *result
    
    if (i != result)
        struct _EXCEPTION_REGISTRATION_RECORD*** edi_1 = arg2 + 0x24
        struct _EXCEPTION_REGISTRATION_RECORD*** var_60_1 = edi_1
        
        do
            int32_t var_48_1 = 7
            int32_t var_4c_1 = 0
            int16_t var_5c = 0
            int128_t var_44_1
            __builtin_memset(&var_44_1, 0, 0x1a)
            int32_t var_18_1 = 7
            int32_t var_1c_1 = 0
            int32_t var_8_1 = 0
            
            if (&var_5c != &i[4])
                sub_52e3c0(&var_5c, &i[4], 0, 0xffffffff)
            
            sub_6ba770(&i[0xa], &var_5c)
            sub_6bba50(edi_1, &var_5c)
            int32_t var_8_2 = 0xffffffff
            int16_t var_2c_1
            
            if (var_18_1 u>= 8)
                j__free(var_2c_1.d)
            int32_t* edi_2 = var_44_1:0xc.d
            result = nullptr
            int32_t var_18_2 = 7
            int32_t var_1c_2 = 0
            int16_t var_2c_2 = 0
            
            if (edi_2 != 0)
                int32_t var_34_1
                
                if (edi_2 != var_34_1)
                    do
                        sub_6ba6b0(edi_2)
                        edi_2 = &edi_2[0x12]
                    while (edi_2 != var_34_1)
                    
                    edi_2 = var_44_1:0xc.d
                
                result = j__free(edi_2)
                ebx = var_64
                var_44_1:0xc.d = 0
                int32_t var_34_2 = 0
                int32_t var_30_1 = 0
            
            void* ecx_4 = var_44_1.d
            
            if (ecx_4 != 0)
                struct _EXCEPTION_REGISTRATION_RECORD*** var_80_5 = var_60_1
                void* var_84_2 = ecx_4
                sub_66b250(ecx_4, var_44_1:4.d)
                result = j__free(var_44_1.d)
                var_44_1.d = 0
                var_44_1:4.d = 0
                var_44_1:8.d = 0
            
            if (var_48_1 u>= 8)
                result = j__free(var_5c.d)
            
            if (*(i + 0xd) == 0)
                int32_t* i_1 = i[2]
                
                if (*(i_1 + 0xd) != 0)
                    result = i[1]
                    
                    if (*(result + 0xd) == 0)
                        while (i == result[2])
                            i = result
                            result = result[1]
                            
                            if (*(result + 0xd) != 0)
                                break
                    
                    i = result
                else
                    i = i_1
                    result = *i
                    
                    while (*(result + 0xd) == 0)
                        i = result
                        result = *i
            
            edi_1 = var_60_1
        while (i != *ebx)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
