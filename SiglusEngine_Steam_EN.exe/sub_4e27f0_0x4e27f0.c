// 函数: sub_4e27f0
// 地址: 0x4e27f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* ecx = __chkstk(0x100c)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
char* pv = nullptr
PSTR result = sub_4e2520(ecx, arg1, &pv)
PSTR result_1 = result

if (result_1 s>= 0)
    char* pv_1 = pv
    *ecx = pv_1
    
    if (*pv_1 != 0)
    label_4e284e:
        char string1[0xfe8]
        result_1 = sub_4e1e60(ecx, &string1)
        
        if (result_1 s>= 0)
            int32_t edi_1 = 0
            
            for (int32_t i = 0; i u< 0x70; )
                if (lstrcmpiA(&string1, *(i + &data_61e690)) == 0)
                    int32_t edi_2 = *((edi_1 << 3) + &data_61e694)
                    
                    if (edi_2 == 0)
                        goto label_4e2880
                    
                    result_1 = sub_4e1e60(ecx, &string1)
                    
                    if (result_1 s< 0)
                        goto label_4e288c
                    
                    if (string1[0] != 0x7b)
                        goto label_4e2880
                    
                    int32_t var_14_4 = 0
                    
                    if (arg2 == 0)
                        result_1 = sub_4e2950(ecx, &string1, edi_2, 0)
                        
                        if (result_1 s< 0)
                            goto label_4e288c
                    else
                        int32_t eax_6 = *ecx
                        result_1 = sub_4e2950(ecx, &string1, edi_2, arg2)
                        
                        if (result_1 s< 0)
                            int32_t var_14_5 = 0
                            int32_t var_18_3 = 0
                            *ecx = eax_6
                            sub_4e2950(ecx, &string1, edi_2, var_18_3)
                            goto label_4e288c
                    
                    sub_4e1e10(ecx)
                    
                    if (**ecx != 0)
                        goto label_4e284e
                    
                    goto label_4e288c
                
                i += 8
                edi_1 += 1
            
        label_4e2880:
            result_1 = 0x80020009
    
label_4e288c:
    CoTaskMemFree(pv)
    result = result_1

int32_t entry_ebx
sub_5f02dd(entry_ebx ^ &__saved_ebp)
return result
