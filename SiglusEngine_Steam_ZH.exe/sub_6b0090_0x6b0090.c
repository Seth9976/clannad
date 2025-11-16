// 函数: sub_6b0090
// 地址: 0x6b0090
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cac08
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_1e0 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** var_1cc = arg1
arg1[1] = *arg1
int32_t eax_3
eax_3.b = arg3
*(arg1 + 0xd) = eax_3.b
int32_t var_1e4 = 0x58
arg1[5] = arg4
char var_1e8 = 0
var_a4
void* var_1ec = &var_a4
arg1[3].b = 0
arg1[4] = 0
LOGFONTW logfont
logfont.lfHeight = 0
_memset(var_1ec, var_1e8, var_1e4)
logfont.lfCharSet = 1
HDC eax_5 = GetDC(arg2)
EnumFontFamiliesExW(eax_5, &logfont, sub_6b03f0, &arg1[3], 0)
ReleaseDC(arg2, eax_5)
void** ebx_1 = var_1cc
int16_t var_30

if (ebx_1[5] != 3)
    sub_6b0d40(ebx_1, &ebx_1[0xc])
else if (ebx_1[6] != ebx_1[7] && ebx_1[9] != ebx_1[0xa])
    for (void* i = ebx_1[6]; i != ebx_1[7]; i += 0x11c)
        int32_t ecx_1 = sub_52e820(&var_30, i + 0x9c)
        int32_t var_8_1 = 0
        void* esi_1 = ebx_1[9]
        
        if (esi_1 != ebx_1[0xa])
            int16_t* ebx_2 = esi_1 + 0x1c
            
            while (true)
                int32_t eax_9
                
                if (*ebx_2 != 0)
                    int16_t* eax_10 = ebx_2
                    
                    do
                        ecx_1.w = *eax_10
                        eax_10 = &eax_10[1]
                    while (ecx_1.w != 0)
                    
                    eax_9 = (eax_10 - &eax_10[1]) s>> 1
                else
                    eax_9 = 0
                
                int32_t var_1e4_5 = eax_9
                int16_t* var_20
                int32_t eax_12
                eax_12, ecx_1 = sub_536340(&var_30, ecx_1, var_20, ebx_2)
                
                if (eax_12 == 0)
                    ebx_1 = var_1cc
                    sub_6b0eb0(ebx_1, i)
                    break
                
                esi_1 += 0x11c
                ebx_2 = &ebx_2[0x8e]
                
                if (esi_1 == var_1cc[0xa])
                    ebx_1 = var_1cc
                    break
        
        int32_t var_8_2 = 0xffffffff
        int32_t var_1c
        
        if (var_1c u>= 8)
            j__free(var_30.d)

void* ecx_5 = *ebx_1
int32_t eax_18 = (ebx_1[1] - ecx_5) s/ 0x11c
sub_6b1180(eax_18, ebx_1[1], ecx_5, eax_18, sub_6affa0)
void* edi_3 = &ebx_1[0xc]
sub_6b0d40(edi_3, ebx_1)
void** esi_2 = var_1cc
ebx_1[1] = *ebx_1
void* i_1 = *edi_3

if (i_1 != esi_2[0xd])
    do
        int32_t var_1c_1 = 7
        int32_t var_20_1 = 0
        var_30 = 0
        int16_t var_1ac
        int32_t ecx_7
        
        if (var_1ac != 0)
            int16_t* ecx_8 = &var_1ac
            int16_t j
            
            do
                j = *ecx_8
                ecx_8 = &ecx_8[1]
            while (j != 0)
            void var_1aa
            ecx_7 = (ecx_8 - &var_1aa) s>> 1
        else
            ecx_7 = 0
        
        sub_52e720(&var_30, &var_1ac, ecx_7)
        int32_t var_8_3 = 1
        int32_t var_34_1 = 7
        int16_t* var_38_1 = nullptr
        int16_t var_48 = 0
        int32_t ecx_11
        
        if (*(i_1 + 0x1c) != 0)
            void* ecx_12 = i_1 + 0x1c
            void* edi_5 = ecx_12 + 2
            int16_t j_1
            
            do
                j_1 = *ecx_12
                ecx_12 += 2
            while (j_1 != 0)
            ecx_11 = (ecx_12 - edi_5) s>> 1
        else
            ecx_11 = 0
        
        int32_t ecx_15 = sub_52e720(&var_48, i_1 + 0x1c, ecx_11)
        var_8_3.b = 2
        int16_t* eax_20 = &var_30
        int32_t var_1e4_13 = var_20_1
        
        if (var_1c_1 u>= 8)
            eax_20 = var_30.d
        
        bool var_1cd_1 = sub_536340(&var_48, ecx_15, var_38_1, eax_20) == 0
        
        if (var_34_1 u>= 8)
            j__free(var_48.d)
        
        int32_t var_8_4 = 0xffffffff
        int32_t var_34_2 = 7
        int32_t var_38_2 = 0
        var_48 = 0
        
        if (var_1c_1 u>= 8)
            j__free(var_30.d)
        
        char var_1b1
        
        if (var_1cd_1 == 0)
            char eax_22 = *(i_1 + 0x17)
            
            if (eax_22 == 0 || eax_22 == 0x80)
                goto label_6b038d
        else if (var_1b1 == 0 && *(i_1 + 0x17) == 0x80)
            esi_2[1] -= 0x11c
        label_6b038d:
            sub_6b0eb0(esi_2, i_1)
            void var_1c8
            __builtin_memcpy(&var_1c8, i_1, 0x11c)
            esi_2 = var_1cc
        i_1 += 0x11c
    while (i_1 != esi_2[0xd])
    
    edi_3 = &esi_2[0xc]

*(edi_3 + 4) = *edi_3
esi_2[7] = esi_2[6]
esi_2[0xa] = esi_2[9]
void* result
result.b = *esi_2 != esi_2[1]
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
