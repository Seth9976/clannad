// 函数: _LangCountryEnumProcEx@12
// 地址: 0x7540fd
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* ebx = &__getptd()[0x27]
int32_t ecx = *(ebx + 0x14)
int32_t ecx_1 = neg.d(ecx)
void var_88
int32_t eax_3 =
    sub_75521f(arg1, (sbb.d(ecx_1, ecx_1, ecx != 0) & 0xfffff005) + 0x1002, &var_88, 0x40)
int32_t result

if (eax_3 != 0)
    if (sub_75d36c(*(ebx + 4), &var_88) != 0)
    label_75422a:
        
        if ((*(ebx + 8) & 0x300) == 0x300)
            result = not.d(*(ebx + 8) u>> 2) & 1
        else
            int32_t ecx_8 = *(ebx + 0x10)
            int32_t ecx_9 = neg.d(ecx_8)
            
            if (sub_75521f(arg1, (sbb.d(ecx_9, ecx_9, ecx_8 != 0) & 0xfffff002) + 0x1001, &var_88, 
                    0x80) != 0)
                if (sub_75d36c(*ebx, &var_88) != 0)
                    result = not.d(*(ebx + 8) u>> 2) & 1
                else
                    *(ebx + 8) |= 0x200
                    
                    if (*(ebx + 0x10) == 0 && *(ebx + 0xc) != 0)
                        if (_wcslen(*ebx) != *(ebx + 0xc))
                            goto label_754286
                        
                        if (sub_754465(arg1) != 0)
                            goto label_754286
                        
                        if (_GetPrimaryLen(*ebx) != _wcslen(*ebx))
                            goto label_754286
                        
                        result = not.d(*(ebx + 8) u>> 2) & 1
                    else
                    label_754286:
                        *(ebx + 8) |= 0x100
                        
                        if (*(ebx + 0x250) != 0)
                            result = not.d(*(ebx + 8) u>> 2) & 1
                        else
                            if (_wcsncpy_s(ebx + 0x250, 0x55, arg1, _wcslen(arg1) + 1) != 0)
                                goto label_754316
                            
                            result = not.d(*(ebx + 8) u>> 2) & 1
            else
                *(ebx + 8) = 0
                result = 1
    else
        int32_t eax_5 = *(ebx + 0x10)
        int32_t eax_6 = neg.d(eax_5)
        
        if (sub_75521f(arg1, (sbb.d(eax_6, eax_6, eax_5 != 0) & 0xfffff002) + 0x1001, &var_88, 0x40)
                != 0)
            if (sub_75d36c(*ebx, &var_88) == 0)
                *(ebx + 8) |= 0x304
            label_7541ce:
                
                if (_wcsncpy_s(ebx + 0x250, 0x55, arg1, _wcslen(arg1) + 1) == 0)
                    goto label_75422a
                
            label_754316:
                int32_t var_ac_3
                __builtin_memset(&var_ac_3, 0, 0x14)
                __invoke_watson()
                noreturn
            
            if ((*(ebx + 8) & 2) != 0)
                goto label_75422a
            
            uint32_t eax_16
            
            if (*(ebx + 0xc) != 0)
                eax_16 = __wcsnicmp(*ebx, &var_88, *(ebx + 0xc))
            
            if (*(ebx + 0xc) != 0 && eax_16 == 0)
                *(ebx + 8) |= 2
                goto label_7541ce
            
            if ((*(ebx + 8) & 1) != 0)
                goto label_75422a
            
            if (sub_754465(arg1) == 0)
                goto label_75422a
            
            *(ebx + 8) |= 1
            goto label_7541ce
        
        *(ebx + 8) = 0
        result = 1
else
    *(ebx + 8) &= eax_3
    result = eax_3 + 1

sub_745f2b(eax_1 ^ &__saved_ebp)
return result
