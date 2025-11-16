// 函数: sub_5d03b0
// 地址: 0x5d03b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ba3b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = data_bac4a8
int32_t var_1c = arg2
int32_t eax_3
eax_3.w = arg3
void** ebx = *edi
int16_t var_18 = eax_3.w
int64_t var_24
int64_t* var_60 = &var_24
var_24 = arg1
void** eax_4
void* edx
eax_4, edx = sub_5d48a0(edi, var_60)
void** var_48_1
char eax_5

if (eax_4 != ebx)
    eax_5 = sub_5cd6f0(&var_24, &eax_4[4])
    var_48_1 = eax_4

if (eax_4 == ebx || eax_5 != 0)
    var_48_1 = ebx

void** var_48
void*** result = &var_48

if (var_48_1 != ebx)
    void* eax_6 = data_bac510
    
    if (*(eax_6 + 0xa47d7c) == 0)
        edx.b = 1
        char var_60_9 = 1
        int64_t var_70 = arg1
        int32_t ecx_12
        ecx_12.w = arg3
        int16_t var_64_1 = ecx_12.w
        ecx_12.b = 1
        result = sub_660d90(&var_70, edx.b, ecx_12.b, var_70, arg2, var_64_1, var_60_9)
    else
        int32_t eax_8 = sub_6980b0(data_bac45c, eax_6 + 0xa47d6c)
        int16_t var_64
        var_64.d = eax_8
        int32_t eax_9 = sub_697f50(var_64, data_bac510 + 0xa47d84)
        
        if (eax_8 s< 0)
            void* var_60_3 = 0x11
            var_18.d = 7
            var_64.d = 0xaf2f0c
            int32_t var_1c_1 = 0
            int16_t var_2c = 0
            sub_52e720(&var_2c, var_64, var_60_3)
            int32_t var_8_1 = 0
            var_64.d = 9
            result = sub_684160(data_bac424, var_64, &var_2c)
            
            if (var_18.d u>= 8)
                result = j__free(var_2c.d)
        else if (eax_9 s>= 0)
            void* ecx_10 = data_bac4a0
            char var_60_8 = 0
            var_64.d = 1
            *(ecx_10 + 0x1f0) = arg1
            *(ecx_10 + 0x1f8) = arg2
            int32_t eax_11 = arg3.d
            *(ecx_10 + 0x1fc) = eax_11.w
            result = sub_65d760(eax_11, eax_9, eax_8, 0, var_64.b, var_60_8)
        else
            void* var_60_6 = 0x12
            int32_t var_30_1 = 7
            var_64.d = 0xaf2f30
            int32_t var_34_1 = 0
            int16_t var_44 = 0
            sub_52e720(&var_44, var_64, var_60_6)
            int32_t var_8_2 = 1
            var_64.d = 9
            sub_684160(data_bac424, var_64, &var_44)
            result = sub_52e8a0(&var_44)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
