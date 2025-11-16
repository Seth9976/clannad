// 函数: sub_687200
// 地址: 0x687200
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c80e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_48 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** i

if (*arg2 != 0x2710 || arg2[1] != 0x2710)
    i.b = 0
else
    i = arg2[2]
    void* esi_1 = &arg2[3]
    int32_t var_1c
    
    while (i == 0x2774)
        void* edi_1 = *esi_1
        int32_t var_30
        int16_t* eax_3 = sub_6af200(i, esi_1 + 4, &var_30, edi_1)
        int32_t var_8_1 = 0
        
        if (arg1 != eax_3)
            sub_52e3c0(arg1, eax_3, 0, 0xffffffff)
        
        int32_t var_8_2 = 0xffffffff
        
        if (var_1c u>= 8)
            j__free(var_30)
        
        i = *(esi_1 + 4 + edi_1)
        esi_1 = esi_1 + 4 + edi_1 + 4
    
    if (i != 0x4e20)
        i.b = 0
    else
        i = *esi_1
        void* esi_4 = esi_1 + 4
        void* var_34 = esi_4
        int32_t edi_2
        
        if (i s> 0)
            edi_2 = 0
        
        if (i s<= 0 || i s<= 0)
        label_687357:
            i.b = 1
        else
            while (true)
                int32_t var_28 = 0
                int32_t var_20_1 = 0
                int32_t var_24_1 = 0
                int32_t var_8_3 = 1
                var_1c = 0
                
                if (sub_687360(esi_4, &var_34, &var_28, &var_1c) == 0)
                    sub_538150(&var_28)
                    break
                
                sub_687550(&arg1[6], &var_28)
                int32_t var_8_4 = 0xffffffff
                sub_538150(&var_28)
                edi_2 += 1
                
                if (edi_2 s>= i)
                    goto label_687357
                
                esi_4 = var_34
            
            i.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return i
