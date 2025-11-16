// 函数: sub_49f680
// 地址: 0x49f680
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t result = 0
int32_t esi
int32_t var_248_1
uint32_t var_244_2
int32_t var_23c_2
int32_t var_238_3
void var_218
int32_t eax_5
int32_t ecx

if (arg3 != 0)
    int32_t var_220
    int32_t var_21c
    sub_4c5550(&var_218, arg2, data_7031ac, 6, &var_218, &var_220, &var_21c)
    WaitForSingleObject(data_641b54, 0xffffffff)
    
    if (data_641b5c == 0)
        esi = 0xfffffffd
    else
        esi = 0xffffffff
        void* eax_7 = &data_2092158
        int32_t edx_1 = 0x38
        
        while (*eax_7 != 0)
            eax_7 += 0x180
            edx_1 += 1
            
            if (eax_7 s>= &data_2092d58)
                goto label_49f804
        
        esi = edx_1
        
        if (edx_1 != 0xffffffff)
            ecx = edx_1 * 0x3b8 + 0x2092d50
            int32_t var_234_4 = ecx
            (&data_208cd54)[edx_1 * 0x60] = ecx
            eax_5 = var_220
            var_238_3 = eax_5
            var_23c_2 = arg4
            int32_t var_240_3 = 0
            var_244_2 = eax_5
            var_248_1 = var_21c
        label_49f7de:
            int32_t eax_11 =
                sub_4cd600(eax_5, &var_218, ecx, var_248_1, var_244_2, 0, var_23c_2, var_238_3)
            
            if (eax_11 == 0)
                esi = eax_11 - 2
else
    if (arg2 == 0)
        int32_t var_234_1 = 0x1350390
        char* var_238_1 = &data_1352410
        sub_4c84d0(&var_218, "%s\%s")
    else
        char* var_234 = arg2
        int32_t var_238 = 0x1350390
        char* var_23c_1 = &data_1352410
        sub_4c84d0(&var_218, "%s\%s\%s")
    
    WaitForSingleObject(data_641b54, 0xffffffff)
    
    if (data_641b5c == 0)
        esi = 0xfffffffd
    else
        esi = 0xffffffff
        void* eax_2 = &data_2092158
        int32_t edx = 0x38
        
        while (*eax_2 != 0)
            eax_2 += 0x180
            edx += 1
            
            if (eax_2 s>= &data_2092d58)
                goto label_49f804
        
        esi = edx
        
        if (edx != 0xffffffff)
            ecx = edx * 0x3b8 + 0x2092d50
            int32_t var_234_2 = ecx
            var_238_3 = 0xffffffff
            var_23c_2 = arg4
            eax_5 = edx * 0x180
            int32_t var_240_2 = 0
            var_244_2 = 0xffffffff
            var_248_1 = 0
            *(eax_5 + &data_208cd54) = ecx
            goto label_49f7de
label_49f804:
ReleaseSemaphore(data_641b54, 1, nullptr)

if (esi s>= 0)
    void* eax_14
    
    if (data_641b5c != 0 && esi s< 0x40)
        eax_14 = (&data_208cd54)[esi * 0x60]
    
    int16_t* eax_15
    
    if (data_641b5c == 0 || esi s>= 0x40 || eax_14 == 0)
        eax_15 = nullptr
    else
        eax_15 = eax_14 + 0x2c
    
    if (arg5 != 0xffffffff)
        int32_t ecx_3 = zx.d(*eax_15) * *(eax_15 + 4)
        
        if (eax_15[1] == 0x10)
            ecx_3 *= 2
        
        result = ecx_3 s/ 0xa * arg5 s/ 0xa s/ 0xa
    else if (arg6 != 0xffffffff)
        result = zx.d(*eax_15) * arg6
        
        if (eax_15[1] == 0x10)
            result *= 2
    
    WaitForSingleObject(data_641b54, 0xffffffff)
    sub_4c29d0(esi)
    ReleaseSemaphore(data_641b54, 1, nullptr)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
