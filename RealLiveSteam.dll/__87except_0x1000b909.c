// 函数: __87except
// 地址: 0x1000b909
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
void* const __return_addr_1 = __return_addr
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t ecx_1 = zx.d(*arg3)
uint32_t var_94 = ecx_1
int32_t eax_3 = *arg2
int32_t var_a4_1

if (eax_3 == 1)
label_1000b96f:
    var_a4_1 = 8
label_1000b978:
    
    if (__handle_exc(var_a4_1, &arg2[6], ecx_1.b) == 0)
        int32_t var_50
        
        if (arg1 == 0x10 || arg1 == 0x16 || arg1 == 0x1d)
            double var_60_1 = fconvert.d(fconvert.t(*(arg2 + 0x10)))
            int32_t var_50_2 = (var_50 & 0xffffffe3) | 3
        else
            int32_t var_50_1 = var_50 & 0xfffffffe
        void var_90
        sub_100048b9(&var_90, &var_94, var_a4_1.b, arg1, &arg2[2], &arg2[6])
        noreturn
    
    ecx_1 = var_94
else
    if (eax_3 == 2)
        var_a4_1 = 4
        goto label_1000b978
    
    if (eax_3 == 3)
        var_a4_1 = 0x11
        goto label_1000b978
    
    if (eax_3 == 4)
        var_a4_1 = 0x12
        goto label_1000b978
    
    if (eax_3 == 5)
        goto label_1000b96f
    
    if (eax_3 == 7)
        *arg2 = 1
    else if (eax_3 == 8)
        var_a4_1 = 0x10
        goto label_1000b978
int16_t x87control
sub_10004c73(x87control, ecx_1.w, 0xffff)

if (*arg2 != 8 && data_10017e40 == 0)
    int32_t* var_a4_4 = arg2
    sub_1000977c()

void* result = __set_errno_from_matherr(*arg2)
sub_10002604(eax_1 ^ &__saved_ebp)
return result
