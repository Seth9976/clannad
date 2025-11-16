// 函数: sub_747681
// 地址: 0x747681
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
_memset(arg1, 0, 0x1ca)
int16_t* esi = arg2
int16_t eax = *esi

if (eax != 0)
    if (eax != 0x2e || esi[1] == 0)
        arg2 = nullptr
        
        while (true)
            int32_t eax_4 = sub_753d1a(esi, &data_aad17c)
            
            if (eax_4 != 0)
                void* ecx_2 = &esi[eax_4]
                uint32_t ebx_1 = zx.d(*ecx_2)
                int16_t* var_24_2
                int32_t var_20_1
                int16_t* var_1c_3
                int32_t var_18_1
                
                if (arg2 != 0)
                    int16_t* eax_5
                    
                    if (arg2 != 1)
                        if (arg2 == 2 && eax_4 u< 0x10 && (ebx_1.w == 0 || ebx_1.w == 0x2c))
                            var_18_1 = eax_4
                            var_1c_3 = esi
                            var_20_1 = 0x10
                            eax_5 = &arg1[0x80]
                            goto label_74775f
                    else if (eax_4 u< 0x40 && ebx_1 != 0x5f)
                        var_18_1 = eax_4
                        var_1c_3 = esi
                        var_20_1 = 0x40
                        eax_5 = &arg1[0x40]
                    label_74775f:
                        var_24_2 = eax_5
                        goto label_747760
                else if (eax_4 u< 0x40 && ebx_1.w != 0x2e)
                    var_18_1 = eax_4
                    var_1c_3 = esi
                    var_20_1 = 0x40
                    var_24_2 = arg1
                label_747760:
                    
                    if (_wcsncpy_s(var_24_2, var_20_1, var_1c_3, var_18_1) != 0)
                        break
                    
                    if (ebx_1.w == 0x2c)
                        return 0
                    
                    if (ebx_1.w == 0)
                        return 0
                    
                    esi = ecx_2 + 2
                    arg2 += 1
                    continue
            
            return 0xffffffff
        
        int32_t var_28
        __builtin_memset(&var_28, 0, 0x14)
        __invoke_watson()
        noreturn
    
    int32_t eax_3 = _wcsncpy_s(&arg1[0x80], 0x10, &esi[1], 0xf)
    
    if (eax_3 != 0)
        int32_t var_28_1
        __builtin_memset(&var_28_1, 0, 0x14)
        __invoke_watson()
        noreturn
    
    arg1[0x8f] = eax_3.w

return 0
