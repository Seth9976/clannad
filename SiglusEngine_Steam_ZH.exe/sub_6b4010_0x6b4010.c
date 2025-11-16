// 函数: sub_6b4010
// 地址: 0x6b4010
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cad78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg2[4]
void* ecx_1 = ecx - 1
int32_t var_4c = 0

if (ecx - 1 s< 0)
label_6b4083:
    void* var_48
    int16_t* eax_5 = sub_532b80(eax_3, arg2, &var_48, &data_ad7d2c)
    int32_t var_8_1 = 2
    sub_5327a0(eax_5, eax_5, arg3, arg4)
    int32_t var_34
    
    if (var_34 u>= 8)
        j__free(var_48)
else
    int32_t esi_1 = arg2[5]
    void* var_64_1
    
    while (true)
        void** eax_4
        
        if (esi_1 u< 8)
            eax_4 = arg2
        else
            eax_4 = *arg2
        
        void* var_30
        
        if (*(eax_4 + (ecx_1 << 1)) == 0x5c)
            int16_t* eax_9 = sub_532b80(eax_4, arg2, &var_30, &data_ad7d2c)
            int32_t var_8_3 = 0
            sub_5327a0(eax_9, eax_9, arg3, arg4)
            int32_t var_1c
            
            if (var_1c u< 8)
                goto label_6b40b5
            
            var_64_1 = var_30
            break
        
        if (esi_1 u< 8)
            eax_3 = arg2
        else
            eax_3 = *arg2
        
        if (*(eax_3 + (ecx_1 << 1)) == 0x2e)
            int32_t var_1c_1 = 7
            var_30.w = 0
            int32_t var_20_1 = 0
            int32_t var_8_2 = 1
            sub_5327a0(sub_52e3c0(&var_30, arg2, 0, ecx_1 + 1), &var_30, arg3, arg4)
            
            if (var_1c_1 u< 8)
                goto label_6b40b5
            
            var_64_1 = var_30
            break
        
        void* temp1_1 = ecx_1
        ecx_1 -= 1
        
        if (temp1_1 - 1 s< 0)
            goto label_6b4083
    
    j__free(var_64_1)

label_6b40b5:
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg3
