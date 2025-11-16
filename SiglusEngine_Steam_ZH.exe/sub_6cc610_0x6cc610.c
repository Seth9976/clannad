// 函数: sub_6cc610
// 地址: 0x6cc610
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
uint32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t var_8 = eax_1
uint32_t ecx = zx.d(*(arg2 + 0x4a))

if ((ecx & 0x8000) == 0)
    char const* const var_f4
    
    if (arg4 u> 3)
        var_f4 = "invalid sRGB rendering intent"
    label_6cc76d:
        sub_6cc420(eax_1, arg2, arg3, "sRGB", arg4, var_f4)
        sub_745f2b(var_8 ^ &__saved_ebp)
        return 0
    
    if ((ecx.b & 4) != 0)
        eax_1 = zx.d(arg2[0x12].w)
        
        if (eax_1 != arg4)
            var_f4 = "inconsistent rendering intents"
            goto label_6cc76d
    
    if ((ecx.b & 0x20) == 0)
        if ((ecx.b & 2) != 0)
            eax_1 = sub_6cc020(eax_1, &arg2[1], &data_adb2e0, 0x64)
            
            if (eax_1 == 0)
                void* ecx_4 = arg3
                void* edx_3
                
                if ((*(arg3 + 0x74) & 0x8000) == 0)
                    edx_3 = "cHRM chunk does not match sRGB"
                    
                    if ((*(arg3 + 0x78) & &__dos_header) == 0)
                        sub_6d42e0(ecx_4, "cHRM chunk does not match sRGB")
                        noreturn
                else
                    if ((*(arg3 + 0x78) & 0x100000) == 0)
                        sub_6d47a0(ecx_4, "cHRM chunk does not match sRGB")
                        noreturn
                    
                    void var_e4
                    sub_6d4690(eax_1, &var_e4, ecx_4, "cHRM chunk does not match sRGB")
                    edx_3 = &var_e4
                    ecx_4 = arg3
                
                eax_1 = sub_6d4470(ecx_4, edx_3)
        
        sub_6cb760(eax_1, arg2, arg3, 0xb18f, 2)
        arg2[0x12].w = arg4.w
        *(arg2 + 4) = data_adb2e0
        *arg2 = 0xb18f
        *(arg2 + 0x14) = data_adb2f0
        *(arg2 + 0x24) = data_ada478
        *(arg2 + 0x34) = data_ada488
        arg2[0x11] = 0x1734d
        *(arg2 + 0x4a) |= 0xe7
        sub_745f2b(var_8 ^ &__saved_ebp)
        return 1
    
    sub_6d4650(arg3)

sub_745f2b(var_8 ^ &__saved_ebp)
return 0
