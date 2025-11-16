// 函数: sub_6ccc20
// 地址: 0x6ccc20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
uint32_t var_ec = 0x10000
int32_t eax_1
eax_1.b = *(arg3 + 0x208)
eax_1.b &= 0x30

if (eax_1.b != 0x30)
    void* const edx = &data_adb210
    int32_t i_1 = 0
    uint32_t ecx_6 = (((((zx.d(arg2[0x54]) << 8) + zx.d(arg2[0x55])) << 8) + zx.d(arg2[0x56])) << 8)
        + zx.d(arg2[0x57])
    int32_t i = 0
    uint32_t var_e8_1 = ecx_6
    uint32_t ebx_1 = 0
    
    do
        if (ecx_6 == *(edx - 4))
            if ((((((zx.d(arg2[0x58]) << 8) + zx.d(arg2[0x59])) << 8) + zx.d(arg2[0x5a])) << 8)
                    + zx.d(arg2[0x5b]) == *edx && (((((zx.d(arg2[0x5c]) << 8) + zx.d(arg2[0x5d])) << 8)
                    + zx.d(arg2[0x5e])) << 8) + zx.d(arg2[0x5f]) == *(edx + 4) && (((((zx.d(arg2[0x60])
                    << 8) + zx.d(arg2[0x61])) << 8) + zx.d(arg2[0x62])) << 8) + zx.d(arg2[0x63])
                    == *(edx + 8))
                uint32_t ecx_34
                
                if (ebx_1 != 0)
                    ecx_34 = var_ec
                else
                    ebx_1 = (((((zx.d(*arg2) << 8) + zx.d(arg2[1])) << 8) + zx.d(arg2[2])) << 8)
                        + zx.d(arg2[3])
                    ecx_34 = (((((zx.d(arg2[0x40]) << 8) + zx.d(arg2[0x41])) << 8)
                        + zx.d(arg2[0x42])) << 8) + zx.d(arg2[0x43])
                    var_ec = ecx_34
                
                if (ebx_1 == *(edx - 8))
                    uint32_t eax_20 = zx.d(*(edx + 0xe))
                    
                    if (ecx_34 == eax_20)
                        void* ecx_37 = arg4
                        
                        if (ecx_37 == 0)
                            ecx_37 = sub_7247a0(eax_20, arg2, 1, ebx_1)
                        
                        int32_t eax_24 = i_1 << 5
                        int32_t var_e4_1 = eax_24
                        void* ecx_38
                        void* edx_3
                        void var_e0
                        
                        if (ecx_37 != *(eax_24 + 0xadb200))
                        label_6cce8c:
                            ecx_38 = arg3
                            
                            if ((*(arg3 + 0x74) & 0x8000) != 0)
                                sub_6d4690(eax_24, &var_e0, ecx_38, 
                                    "Not recognizing known sRGB profile that has been edited")
                                edx_3 = &var_e0
                                ecx_38 = arg3
                            label_6cceab:
                                sub_6d4470(ecx_38, edx_3)
                                sub_745f2b(var_8 ^ &__saved_ebp)
                                return 0
                            
                            edx_3 = "Not recognizing known sRGB profile that has been edited"
                            
                            if ((*(arg3 + 0x78) & 0x200000) != 0)
                                goto label_6cceab
                        else
                            eax_24 = sub_724a10(eax_24, arg2, 0, ebx_1)
                            
                            if (eax_24 != *(var_e4_1 + 0xadb204))
                                goto label_6cce8c
                            
                            char const* const var_fc_3
                            
                            if (*(var_e4_1 + 0xadb21d) == 0)
                                if (*(var_e4_1 + 0xadb21c) != 0)
                                    goto label_6cce65
                                
                                ecx_38 = arg3
                                
                                if ((*(arg3 + 0x74) & 0x8000) != 0)
                                    var_fc_3 = "out-of-date sRGB profile with no signature"
                                label_6cce47:
                                    sub_6d4690(eax_24, &var_e0, ecx_38, var_fc_3)
                                    edx_3 = &var_e0
                                    ecx_38 = arg3
                                label_6cce57:
                                    sub_6d4470(ecx_38, edx_3)
                                label_6cce65:
                                    int32_t result = zx.d(*(var_e4_1 + 0xadb21d)) + 1
                                    sub_745f2b(var_8 ^ &__saved_ebp)
                                    return result
                                
                                edx_3 = "out-of-date sRGB profile with no signature"
                                
                                if ((*(arg3 + 0x78) & 0x200000) != 0)
                                    goto label_6cce57
                            else
                                ecx_38 = arg3
                                
                                if ((*(arg3 + 0x74) & 0x8000) != 0)
                                    if ((*(arg3 + 0x78) & 0x100000) == 0)
                                        sub_6d47a0(ecx_38, "known incorrect sRGB profile")
                                        noreturn
                                    
                                    var_fc_3 = "known incorrect sRGB profile"
                                    goto label_6cce47
                                
                                edx_3 = "known incorrect sRGB profile"
                                
                                if ((*(arg3 + 0x78) & &__dos_header) != 0)
                                    goto label_6cce57
                        sub_6d42e0(ecx_38, edx_3)
                        noreturn
            
            i = i_1
            ecx_6 = var_e8_1
        
        i += 1
        edx += 0x20
        i_1 = i
    while (i u< 7)

sub_745f2b(var_8 ^ &__saved_ebp)
return 0
