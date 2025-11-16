// 函数: sub_4d26dd
// 地址: 0x4d26dd
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t edi
int32_t var_50 = edi
int32_t i = 0
int32_t result_1 = 0
char* var_34 = nullptr
int32_t result

if (*(arg1 + 0x158) != 0)
    int32_t eax_3 = *(arg1 + 0x1d0) + *(arg1 + 0x1f0)
    
    if (eax_3 != neg.d(*(arg1 + 0x1f4)))
        char* ebx_1 = sub_745f3f((eax_3 + *(arg1 + 0x1f4)) << 2)
        var_34 = ebx_1
        
        if (ebx_1 != 0)
            if (*(arg1 + 0x2c) u> 0)
                do
                    int32_t i_1 = i
                    void var_28
                    sub_749803(&var_28, "r_$Int%d")
                    int32_t result_2 = sub_47fcd9(arg1 + 0x1b4, &var_28, i, 1)
                    result_1 = result_2
                    
                    if (result_2 s< 0)
                        goto label_4d289c
                    
                    i += 1
                while (i u< *(arg1 + 0x2c))
                
                ebx_1 = var_34
            
            sub_47e150(arg1 + 0x1b4, ebx_1)
            int32_t edi_2 = *(arg1 + 0x1d0) + *(arg1 + 0x1f4)
            sub_47e150(arg1 + 0x1d4, &ebx_1[edi_2 << 2])
            int32_t edi_3 = edi_2 + *(arg1 + 0x1f0)
            sub_761c30(ebx_1, edi_3, 4, sub_47f5fb)
            int16_t var_48 = 1
            int16_t var_46_1 = 3
            int16_t var_44_1 = 1
            int16_t var_42_1 = 4
            int16_t var_40_1 = 1
            int16_t var_3e_1 = 0
            int32_t var_3c_1 = 0
            int32_t* esi_1 = arg3 + arg4 * 0x14
            int32_t var_30_1 = 0
            
            if (edi_3 u> 0)
                while (true)
                    void* ebx_3 = &ebx_1[var_30_1 << 2]
                    int32_t result_3 = sub_4c6c51(arg2, **ebx_3, 0xffffffff, 7, esi_1)
                    result_1 = result_3
                    
                    if (result_3 s< 0)
                        goto label_4d289c
                    
                    int32_t result_4 = sub_4c6c51(arg2, &var_48, 0x10, 6, &esi_1[3])
                    result_1 = result_4
                    
                    if (result_4 s< 0)
                        goto label_4d289c
                    
                    if (*(*ebx_3 + 0xc) != 0)
                        *(esi_1 + 0xa) |= 1
                        int32_t result_5 = sub_4c6c51(arg2, *ebx_3 + 0x10, 0x10, 7, &esi_1[4])
                        result_1 = result_5
                        
                        if (result_5 s< 0)
                            goto label_4d289c
                    
                    var_30_1 += 1
                    esi_1[1].w = 2
                    void* eax_17
                    eax_17.w = *(*ebx_3 + 4)
                    *(esi_1 + 6) = eax_17.w
                    esi_1[2].w = 1
                    esi_1 = &esi_1[5]
                    
                    if (var_30_1 u>= edi_3)
                        break
                    
                    ebx_1 = var_34
            
            result_1 = 0
        else
            result_1 = 0x8007000e
    
label_4d289c:
    j__free(var_34)
    result = result_1
else
    result = 0

sub_745f2b(__security_cookie_1)
return result
