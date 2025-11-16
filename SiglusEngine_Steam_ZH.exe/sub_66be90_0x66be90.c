// 函数: sub_66be90
// 地址: 0x66be90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9c6358
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_7c
int32_t eax_2 = __security_cookie ^ &var_7c
int32_t __saved_edi
int32_t var_8c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_66c1d0(arg2)
void* const ecx_2

if (arg2[3].b == 0)
    char* ecx_1 = *arg2
    
    if (ecx_1 != arg2[1])
        if (arg2[2] == 0xa)
            arg2[4] += 1
        
        arg2[2] = zx.d(*ecx_1)
        *arg2 = &ecx_1[1]
        ecx_2 = arg2[2]
    else
        arg2[2] = 0xffffffff
        ecx_2 = 0xffffffff
else
    arg2[3].b = 0
    ecx_2 = arg2[2]

void* result
int32_t var_78
int32_t ebx

if (ecx_2 - 0x22 u> 0x59)
label_66c02c:
    
    if ((ecx_2 s< 0x30 || ecx_2 s> 0x39) && ecx_2 != 0x2d)
        if (arg2[2] != 0xffffffff)
            arg2[3].b = 1
        
        result.b = 0
    else
        if (arg2[2] != 0xffffffff)
            arg2[3].b = 1
        
        result = sub_66d2e0(arg1, arg2)
else
    switch (ecx_2)
        case 0x22
            result = sub_66c9a0(arg1, arg2)
        case 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 
                0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 
                0x3f, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 
                0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 
                0x5c, 0x5d, 0x5e, 0x5f, 0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x67, 0x68, 0x69, 0x6a, 
                0x6b, 0x6c, 0x6d, 0x6f, 0x70, 0x71, 0x72, 0x73, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7a
            goto label_66c02c
        case 0x5b
            result = sub_66ce30(arg1, arg2)
        case 0x66
            void var_4c
            sub_541920(&var_4c, "alse")
            ebx.b = sub_66c230(arg2, &var_4c)
            sub_53f510(&var_4c)
            
            if (ebx.b != 0)
                var_78 = 1
                char var_70_1 = 0
                int32_t var_c_2 = 1
                goto label_66bf69
            
            result.b = 0
        case 0x6e
            void var_64
            sub_541920(&var_64, "ull")
            ebx.b = sub_66c230(arg2, &var_64)
            sub_53f510(&var_64)
            
            if (ebx.b == 0)
                result.b = 0
            else
                var_78 = 0
                int32_t var_c_1 = 0
            label_66bf69:
                sub_66f740(arg1, &var_78)
                sub_670c00(&var_78)
                result.b = 1
        case 0x74
            void var_34
            sub_541920(&var_34, "rue")
            ebx.b = sub_66c230(arg2, &var_34)
            sub_53f510(&var_34)
            
            if (ebx.b != 0)
                var_78 = 1
                char var_70_2 = 1
                int32_t var_c_3 = 2
                goto label_66bf69
            
            result.b = 0
        case 0x7b
            result = sub_66cff0(arg1, arg2)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_7c)
return result
