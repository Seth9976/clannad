// 函数: sub_6b8380
// 地址: 0x6b8380
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cb528
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_74 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_5c = nullptr
int64_t var_54 = 0
int32_t var_8_1 = 0
int32_t var_18 = 7
uint32_t var_1c = 0
int16_t var_2c = 0
sub_52e720(&var_2c, 0xb00774, 2)
var_8_1.b = 1
var_8_1.b = 0
bool eax_3 = sub_6b7a80(&var_5c, arg1, &var_2c) == 0

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t* ebx

if (eax_3 == 0)
    uint32_t eax_4
    int32_t edx
    edx:eax_4 = muls.dp.d(0x2aaaaaab, arg2[1] - *arg2)
    int32_t edx_1 = edx s>> 2
    ebx = (edx_1 u>> 0x1f) + edx_1
    void* i_1 = ebx - 1
    
    if (i_1 s> 0)
        int32_t esi_1 = 0
        void* i
        
        do
            int32_t var_44
            sub_532b80(eax_4, *arg2 + esi_1, &var_44, &data_ad90c0)
            var_8_1.b = 2
            char* eax_6 = sub_6af1a0(&var_2c)
            var_8_1.b = 3
            void* ecx_6 = &var_2c
            
            if (var_18 u>= 0x10)
                ecx_6 = var_2c.d
            
            eax_4 = sub_6b7660(eax_6, var_1c, ecx_6, var_5c)
            
            if (var_18 u>= 0x10)
                eax_4 = j__free(var_2c.d)
            
            var_8_1.b = 0
            int32_t var_30
            
            if (var_30 u>= 8)
                eax_4 = j__free(var_44)
            
            esi_1 += 0x18
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    if (ebx s> 0)
        *arg2
        char* eax_9 = sub_6af1a0(&var_2c)
        var_8_1.b = 4
        void* ecx_10 = &var_2c
        
        if (var_18 u>= 0x10)
            ecx_10 = var_2c.d
        
        sub_6b7660(eax_9, var_1c, ecx_10, var_5c)
        var_8_1.b = 0
        
        if (var_18 u>= 0x10)
            j__free(var_2c.d)
        
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c.b = 0
    
    if (sub_6b73d0(var_5c) != 0)
        var_5c = nullptr
        int64_t var_54_1 = 0
    
    ebx.b = 1
else
    ebx.b = 0

int32_t var_8_2 = 0xffffffff
sub_6b73d0(var_5c)
struct _EXCEPTION_REGISTRATION_RECORD** result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
