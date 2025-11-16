// 函数: sub_69a9b0
// 地址: 0x69a9b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ecx = __chkstk(0x200c)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int16_t* pv = nullptr
HKEY result = sub_69a6f0(ecx, arg1, &pv)
HKEY result_1 = result

if (result_1 s>= 0)
    int16_t* pv_1 = pv
    *ecx = pv_1
    
    if (0 != *pv_1)
    label_69aa0e:
        int16_t string1[0xff4]
        result_1 = sub_69a090(ecx, &string1)
        
        if (result_1 s>= 0)
            int32_t edi_1 = 0
            
            for (int32_t i = 0; i u< 0x70; )
                if (lstrcmpiW(&string1, *(i + &data_aff240)) == 0)
                    int32_t edi_2 = *((edi_1 << 3) + &data_aff244)
                    
                    if (edi_2 == 0)
                        goto label_69aa40
                    
                    result_1 = sub_69a090(ecx, &string1)
                    
                    if (result_1 s< 0)
                        goto label_69aa4c
                    
                    if (0x7b != string1[0])
                        goto label_69aa40
                    
                    int32_t var_14_4 = 0
                    
                    if (arg2 == 0)
                        result_1 = sub_69ab10(ecx, &string1, edi_2, 0)
                        
                        if (result_1 s< 0)
                            goto label_69aa4c
                    else
                        int32_t eax_6 = *ecx
                        result_1 = sub_69ab10(ecx, &string1, edi_2, arg2)
                        
                        if (result_1 s< 0)
                            int32_t var_14_5 = 0
                            int32_t var_18_3 = 0
                            *ecx = eax_6
                            sub_69ab10(ecx, &string1, edi_2, var_18_3)
                            goto label_69aa4c
                    
                    sub_69a040(ecx)
                    
                    if (0 != **ecx)
                        goto label_69aa0e
                    
                    goto label_69aa4c
                
                i += 8
                edi_1 += 1
            
        label_69aa40:
            result_1 = 0x80020009
    
label_69aa4c:
    CoTaskMemFree(pv)
    result = result_1

int32_t entry_ebx
sub_745f2b(entry_ebx ^ &__saved_ebp)
return result
