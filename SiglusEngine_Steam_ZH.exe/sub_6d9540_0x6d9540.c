// 函数: sub_6d9540
// 地址: 0x6d9540
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_2 = *(arg3 + 0x74)

if ((eax_2.b & 1) == 0)
    sub_6d47a0(arg3, "missing IHDR")
    noreturn

if ((eax_2.b & 6) != 0)
    int32_t eax_3 = sub_6d8610(arg3, arg4)
    
    if ((*(arg3 + 0x78) & 0x100000) == 0)
        sub_6d47a0(arg3, "out of place")
        noreturn
    
    char var_108[0xdc]
    sub_6d4690(eax_3, &var_108, arg3, "out of place")
    int32_t* eax_4 = sub_6d4470(arg3, &var_108)
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return eax_4

int32_t* eax_5

if (arg4 == 0x20)
    void var_2c
    sub_6d85d0(eax_2, &var_2c, arg3, 0x20)
    int32_t ecx_5
    eax_5, ecx_5 = sub_6d8610(arg3, 0)
    
    if (eax_5 == 0)
        uint32_t eax_6
        int32_t ecx_6
        eax_6, ecx_6 = sub_6d8410(ecx_5, &var_2c)
        uint32_t var_110_1 = eax_6
        void var_28
        uint32_t eax_7
        int32_t ecx_7
        eax_7, ecx_7 = sub_6d8410(ecx_6, &var_28)
        void var_24
        uint32_t eax_8
        int32_t ecx_8
        eax_8, ecx_8 = sub_6d8410(ecx_7, &var_24)
        uint32_t var_128 = eax_8
        void var_20
        uint32_t eax_9
        int32_t ecx_9
        eax_9, ecx_9 = sub_6d8410(ecx_8, &var_20)
        void var_1c
        uint32_t eax_10
        int32_t ecx_10
        eax_10, ecx_10 = sub_6d8410(ecx_9, &var_1c)
        void var_18
        uint32_t eax_11
        int32_t ecx_11
        eax_11, ecx_11 = sub_6d8410(ecx_10, &var_18)
        void var_14
        uint32_t eax_12
        int32_t ecx_12
        eax_12, ecx_12 = sub_6d8410(ecx_11, &var_14)
        void var_10
        uint32_t eax_13 = sub_6d8410(ecx_12, &var_10)
        uint32_t var_114_1 = eax_13
        
        if (eax_6 == 0xffffffff || eax_7 == 0xffffffff || var_128 == 0xffffffff
                || eax_9 == 0xffffffff || eax_10 == 0xffffffff || eax_11 == 0xffffffff
                || eax_12 == 0xffffffff || eax_13 == 0xffffffff)
            eax_5 = sub_6d4840(arg3, "invalid values")
        else
            eax_5 = zx.d(*(arg3 + 0x306))
            
            if ((eax_5 & 0x8000) == 0)
                if ((eax_5.b & 0x10) == 0)
                    *(arg3 + 0x306) = eax_5.w | 0x10
                    sub_6cc1e0(&var_128, arg3 + 0x2bc, arg3, &var_128, 1)
                    int32_t eax_17 = sub_6cba60(arg3, arg2)
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_17
                
                *(arg3 + 0x306) = eax_5.w | 0x8000
                sub_6cba60(arg3, arg2)
                eax_5 = sub_6d4840(arg3, "duplicate")
else
    sub_6d8610(arg3, arg4)
    eax_5 = sub_6d4840(arg3, "invalid")

sub_745f2b(eax_1 ^ &__saved_ebp)
return eax_5
