// 函数: sub_5b4710
// 地址: 0x5b4710
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ba708
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
void* var_4c = ebx
int128_t* result = arg3

if (result s< arg4)
    int32_t ecx = result * 0x580
    arg4 -= result
    int32_t var_48_1 = ecx
    void* i
    
    do
        void* edi_2 = *(ebx + 0xa4) + ecx
        int32_t* ecx_1 = *arg2
        
        if (ecx_1 == arg2[1])
            ecx_1 = nullptr
        
        *(edi_2 + 0x25c) = *(ecx_1 + arg2[3])
        arg2[3] += 4
        int32_t var_44
        int16_t* eax_5 = sub_5b0600(arg2, &var_44)
        int32_t var_8_1 = 0
        
        if (edi_2 + 0x260 != eax_5)
            sub_52e3c0(edi_2 + 0x260, eax_5, 0, 0xffffffff)
        
        int32_t var_8_2 = 0xffffffff
        int32_t var_30
        
        if (var_30 u>= 8)
            j__free(var_44)
        
        int16_t* eax_6 = sub_5b0600(arg2, &var_44)
        int32_t var_8_3 = 1
        
        if (edi_2 + 0x278 != eax_6)
            sub_52e3c0(edi_2 + 0x278, eax_6, 0, 0xffffffff)
        
        int32_t var_8_4 = 0xffffffff
        
        if (var_30 u>= 8)
            j__free(var_44)
        
        int32_t var_2c
        void** eax_7 = sub_5b0600(arg2, &var_2c)
        int32_t var_8_5 = 2
        
        if (edi_2 + 0x290 != eax_7)
            sub_52e3c0(edi_2 + 0x290, eax_7, 0, 0xffffffff)
        
        int32_t var_8_6 = 0xffffffff
        int32_t var_18
        
        if (var_18 u>= 8)
            j__free(var_2c)
        
        int32_t* edx_2 = *arg2
        int32_t ecx_8 = arg2[3]
        
        if (edx_2 == arg2[1])
            edx_2 = nullptr
        
        var_2c.w = 0
        var_18 = 7
        int32_t var_1c_1 = 0
        *(edi_2 + 0x2a8) = *(edx_2 + ecx_8)
        *(edi_2 + 0x2ac) = *(edx_2 + ecx_8 + 4)
        arg2[3] += 8
        int32_t ecx_9 = *arg2
        int32_t* edx_3 = arg2[3]
        
        if (ecx_9 == arg2[1])
            ecx_9 = 0
        
        *(edi_2 + 0x2b0) = *(edx_3 + ecx_9)
        *(edi_2 + 0x2b4) = *(edx_3 + ecx_9 + 4)
        arg2[3] += 8
        result = sub_5def20(arg2, edi_2 + 0x304)
        ebx = var_4c
        ecx = var_48_1 + 0x580
        i = arg4
        arg4 -= 1
        var_48_1 = ecx
    while (i != 1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
