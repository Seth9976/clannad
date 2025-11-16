// 函数: sub_609760
// 地址: 0x609760
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9be58c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_184
int32_t eax_2 = __security_cookie ^ &var_184
int32_t __saved_edi
int32_t var_194 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg1
var_184 = esi
int32_t ebx = arg2

if (ebx s< arg3)
    void* edi_1 = esi + 4
    
    do
        int32_t var_ec_1 = 7
        int32_t var_f0_1 = 0
        int16_t var_100 = 0
        int32_t var_c_1 = 0
        
        if (ebx == 0)
            int32_t var_b8
            int16_t* eax_11 = sub_532b80(ebx, esi + 0xb8, &var_b8, u"back")
            var_c_1.b = 1
            
            if (&var_100 != eax_11)
                sub_52e3c0(&var_100, eax_11, 0, 0xffffffff)
            
            var_c_1.b = 0
            int32_t var_a4
            
            if (var_a4 u>= 8)
                j__free(var_b8)
        else if (ebx == 1)
            int32_t var_e8
            int16_t* eax_10 = sub_532b80(ebx - 1, esi + 0xb8, &var_e8, u"front")
            var_c_1.b = 2
            
            if (&var_100 != eax_10)
                sub_52e3c0(&var_100, eax_10, 0, 0xffffffff)
            
            var_c_1.b = 0
            int32_t var_d4
            
            if (var_d4 u>= 8)
                j__free(var_e8)
        else if (ebx == 2)
            int32_t var_d0
            int16_t* eax_9 = sub_532b80(ebx - 2, esi + 0xb8, &var_d0, u"next")
            var_c_1.b = 3
            
            if (&var_100 != eax_9)
                sub_52e3c0(&var_100, eax_9, 0, 0xffffffff)
            
            var_c_1.b = 0
            int32_t var_bc
            
            if (var_bc u>= 8)
                j__free(var_d0)
        
        int32_t var_17c_1 = ebx
        void var_a0
        __builtin_memcpy(&var_a0, edi_1, 0x80)
        int32_t var_104_1 = 2
        int32_t var_24
        *(&var_a0 + (var_24 << 2)) = 0xffffffff.q
        var_24 += 2
        void var_214
        __builtin_memcpy(&var_214, &var_a0, 0x80)
        esi = var_184
        result = sub_608140(ebx * 0x8ec + *(esi + 0xa4), &var_100, *(esi + 0xd0), var_214)
        int32_t var_c_2 = 0xffffffff
        
        if (var_ec_1 u>= 8)
            result = j__free(var_100.d)
        
        ebx += 1
        edi_1 = esi + 4
    while (ebx s< arg3)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_184)
return result
