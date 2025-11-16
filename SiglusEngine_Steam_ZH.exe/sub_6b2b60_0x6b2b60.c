// 函数: sub_6b2b60
// 地址: 0x6b2b60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9caca1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_7c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_60 = 0
*(arg1 + 0x14) = 7
*(arg1 + 0x10) = 0
int16_t* var_68 = arg1
*arg1 = 0
int32_t var_8_1 = 0
int32_t var_60_1 = 1
int32_t* var_2c
sub_6af1c0(&var_2c)
int32_t var_8_2 = 1
int32_t* edi = &var_2c
int32_t var_18
int32_t edx = var_18
int32_t* esi = &var_2c

if (edx u>= 0x10)
    edi = var_2c

if (edx u>= 0x10)
    esi = var_2c

int32_t* var_1c
int32_t edi_1 = edi + var_1c

if (esi != edi_1)
    do
        int32_t* eax_3
        eax_3.b = *esi
        
        if ((eax_3.b u< 0x30 || eax_3.b u> 0x39) && (eax_3.b u< 0x61 || eax_3.b u> 0x7a))
            if (eax_3.b u< 0x41)
                if (eax_3.b == 0x2d || eax_3.b == 0x5f || eax_3.b == 0x2e || eax_3.b == 0x7e)
                    goto label_6b2cc0
            else if (eax_3.b u<= 0x5a || eax_3.b == 0x2d || eax_3.b == 0x5f || eax_3.b == 0x2e
                    || eax_3.b == 0x7e)
                goto label_6b2cc0
            
            uint32_t var_80_1 = zx.d(eax_3.b)
            int32_t var_84_1 = 7
            int32_t var_88_1 = 0
            int16_t var_98 = 0
            sub_52e720(&var_98, u"%02X", 4)
            int32_t var_5c
            int16_t* eax_5 = sub_6ae4c0(&var_5c, var_98)
            var_8_2.b = 2
            var_8_2.b = 3
            int16_t var_44
            sub_532870(arg1, sub_548cb0(eax_5, 0xb001ac, &var_44, eax_5), 0, 0xffffffff)
            int32_t var_30
            
            if (var_30 u>= 8)
                j__free(var_44.d)
            
            var_8_2.b = 1
            var_30 = 7
            int32_t var_34_1 = 0
            var_44 = 0
            int32_t var_48
            
            if (var_48 u>= 8)
                j__free(var_5c)
        else
        label_6b2cc0:
            int16_t* edx_1
            
            if (*(arg1 + 0x14) u< 8)
                edx_1 = arg1
            else
                edx_1 = *arg1
            
            int32_t ecx_5 = &edx_1[*(arg1 + 0x10)]
            int16_t* edx_2
            
            if (*(arg1 + 0x14) u< 8)
                edx_2 = arg1
            else
                edx_2 = *arg1
            
            if (ecx_5 != 0)
                ecx_5 = (ecx_5 - edx_2) s>> 1
            
            sub_5df330(arg1, ecx_5, 1, zx.w(eax_3.b))
        
        esi += 1
    while (esi != edi_1)
    
    edx = var_18

if (edx u>= 0x10)
    j__free(var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg1
