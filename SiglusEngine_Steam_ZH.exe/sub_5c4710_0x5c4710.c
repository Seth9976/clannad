// 函数: sub_5c4710
// 地址: 0x5c4710
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9ba918
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_3c
int32_t eax_2 = __security_cookie ^ &var_3c
int32_t __saved_edi
int32_t var_4c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_3c = arg1
struct _EXCEPTION_REGISTRATION_RECORD** result = arg3
int32_t* edx = arg2
int32_t* var_38 = edx

if (result s< arg4)
    int32_t ebx_1 = result * 0x118
    void* i_1 = arg4 - result
    void* i
    
    do
        int32_t eax_5 = *edx
        void* edi_2 = *(arg1 + 0xa4) + ebx_1
        
        if (eax_5 == edx[1])
            eax_5 = 0
        
        int128_t* ecx_1 = edx[3] + eax_5
        *(edi_2 + 0xb8) = *ecx_1
        *(edi_2 + 0xc8) = ecx_1[1]
        *(edi_2 + 0xd8) = ecx_1[2]
        *(edi_2 + 0xe8) = ecx_1[3]
        *(edi_2 + 0xf8) = ecx_1[4]
        *(edi_2 + 0x108) = ecx_1[5].q
        edx[3] += 0x58
        int16_t var_34
        int16_t* eax_6 = sub_5b0600(edx, &var_34)
        int32_t var_c_1 = 0
        
        if (edi_2 + 0xa0 != eax_6)
            sub_52e3c0(edi_2 + 0xa0, eax_6, 0, 0xffffffff)
        
        int32_t var_c_2 = 0xffffffff
        int32_t var_20
        
        if (var_20 u>= 8)
            j__free(var_34.d)
        
        var_20 = 7
        int32_t var_24_1 = 0
        var_34 = 0
        result = sub_5c3e70(edi_2)
        edx = var_38
        ebx_1 += 0x118
        arg1 = var_3c
        i = i_1
        i_1 -= 1
    while (i != 1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_3c)
return result
