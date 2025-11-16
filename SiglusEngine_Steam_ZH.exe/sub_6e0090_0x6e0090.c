// 函数: sub_6e0090
// 地址: 0x6e0090
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9ccbe3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int16_t var_8c
int32_t eax_2 = __security_cookie ^ &var_8c
fsbase->NtTib.ExceptionList = &ExceptionList
void** pszFileName = arg2
int32_t __saved_edi
(*(*arg1 + 8))(__security_cookie ^ &__saved_edi)

if (pszFileName[5] u>= 8)
    pszFileName = *pszFileName

HMMIO hmmio = mmioOpenW(pszFileName, nullptr, 0x10000)
arg1[5] = hmmio
int32_t result
int32_t var_78_1
int16_t var_74
int32_t var_60_1

if (hmmio != 0)
    MMCKINFO* esi = &arg1[6]
    
    if (mmioDescend(hmmio, esi, nullptr, 0) != 0)
        var_60_1 = 7
        int32_t var_64_1 = 0
        var_74 = 0
        sub_52e720(&var_74, u"open_wave", 9)
        int32_t var_c_2 = 2
        var_78_1 = 7
        int32_t var_7c_2 = 0
        var_8c = 0
        sub_52e720(&var_8c, "\rNckj0 ", 0xf)
        var_c_2.b = 3
        goto label_6e08e5
    
    if (esi->ckid != 0x46464952 || arg1[8] != 0x45564157)
        var_60_1 = 7
        int32_t var_64_9 = 0
        var_74 = 0
        sub_52e720(&var_74, u"open_wave", 9)
        int32_t var_c_18 = 4
        var_78_1 = 7
        int32_t var_7c_10 = 0
        var_8c = 0
        sub_52e720(&var_8c, "\rNckj0 ", 0xf)
        var_c_18.b = 5
        goto label_6e08e5
    
    __builtin_strncpy(&arg1[0xb], "fmt ", 4)
    
    if (mmioDescend(arg1[5], &arg1[0xb], esi, 0x10) == 0)
        if (arg1[0xc] u< 0x10)
            int32_t var_78_3 = 7
            int32_t var_7c_4 = 0
            var_8c = 0
            sub_52e720(&var_8c, u"open_wave", 9)
            int32_t var_c_4 = 8
            int32_t var_60_3 = 7
            int32_t var_64_3 = 0
            var_74 = 0
            sub_52e720(&var_74, "\rNckj0 ", 0xf)
            var_c_4.b = 9
            goto label_6e0268
        
        int16_t pch
        
        if (mmioRead(arg1[5], &pch, 0x10) != 0x10)
            int32_t var_78_4 = 7
            int32_t var_7c_5 = 0
            var_8c = 0
            sub_52e720(&var_8c, u"open_wave", 9)
            int32_t var_c_5 = 0xa
            int32_t var_60_4 = 7
            int32_t var_64_4 = 0
            var_74 = 0
            sub_52e720(&var_74, "\rNckj0 ", 0xf)
            var_c_5.b = 0xb
            goto label_6e0268
        
        if (pch != 1)
            int32_t var_78_5 = 7
            int32_t var_7c_6 = 0
            var_8c = 0
            sub_52e720(&var_8c, u"open_wave", 9)
            int32_t var_c_6 = 0xc
            int32_t var_60_5 = 7
            int32_t var_64_5 = 0
            var_74 = 0
            sub_52e720(&var_74, "\rNckj0 ", 0xf)
            var_c_6.b = 0xd
            goto label_6e0268
        
        if (mmioAscend(arg1[5], &arg1[0xb], 0) != 0)
            int32_t var_78_6 = 7
            int32_t var_7c_7 = 0
            var_8c = 0
            sub_52e720(&var_8c, u"open_wave", 9)
            int32_t var_c_7 = 0xe
            int32_t var_60_6 = 7
            int32_t var_64_6 = 0
            var_74 = 0
            sub_52e720(&var_74, "\rNckj0 ", 0xf)
            var_c_7.b = 0xf
            goto label_6e0268
        
        if (mmioSeek(arg1[5], arg1[9] + 4, 0) == 0xffffffff)
            int32_t var_78_7 = 7
            int32_t var_7c_8 = 0
            var_8c = 0
            sub_52e720(&var_8c, u"open_wave", 9)
            int32_t var_c_8 = 0x10
            int32_t var_60_7 = 7
            int32_t var_64_7 = 0
            var_74 = 0
            sub_52e720(&var_74, "\rNckj0 ", 0xf)
            var_c_8.b = 0x11
            goto label_6e0268
        
        __builtin_strncpy(&arg1[0x10], "LIST", 4)
        uint32_t iOrigin = mmioDescend(arg1[5], &arg1[0x10], esi, 0x10)
        
        if (iOrigin == 0)
            if (arg1[0x12] == 0x4f464e49)
                if (mmioSeek(arg1[5], arg1[0x13] + 4, iOrigin) == 0xffffffff)
                    int32_t var_78_8 = 7
                    int32_t var_7c_9 = 0
                    var_8c = 0
                    sub_52e720(&var_8c, u"open_wave", 9)
                    int32_t var_c_9 = 0x12
                    int32_t var_60_8 = 7
                    int32_t var_64_8 = 0
                    var_74 = 0
                    sub_52e720(&var_74, "\rNckj0 ", 0xf)
                    var_c_9.b = 0x13
                    goto label_6e0268
                
                void* pmmckiParent = &arg1[0x10]
                __builtin_strncpy(&arg1[0x15], "ICOP", 4)
                
                if (mmioDescend(arg1[5], &arg1[0x15], pmmckiParent, 0x10) == 0)
                    int32_t eax_21 = arg1[0x16]
                    
                    if (eax_21 != 0)
                        sub_5979b0(&arg1[0x24], eax_21)
                        char* pch_1 = arg1[0x24]
                        
                        if (pch_1 == arg1[0x25])
                            pch_1 = nullptr
                        
                        if (mmioRead(arg1[5], pch_1, arg1[0x16]) != arg1[0x16])
                            sub_52e820(&var_8c, u"open_wave")
                            int32_t var_c_10 = 0x14
                            sub_52e820(&var_74, u"ICOP")
                            var_c_10.b = 0x15
                            goto label_6e0268
                        
                        pmmckiParent = &arg1[0x10]
                    
                    if (mmioAscend(arg1[5], &arg1[0x15], 0) != 0)
                        sub_52e820(&var_8c, u"open_wave")
                        int32_t var_c_11 = 0x16
                        sub_52e820(&var_74, "\rNckj0 ")
                        var_c_11.b = 0x17
                        goto label_6e0268
                
                if (mmioSeek(arg1[5], arg1[0x13] + 4, 0) == 0xffffffff)
                    sub_52e820(&var_8c, u"open_wave")
                    int32_t var_c_12 = 0x18
                    sub_52e820(&var_74, "\rNckj0 ")
                    var_c_12.b = 0x19
                    goto label_6e0268
                
                __builtin_strncpy(&arg1[0x15], "ICRD", 4)
                
                if (mmioDescend(arg1[5], &arg1[0x1a], pmmckiParent, 0x10) == 0)
                    int32_t eax_30 = arg1[0x1b]
                    int32_t eax_31
                    
                    if (eax_30 != 0)
                        sub_5979b0(&arg1[0x27], eax_30)
                        char* pch_2 = arg1[0x27]
                        
                        if (pch_2 == arg1[0x28])
                            pch_2 = nullptr
                        
                        eax_31 = mmioRead(arg1[5], pch_2, arg1[0x1b])
                    
                    if (eax_30 != 0 && eax_31 != arg1[0x1b])
                        sub_52e820(&var_8c, u"open_wave")
                        int32_t var_c_13 = 0x1a
                        sub_52e820(&var_74, "\rNckj0 ")
                        var_c_13.b = 0x1b
                        goto label_6e0268
                    
                    if (mmioAscend(arg1[5], &arg1[0x1a], 0) != 0)
                        sub_52e820(&var_8c, u"open_wave")
                        int32_t var_c_14 = 0x1c
                        sub_52e820(&var_74, "\rNckj0 ")
                        var_c_14.b = 0x1d
                        goto label_6e0268
            
            if (mmioAscend(arg1[5], &arg1[0x10], 0) != 0)
                sub_52e820(&var_8c, u"open_wave")
                int32_t var_c_15 = 0x1e
                sub_52e820(&var_74, "\rNckj0 ")
                var_c_15.b = 0x1f
                goto label_6e0268
            
            esi = &arg1[6]
        
        if (mmioSeek(arg1[5], arg1[9] + 4, 0) == 0xffffffff)
            sub_52e820(&var_8c, u"open_wave")
            int32_t var_c_16 = 0x20
            sub_52e820(&var_74, "\rNckj0 ")
            var_c_16.b = 0x21
            goto label_6e0268
        
        __builtin_strncpy(&arg1[0x1f], "data", 4)
        
        if (mmioDescend(arg1[5], &arg1[0x1f], esi, 0x10) == 0)
            int16_t var_5a
            int32_t var_58
            int16_t var_4e
            sub_6e46c0(arg1, zx.d(var_5a), zx.d(var_4e), var_58, arg1[0x20])
            result.b = 1
        else
            void var_34
            sub_52e820(&var_34, u"open_wave")
            int32_t var_c_17 = 0x22
            void var_4c
            sub_52e820(&var_4c, "\rNckj0 ")
            var_c_17.b = 0x23
            sub_6b9da0(&var_4c, &var_34)
            sub_52e8a0(&var_4c)
            sub_52e8a0(&var_34)
            result.b = 0
    else
        int32_t var_78_2 = 7
        int32_t var_7c_3 = 0
        var_8c = 0
        sub_52e720(&var_8c, u"open_wave", 9)
        int32_t var_c_3 = 6
        int32_t var_60_2 = 7
        int32_t var_64_2 = 0
        var_74 = 0
        sub_52e720(&var_74, "\rNckj0 ", 0xf)
        var_c_3.b = 7
    label_6e0268:
        sub_6b9da0(&var_74, &var_8c)
        sub_52e8a0(&var_74)
        sub_52e8a0(&var_8c)
        result.b = 0
else
    var_60_1 = 7
    HMMIO hmmio_1 = hmmio
    var_74 = hmmio.w
    sub_52e720(&var_74, u"open_wave", 9)
    int32_t var_c_1 = 0
    var_78_1 = 7
    int32_t var_7c_1 = 0
    var_8c = 0
    sub_52e720(&var_8c, 0xb04fd0, 0xe)
    var_c_1.b = 1
label_6e08e5:
    sub_6b9da0(&var_8c, &var_74)
    
    if (var_78_1 u>= 8)
        j__free(var_8c.d)
    
    int32_t var_78_9 = 7
    int32_t var_7c_11 = 0
    var_8c = 0
    
    if (var_60_1 u>= 8)
        j__free(var_74.d)
    
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_8c)
return result
