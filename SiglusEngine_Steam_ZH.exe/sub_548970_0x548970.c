// 函数: sub_548970
// 地址: 0x548970
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b1056
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_b0
int32_t eax_2 = __security_cookie ^ &var_b0
int32_t __saved_edi
int32_t var_bc = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
int32_t edx_3

if (arg2 s>= 0)
    arg1 = *(edi + 0xa4) - *(edi + 0xa0)
    int32_t eax_5
    void* edx_1
    edx_1:eax_5 = muls.dp.d(0xa80a80a9, arg1)
    edx_3 = (edx_1 + arg1) s>> 9

int32_t result

if (arg2 s< 0 || (edx_3 u>> 0x1f) + edx_3 s<= arg2)
    if (arg3 != 0)
        void* var_c0_1 = arg1
        int32_t var_34
        void** eax_10 = sub_6ad9b0(&var_34)
        int32_t var_c_1 = 0
        int16_t var_64
        int16_t* eax_11 = sub_5483b0(edi, &var_64)
        var_c_1.b = 1
        int16_t var_94
        int16_t* eax_12 = sub_548cb0(eax_11, 0xad85ec, &var_94, eax_11)
        var_c_1.b = 2
        int16_t var_ac
        int16_t* eax_13 = sub_532b80(eax_12, eax_12, &var_ac, &data_ad85e8)
        var_c_1.b = 3
        int16_t var_7c
        int16_t* eax_14 = sub_5327a0(eax_13, eax_13, &var_7c, eax_10)
        var_c_1.b = 4
        int16_t var_4c
        int16_t* eax_15 = sub_532b80(eax_14, eax_14, &var_4c, 0xad85d0)
        var_c_1.b = 5
        sub_684160(data_bac424, 7, eax_15)
        int32_t var_38
        
        if (var_38 u>= 8)
            j__free(var_4c.d)
        
        int32_t var_38_1 = 7
        int32_t var_3c_1 = 0
        var_4c = 0
        int32_t var_68
        
        if (var_68 u>= 8)
            j__free(var_7c.d)
        
        int32_t var_68_1 = 7
        int32_t var_6c_1 = 0
        var_7c = 0
        int32_t var_98
        
        if (var_98 u>= 8)
            j__free(var_ac.d)
        
        int32_t var_98_1 = 7
        int32_t var_9c_1 = 0
        var_ac = 0
        int32_t var_80
        
        if (var_80 u>= 8)
            j__free(var_94.d)
        
        int32_t var_80_1 = 7
        int32_t var_84_1 = 0
        var_94 = 0
        int32_t var_50
        
        if (var_50 u>= 8)
            j__free(var_64.d)
        
        int32_t var_50_1 = 7
        int32_t var_54_1 = 0
        var_64 = 0
        int32_t var_20
        
        if (var_20 u>= 8)
            j__free(var_34)
    
    result = 0
else
    result = arg2 * 0x30c + *(edi + 0xa0)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_b0)
return result
