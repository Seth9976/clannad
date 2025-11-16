// 函数: sub_6da2e0
// 地址: 0x6da2e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
char ecx = (*(arg3 + 0x74)).b

if ((ecx & 1) == 0)
    sub_6d47a0(arg3, "missing IHDR")
    noreturn

if ((ecx & 4) == 0)
    int32_t eax_1
    eax_1.b = *(arg3 + 0x14f)
    
    if (eax_1.b != 3 || (ecx & 2) != 0)
        int32_t* eax_2
        
        if (arg2 == 0 || (*(arg2 + 8) & 0x20) == 0)
            int32_t eax_3
            
            if (eax_1.b != 3)
                eax_3 = ((zx.d(eax_1.b) & 2) | 1) * 2
            else
                eax_3 = 1
            
            if (arg4 == eax_3)
                char var_10
                sub_6d85d0(eax_3, &var_10, arg3, eax_3)
                eax_2 = sub_6d8610(arg3, 0)
                
                if (eax_2 == 0)
                    eax_2.b = *(arg3 + 0x14f)
                    char var_f4_1
                    
                    if (eax_2.b != 3)
                        uint16_t ecx_10 = zx.w(var_10)
                        var_f4_1 = 0
                        char var_f
                        
                        if ((eax_2.b & 2) != 0)
                            uint16_t var_f2_4 = ecx_10 * 0x100 + zx.w(var_f)
                            char var_e
                            char var_d
                            uint16_t var_f0_3 = zx.w(var_e) * 0x100 + zx.w(var_d)
                            char var_c
                            char var_b
                            uint16_t var_ee_3 = zx.w(var_c) * 0x100 + zx.w(var_b)
                        label_6da482:
                            eax_2 = nullptr
                        else
                            eax_2.w = zx.w(var_f) + ecx_10 * 0x100
                            int16_t var_ee_2 = eax_2.w
                            int16_t var_f0_2 = eax_2.w
                            int16_t var_f2_3 = eax_2.w
                        
                        if (arg2 != 0)
                            *(arg2 + 8) |= 0x20
                            *(arg2 + 0xaa) = var_f4_1.q
                            *(arg2 + 0xb2) = eax_2.w
                            sub_745f2b(var_8 ^ &__saved_ebp)
                            return eax_2
                    else
                        char ecx_7 = var_10
                        var_f4_1 = ecx_7
                        int16_t edx_4
                        
                        if (arg2 != 0)
                            edx_4 = *(arg2 + 0x14)
                        
                        if (arg2 == 0 || edx_4 == 0)
                            int16_t var_f0
                            var_f0.d = 0
                            int16_t var_f2_2 = 0
                            goto label_6da482
                        
                        if (zx.w(ecx_7) u< edx_4)
                            char* ecx_9 = zx.d(ecx_7) * 3 + *(arg3 + 0x13c)
                            uint16_t var_f2_1 = zx.w(*ecx_9)
                            uint16_t var_f0_1 = zx.w(ecx_9[1])
                            uint16_t var_ee_1 = zx.w(ecx_9[2])
                            goto label_6da482
                        
                        eax_2 = sub_6d4840(arg3, "invalid index")
            else
                sub_6d8610(arg3, arg4)
                eax_2 = sub_6d4840(arg3, "invalid")
        else
            sub_6d8610(arg3, arg4)
            eax_2 = sub_6d4840(arg3, "duplicate")
        
        sub_745f2b(var_8 ^ &__saved_ebp)
        return eax_2

int32_t eax_15 = sub_6d8610(arg3, arg4)

if ((*(arg3 + 0x78) & 0x100000) == 0)
    sub_6d47a0(arg3, "out of place")
    noreturn

char var_e8[0xd8]
sub_6d4690(eax_15, &var_e8, arg3, "out of place")
int32_t* eax_16 = sub_6d4470(arg3, &var_e8)
sub_745f2b(var_8 ^ &__saved_ebp)
return eax_16
