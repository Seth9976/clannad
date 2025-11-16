// 函数: sub_5c05a0
// 地址: 0x5c05a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9bb3b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_54
int32_t eax_2 = __security_cookie ^ &var_54
int32_t __saved_edi
int32_t var_64 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
void* var_50 = ebx
int32_t result = arg3

if (result s< arg4)
    int32_t ecx = result * 0x2cc
    arg4 -= result
    var_54 = ecx
    int32_t ecx_1 = ecx
    int32_t i
    
    do
        void* edi_2 = *(ebx + 0xa4) + ecx_1
        int32_t* ecx_2 = *arg2
        
        if (ecx_2 == arg2[1])
            ecx_2 = nullptr
        
        *(edi_2 + 0x128) = *(ecx_2 + arg2[3])
        arg2[3] += 4
        int32_t var_34
        int16_t* eax_7 = sub_5b0600(arg2, &var_34)
        int32_t var_c_1 = 0
        
        if (edi_2 + 0x12c != eax_7)
            sub_52e3c0(edi_2 + 0x12c, eax_7, 0, 0xffffffff)
        
        int32_t var_c_2 = 0xffffffff
        int32_t var_20
        
        if (var_20 u>= 8)
            j__free(var_34)
        
        int16_t var_4c
        int16_t* eax_8 = sub_5b0600(arg2, &var_4c)
        int32_t var_c_3 = 1
        
        if (edi_2 + 0x144 != eax_8)
            sub_52e3c0(edi_2 + 0x144, eax_8, 0, 0xffffffff)
        
        int32_t var_c_4 = 0xffffffff
        int32_t var_38
        
        if (var_38 u>= 8)
            j__free(var_4c.d)
        
        var_38 = 7
        int32_t var_3c_1 = 0
        var_4c = 0
        sub_5bea80(edi_2 + 0x15c, arg2)
        int32_t eax_9 = *arg2
        
        if (eax_9 == arg2[1])
            eax_9 = 0
        
        int128_t* ecx_8 = arg2[3]
        *(edi_2 + 0x2b4) = *(ecx_8 + eax_9)
        void* ecx_9 = data_bac45c
        *(edi_2 + 0x2c4) = *(ecx_8 + eax_9 + 0x10)
        arg2[3] += 0x14
        int32_t eax_12 = sub_6980b0(ecx_9, edi_2 + 0x12c)
        *(edi_2 + 0x120) = eax_12
        result = sub_697f50(eax_12, edi_2 + 0x144)
        ebx = var_50
        ecx_1 = var_54 + 0x2cc
        i = arg4
        arg4 -= 1
        *(edi_2 + 0x124) = result
        var_54 = ecx_1
    while (i != 1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_54)
return result
