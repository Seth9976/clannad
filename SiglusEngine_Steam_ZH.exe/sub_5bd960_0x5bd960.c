// 函数: sub_5bd960
// 地址: 0x5bd960
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bb0c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edx = arg2
int32_t eax_3 = edx[4]
char* result
int16_t var_30
int32_t var_1c_1

if (eax_3 u>= 2)
    if (eax_3 u> 3)
        var_1c_1 = 7
        int32_t var_20_2 = 0
        var_30 = 0
        sub_52e720(&var_30, "\rTMR", 0xd)
        int32_t var_8_2 = 1
        goto label_5bd9d4
    
    int32_t eax_4 = edx[5]
    int32_t* ecx_3
    
    if (eax_4 u< 8)
        ecx_3 = edx
    else
        ecx_3 = *edx
    
    void** edx_1 = arg2
    int32_t eax_5
    
    if (*ecx_3 != 0xff0a)
        int16_t* eax_6
        
        if (eax_4 u< 8)
            eax_6 = edx_1
        else
            eax_6 = *edx_1
        
        if (*eax_6 == 0xff05)
            eax_5 = arg1 + 0xac8
            goto label_5bda66
        
        int32_t var_1c_4 = 7
        int32_t var_20_5 = 0
        var_30 = 0
        sub_52e720(&var_30, "\rTMR", 0x11)
        int32_t var_8_6 = 2
    label_5bdbaa:
        sub_684160(data_bac424, 7, &var_30)
        sub_52e8a0(&var_30)
        result.b = 0
    else
        eax_5 = arg1 + 0xa10
    label_5bda66:
        *arg3 = eax_5
        result = edx_1[4]
        
        if (result == 2)
            if (edx_1[5] u>= 8)
                edx_1 = *edx_1
            
            ecx_3.w = *(edx_1 + 2)
            result = sub_5bd840(ecx_3.w)
            
            if (result == 0xffffffff)
                int32_t var_1c_2 = 7
                int32_t var_20_3 = 0
                var_30 = 0
                sub_52e720(&var_30, "\rTMR", 0x10)
                int32_t var_8_3 = 3
                goto label_5bdbaa
            
            *arg4 = result
            result.b = 1
        else if (result != 3)
            result.b = 1
        else
            int32_t esi_1 = edx_1[5]
            void** eax_7
            
            if (esi_1 u< 8)
                eax_7 = edx_1
            else
                eax_7 = *edx_1
            
            ecx_3.w = *(eax_7 + 2)
            int32_t eax_8 = sub_5bd840(ecx_3.w)
            
            if (eax_8 == 0xffffffff)
                int32_t var_1c_3 = 7
                int32_t var_20_4 = 0
                var_30 = 0
                sub_52e720(&var_30, "\rTMR", 0x11)
                int32_t var_8_4 = 4
                goto label_5bdbaa
            
            if (esi_1 u>= 8)
                edx_1 = *edx_1
            
            ecx_3.w = edx_1[1].w
            int32_t eax_9 = sub_5bd840(ecx_3.w)
            
            if (eax_9 != 0xffffffff)
                *arg4 = (eax_8 + 1) * 0x1a + eax_9
                result.b = 1
            else
                int32_t var_34_1 = 7
                int32_t var_38_1 = 0
                int16_t var_48 = 0
                sub_52e720(&var_48, "\rTMR", 0x11)
                int32_t var_8_5 = 5
                sub_684160(data_bac424, 7, &var_48)
                sub_52e8a0(&var_48)
                result.b = 0
else
    var_1c_1 = 7
    int32_t var_20_1 = 0
    var_30 = 0
    sub_52e720(&var_30, "\rTMR", 0xd)
    int32_t var_8_1 = 0
label_5bd9d4:
    sub_684160(data_bac424, 7, &var_30)
    
    if (var_1c_1 u>= 8)
        j__free(var_30.d)
    
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
