// 函数: sub_60f510
// 地址: 0x60f510
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??$raise_error@Vdomain_error@std@@O@detail@policies@math@boost@@YAXPBD0ABO@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_94 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** eax_4 = data_bac4d8 + 0x18
int16_t var_74 = 0
int32_t var_84 = 0
int32_t var_60 = 7
int32_t var_64 = 0
sub_52e3c0(&var_74, eax_4, 0, 0xffffffff)
int32_t var_8_1 = 0
int32_t var_30 = 7
int32_t var_34 = 0
int16_t var_44 = 0
sub_52e720(&var_44, 0xaf398c, 3)
var_8_1.b = 1
int32_t* esi = data_bac50c
int32_t edi = 0
int32_t eax_5
int32_t edx
edx:eax_5 = muls.dp.d(0x2aaaaaab, esi[1] - *esi)
int32_t edx_1 = edx s>> 3
int16_t* result

if ((edx_1 u>> 0x1f) + edx_1 s<= 0)
label_60f62c:
    *(arg1 + 0x14) = 7
    *(arg1 + 0x10) = 0
    *arg1 = 0
    sub_52e720(arg1, &data_ad7c90, nullptr)
    
    if (var_30 u>= 8)
        j__free(var_44.d)
    
    int32_t var_30_1 = 7
    int32_t var_34_1 = 0
    var_44 = 0
    
    if (var_60 u>= 8)
        j__free(var_74.d)
    
    result = arg1
else
    void* ebx_1 = data_bac4d8
    int32_t eax_9 = 0
    int32_t var_78_1 = 0
    
    while (true)
        void* ecx_5 = *esi + eax_9
        void* eax_10
        
        if (*(ebx_1 + 0x8c) u< 8)
            eax_10 = ebx_1 + 0x78
        else
            eax_10 = *(ebx_1 + 0x78)
        
        int32_t var_98_1 = *(ebx_1 + 0x88)
        
        if (sub_536340(ecx_5, ecx_5, *(ecx_5 + 0x10), eax_10) == 0)
            break
        
        edi += 1
        var_78_1 += 0x30
        int32_t eax_12
        int32_t edx_2
        edx_2:eax_12 = muls.dp.d(0x2aaaaaab, esi[1] - *esi)
        int32_t edx_3 = edx_2 s>> 3
        eax_9 = var_78_1
        
        if (edi s>= (edx_3 u>> 0x1f) + edx_3)
            goto label_60f62c
    
    if (edi s< 0)
        goto label_60f62c
    
    int32_t eax_16
    int32_t edx_4
    edx_4:eax_16 = muls.dp.d(0x2aaaaaab, esi[1] - *esi)
    int32_t edx_5 = edx_4 s>> 3
    
    if (edi s>= (edx_5 u>> 0x1f) + edx_5)
        goto label_60f62c
    
    int32_t ebx_3 = edi * 0x30
    int32_t edi_1 = edi
    
    while (true)
        void** eax_21 = *esi + ebx_3
        int16_t var_5c = 0
        int32_t var_48_1 = 7
        int32_t var_4c_1 = 0
        sub_52e3c0(&var_5c, eax_21, 0, 0xffffffff)
        var_8_1.b = 2
        PWSTR lpFileName_1
        std::num_put<wchar_t,class std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > >::do_put(
            &var_5c, &var_74, &lpFileName_1, &var_5c, arg2, &var_44)
        var_8_1.b = 3
        PWSTR lpFileName = &lpFileName_1
        int32_t var_18
        
        if (var_18 u>= 8)
            lpFileName = lpFileName_1
        
        uint32_t eax_23 = GetFileAttributesW(lpFileName)
        
        if (eax_23 != 0xffffffff && (eax_23.b & 0x10) == 0)
            *(arg1 + 0x14) = 7
            *(arg1 + 0x10) = 0
            *arg1 = 0
            sub_52e3c0(arg1, &lpFileName_1, 0, 0xffffffff)
            
            if (var_18 u>= 8)
                j__free(lpFileName_1)
            
            int32_t var_18_1 = 7
            int32_t var_1c_2 = 0
            lpFileName_1.w = 0
            
            if (var_48_1 u>= 8)
                j__free(var_5c.d)
            
            int32_t var_48_2 = 7
            int32_t var_4c_2 = 0
            var_5c = 0
            
            if (var_30 u>= 8)
                j__free(var_44.d)
            
            int32_t var_30_2 = 7
            int32_t var_34_2 = 0
            var_44 = 0
            
            if (var_60 u>= 8)
                j__free(var_74.d)
            
            result = arg1
            break
        
        if (var_18 u>= 8)
            j__free(lpFileName_1)
        
        var_8_1.b = 1
        var_18 = 7
        int32_t var_1c_1 = 0
        lpFileName_1.w = 0
        
        if (var_48_1 u>= 8)
            j__free(var_5c.d)
        
        esi = data_bac50c
        edi_1 += 1
        ebx_3 += 0x30
        int32_t eax_24
        int32_t edx_7
        edx_7:eax_24 = muls.dp.d(0x2aaaaaab, esi[1] - *esi)
        int32_t edx_8 = edx_7 s>> 3
        
        if (edi_1 s>= (edx_8 u>> 0x1f) + edx_8)
            goto label_60f62c

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
