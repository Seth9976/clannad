// 函数: sub_603f70
// 地址: 0x603f70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bdd80
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_603660(arg1)
int16_t* edi = arg2

if (edi s>= 0)
    void* ecx = data_bac510
    
    if (*(ecx + 0xa4c75c) s> edi)
        if (arg5 == 0xffffffff)
            arg5 = *(ecx + edi * 0x3c + &data_a48b8c)
        
        int16_t var_40
        arg2 = &var_40
        void* const var_44_1 = 0xffffffff
        int32_t esi_4 = edi * 0x3c
        int32_t var_2c_1 = 7
        int32_t var_48_1 = 0
        int32_t var_30_1 = 0
        var_40 = 0
        sub_52e3c0(&var_40, ecx + 0xa48b74 + esi_4, var_48_1, var_44_1)
        int32_t var_8_1 = 0
        void var_58
        void* var_14_1 = &var_58
        sub_52e820(&var_58, &data_af3298)
        var_8_1.b = 1
        void** eax_11 = data_bac4d8 + 0x18
        int32_t var_5c_2 = 7
        int32_t var_60_1 = 0
        int16_t var_70 = 0
        sub_52e3c0(&var_70, eax_11, 0, 0xffffffff)
        int32_t eax_12 = data_bac510
        int32_t var_74_1 = 0
        int32_t var_78_1 = arg6
        int32_t var_7c_2 = arg4
        int32_t var_80_1 = *(esi_4 + eax_12 + 0xa48b94)
        int32_t var_84_1 = *(esi_4 + eax_12 + 0xa48b90)
        int32_t var_8_2 = 0xffffffff
        int32_t var_88_1 = arg5
        
        if (sub_603800(arg1, arg3) != 0)
            void* ecx_5 = data_bac4bc
            void* var_2c_2 = ecx_5
            arg1[0x4a] = 0
            arg1[0x4b] = edi
            int32_t* result = sub_55b0d0(ecx_5 + 4, edi)
            
            if (result != 0)
                *result = 1
            
            result.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return result

fsbase->NtTib.ExceptionList = ExceptionList
return 0
