// 函数: sub_6be380
// 地址: 0x6be380
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cbcf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t ebx
int32_t var_54 = ebx
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = 7
int16_t* esi = *arg1
int16_t* var_4c = esi
int32_t var_38 = 0
int16_t var_48 = 0
int32_t var_8_1 = 0

while (esi != arg2)
    uint32_t eax_3 = zx.d(*esi)
    
    if (eax_3 == 0x3c)
        break
    
    if (eax_3.w == 0)
        break
    
    int32_t var_1c_1 = 7
    int32_t var_20_1 = 0
    int16_t var_30 = 0
    int32_t* eax_4
    int32_t ecx_2
    eax_4, ecx_2 = sub_52e720(&var_30, u"&lt;", 4)
    int32_t var_64_1 = ecx_2
    ebx.b = sub_6af310(eax_4, &var_30, &var_4c, arg2)
    
    if (var_1c_1 u>= 8)
        j__free(var_30.d)
    
    if (ebx.b == 0)
        int32_t var_1c_2 = 7
        int32_t var_20_2 = 0
        var_30 = 0
        int32_t* eax_6
        int32_t ecx_6
        eax_6, ecx_6 = sub_52e720(&var_30, u"&gt;", 4)
        int32_t var_64_3 = ecx_6
        ebx.b = sub_6af310(eax_6, &var_30, &var_4c, arg2)
        
        if (var_1c_2 u>= 8)
            j__free(var_30.d)
        
        if (ebx.b == 0)
            int32_t var_1c_3 = 7
            int32_t var_20_3 = 0
            var_30 = 0
            int32_t* eax_8
            int32_t ecx_10
            eax_8, ecx_10 = sub_52e720(&var_30, u"&amp;", 5)
            int32_t var_64_5 = ecx_10
            ebx.b = sub_6af310(eax_8, &var_30, &var_4c, arg2)
            
            if (var_1c_3 u>= 8)
                j__free(var_30.d)
            
            int16_t* ecx_12 = &var_48
            
            if (ebx.b == 0)
                int16_t* esi_1 = var_4c
                int16_t eax_10 = *esi_1
                esi = &esi_1[1]
                var_4c = esi
                sub_55d330(ecx_12, 1, eax_10)
            else
                sub_532910(ecx_12, 0xaf8b9c, 1)
                esi = var_4c
        else
            sub_532910(&var_48, 0xb02dec, 1)
            esi = var_4c
    else
        sub_532910(&var_48, &(*U"/=?<")[3], 1)
        esi = var_4c

if (arg3 != &var_48)
    sub_52e3c0(arg3, &var_48, 0, 0xffffffff)

*arg1 = esi

if (var_34 u>= 8)
    j__free(var_48.d)

int16_t* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
