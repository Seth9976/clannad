// 函数: sub_44896e
// 地址: 0x44896e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
void* esi_2 = arg2 * 0x64 + *(arg1 + 0x2c)
int32_t* ebx_2 = arg3 * 0x64 + *(esi_2 + 4)
int32_t edi
int32_t var_34 = edi
int32_t result

if (ebx_2[0x14].w u> 0 || ebx_2[0xd] != 0)
label_448b6e:
    result = 0x80004005
else
    ebx_2[0xc] &= 0xfffffffd
    int16_t var_20
    int16_t* var_38_1 = &var_20
    *(ebx_2 + 0x4e) = 0
    ebx_2[0x14].w = 0
    *ebx_2 = 1
    void var_18
    void var_10
    int32_t result_1 = sub_442fd3(arg4 + 0x20, &ebx_2[0xf], &var_18, &var_10)
    result = result_1
    
    if (result_1 s>= 0)
        void* eax_3 = ebx_2[0xf]
        
        if (eax_3 != 0)
            int32_t eax_4 = *(eax_3 + 0xc)
            int32_t* eax_7 = sub_745f3f((eax_4 << 5) + 4)
            void* eax_9
            
            if (eax_7 == 0)
                eax_9 = nullptr
            else
                *eax_7 = eax_4
                sub_61cdd0(&eax_7[1], 0x20, eax_4, sub_44325c)
                eax_9 = &eax_7[1]
            
            ebx_2[0xd] = eax_9
            
            if (eax_9 != 0)
                void* eax_10 = ebx_2[0xf]
                int32_t var_c_3 = 0
                ebx_2[0x14].w = *(eax_10 + 0xc)
                void* ecx_3 = *(eax_10 + 0x10) + eax_10
                void* var_14_1 = ecx_3
                
                if (*(eax_10 + 0xc) u> 0)
                    while (true)
                        int32_t var_38_3 = 0xa
                        void* eax_13 = sub_4439e9(arg1, *ecx_3 + ebx_2[0xf])
                        
                        if (eax_13 == 0)
                            goto label_448b6e
                        
                        int16_t ecx_5 = *(ebx_2 + 0x4e)
                        *(ebx_2 + 0x4e) = ecx_5 + 1
                        sub_4438fa(arg1, arg2, arg3, zx.d(ecx_5), eax_13, var_14_1)
                        result = 0
                        var_c_3 += 1
                        var_14_1 += 0x14
                        
                        if (var_c_3 u>= *(ebx_2[0xf] + 0xc))
                            break
                        
                        ecx_3 = var_14_1
                
                int16_t var_1c
                uint32_t ecx_9 = zx.d(var_1c)
                uint32_t edx_2 = zx.d(var_20)
                int16_t var_1e
                int32_t eax_16 = zx.d(var_1e) + ((edx_2 + ecx_9) << 2)
                *(arg4 + 8) = eax_16
                
                if (eax_16 u> 0)
                    *(arg4 + 8) = eax_16 - 1
                
                int32_t ebx_4 = *(arg4 + 8)
                int32_t eax_20 = ebx_4 u>> 1 | ebx_4
                int32_t ebx_7 = eax_20 u>> 2 | eax_20
                int32_t eax_23 = ebx_7 u>> 4 | ebx_7
                int32_t ebx_10 = eax_23 u>> 8 | eax_23
                int32_t eax_26 = ebx_10 u>> 0x10 | ebx_10
                *(arg4 + 8) = eax_26
                int32_t ebx_11 = *(esi_2 + 0xc)
                uint32_t var_14_3 = ebx_11 u>> 3
                int32_t var_c_5 = ebx_11 & 7
                int32_t eax_28 = var_c_5 + (var_14_3 << 3)
                *(esi_2 + 0xc) = eax_28
                *(arg4 + 0x10) = eax_28
                int32_t eax_30 = *(esi_2 + 0xc) + (edx_2 << 5)
                int32_t eax_32 = (eax_30 & 7) + (eax_30 u>> 3 << 3)
                *(esi_2 + 0xc) = eax_32
                *(arg4 + 0x14) = eax_32
                int32_t eax_34 = *(esi_2 + 0xc) + (zx.d(var_1e) << 3)
                int32_t eax_36 = (eax_34 & 7) + (eax_34 u>> 3 << 3)
                *(esi_2 + 0xc) = eax_36
                *(arg4 + 0x18) = eax_36
                *(esi_2 + 0xc) += ecx_9 << 5
                int32_t eax_37 = *(esi_2 + 0xc)
                
                if (eax_37 u<= var_c_5 + ((var_14_3 + eax_26) << 3) + 8)
                    eax_37 = var_c_5 + ((var_14_3 + eax_26) << 3) + 8
                
                *(esi_2 + 0xc) = eax_37
            else
                result = 0x8007000e

sub_745f2b(__security_cookie_1)
return result
