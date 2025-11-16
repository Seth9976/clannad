// 函数: sub_754ac4
// 地址: 0x754ac4
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* ebx = &__getptd()[0x27]
int32_t* edi = __getptd()[0xee]
uint32_t Locale = sub_754b9f(arg1)
int32_t ecx = *(ebx + 0x10)
int32_t ecx_1 = neg.d(ecx)
void lCData
int32_t eax_4 =
    GetLocaleInfoW(Locale, (sbb.d(ecx_1, ecx_1, ecx != 0) & 0xfffff002) + 0x1001, &lCData, 0xf0)
int32_t result

if (eax_4 != 0)
    void* var_108_1 = &lCData
    uint32_t eax_5
    int32_t edx_1
    eax_5, edx_1 = sub_75d36c(*ebx, var_108_1)
    void* ecx_5 = var_108_1
    uint32_t var_10c_2
    
    if (eax_5 != 0)
        if (*(ebx + 0x10) == 0 && *(ebx + 0xc) != 0)
            void* var_108_3 = &lCData
            eax_5, edx_1 = sub_75d36c(*ebx, var_108_3)
            ecx_5 = var_108_3
            
            if (eax_5 == 0)
                int32_t* var_108_4 = edi
                var_10c_2 = eax_5
                goto label_754b6d
    else if (*(ebx + 0x10) != eax_5)
    label_754b79:
        *edi |= 4
        edi[1] = Locale
        edi[2] = Locale
    else
        int32_t* var_108_2 = edi
        var_10c_2 = 1
    label_754b6d:
        
        if (sub_754c9b(eax_5, edx_1, ecx_5, Locale, var_10c_2) != 0)
            goto label_754b79
    result = not.d(*edi u>> 2) & 1
else
    *edi &= eax_4
    result = eax_4 + 1

sub_745f2b(eax_1 ^ &__saved_ebp)
return result
