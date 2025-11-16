// 函数: sub_65a3e0
// 地址: 0x65a3e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c4b28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = data_bac504
char* result
int16_t var_2c
int32_t ebx

if (*(edi + 0x6285c) != 1)
    *(edi + 0x6285c) -= 1
    int32_t ecx_2 = *(edi + 0x6285c) * 0x30c
    void* esi_1 = *(edi + 0x62848)
    int16_t var_44 = 0
    void* esi_2 = esi_1 + ecx_2
    int32_t var_30_1 = 7
    int32_t var_34_1 = 0
    sub_52e3c0(&var_44, esi_2 - 0x2c, 0, 0xffffffff)
    int32_t var_8_2 = 1
    ebx = *(esi_2 - 0x14)
    int32_t esi_3 = *(esi_2 - 0x10)
    int32_t eax_4 = sub_6980b0(data_bac45c, &var_44)
    
    if (eax_4 != 0xffffffff)
        *(edi + 0x4b000) = eax_4
        int32_t eax_7 = *(edi + 0x4aff0)
        *(edi + 0x4b004) = ebx
        *(edi + 0x4affc) = *(eax_7 + eax_4 * 0x54 + 8) + esi_3
        
        if (var_30_1 u>= 8)
            j__free(var_44.d)
        
        result.b = 1
    else
        sub_676610(0)
        int16_t* eax_5 = sub_532b80(0, &var_44, &var_2c, &data_af80c4)
        var_8_2.b = 2
        ebx.b = sub_684160(data_bac424, 9, eax_5)
        int32_t var_18
        
        if (var_18 u>= 8)
            j__free(var_2c.d)
        
        int32_t var_18_2 = 7
        int32_t var_1c_2 = 0
        var_2c = 0
        
        if (var_30_1 u< 8)
            result.b = ebx.b
        else
            j__free(var_44.d)
            result.b = ebx.b
else
    sub_676610(0)
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    var_2c = 0
    sub_52e720(&var_2c, 0xaf80e8, 0xc)
    int32_t var_8_1 = 0
    ebx.b = sub_684160(edi + 0x5569c, 2, &var_2c).b
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)
    
    result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
