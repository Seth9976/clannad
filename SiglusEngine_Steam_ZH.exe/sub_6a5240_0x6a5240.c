// 函数: sub_6a5240
// 地址: 0x6a5240
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebp
int32_t var_4 = ebp
int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9ca1e1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_18 = arg1
int32_t* ecx = __chkstk(0x127c)
int32_t eax_2 = __security_cookie ^ &var_18
int32_t __saved_edi
int32_t var_28 = __security_cookie ^ &__saved_edi
int32_t arg_1268
fsbase->NtTib.ExceptionList = &arg_1268
var_18 = ecx
int32_t* result

if (arg2 s< 0)
    result.b = 0
else
    result = data_bac510
    
    if (result[0x42e4] + result[0x42e3] + result[0x42e2] s<= arg2)
        result.b = 0
    else
        int32_t edi_2 = arg2 * 0xc
        result = *ecx + edi_2
        
        if (*result != 0)
            result.b = 1
        else if (result[2].b != 0)
            result.b = 0
        else
            void arg_14
            sub_651e40(&arg_14, arg2)
            int32_t arg_1270 = 0
            ExceptionList = nullptr
            var_c.q = 0
            arg_1270.b = 1
            int32_t arg_10 = 7
            int32_t arg_c = 0
            var_4.w = 0
            sub_52e720(&var_4, &data_af335c, 2)
            arg_1270.b = 2
            arg_1270.b = 1
            int32_t ebx
            ebx.b = sub_6b7a80(&ExceptionList, &arg_14, &var_4) == 0
            sub_52e8a0(&var_4)
            
            if (ebx.b == 0)
                void arg_2c
                sub_6b74a0(0, 0x122c, &arg_2c, ExceptionList)
                sub_6b7b20(&ExceptionList)
                sub_6a4d10(var_18, arg2, &arg_2c)
                ebx.b = 1
            else
                ebx.b = 0
                *(*var_18 + edi_2 + 8) = 1
            
            arg_1270.b = 0
            sub_6b7a50(&ExceptionList)
            sub_52e8a0(&arg_14)
            result.b = ebx.b

fsbase->NtTib.ExceptionList = arg_1268
sub_745f2b(eax_2 ^ &var_18)
return result
