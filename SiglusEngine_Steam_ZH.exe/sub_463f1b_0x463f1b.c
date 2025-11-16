// 函数: sub_463f1b
// 地址: 0x463f1b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_3c = edi
int32_t var_18
__builtin_strncpy(&var_18, "Unkn", 4)
int32_t var_14
int32_t* edi_1 = &var_14
char const* const esi = "ownVendr"
*edi_1 = *esi
void* edi_2 = &edi_1[1]
void* esi_1 = &esi[4]
uint32_t __security_cookie_1 = __security_cookie
*edi_2 = *esi_1
*(edi_2 + 4) = *(esi_1 + 4)
int32_t var_28
__builtin_strncpy(&var_28, "Auth", 4)
void var_24
void* edi_5 = &var_24
char const* const esi_4 = "enticAMD"
*edi_5 = *esi_4
void* edi_6 = edi_5 + 4
void* esi_5 = &esi_4[4]
*edi_6 = *esi_5
*(edi_6 + 4) = *(esi_5 + 4)
int32_t eax
int32_t ecx
int32_t edx_1
int32_t ebx_1
eax, ebx_1, ecx, edx_1 = __cpuid(0, 0)
int32_t result_1 = 1
int32_t eax_1
int32_t ecx_1
int32_t edx_2
int32_t ebx_2
eax_1, ebx_2, ecx_1, edx_2 = __cpuid(0, ecx)
var_18 = ebx_2
var_14 = edx_2
int32_t var_10 = ecx_1

if (eax_1 != 0)
    result_1 |= 2
    int32_t eax_2
    int32_t ecx_2
    int32_t edx_3
    int32_t ebx_3
    eax_2, ebx_3, ecx_2, edx_3 = __cpuid(1, ecx_1)
    int32_t var_30_1 = eax_2
    int32_t ecx_3 = 0x800000 & edx_3
    int32_t ecx_4 = neg.d(ecx_3)
    result_1 |= sbb.d(ecx_4, ecx_4, ecx_3 != 0) & 0x20
    void* ecx_7 = &data_2000000 & edx_3
    int32_t ecx_8 = neg.d(ecx_7)
    int32_t ecx_10 = sbb.d(ecx_8, ecx_8, ecx_7 != 0) & 0x40
    result_1 |= ecx_10
    int32_t eax_3
    int32_t ecx_11
    int32_t edx_4
    int32_t ebx_4
    eax_3, ebx_4, ecx_11, edx_4 = __cpuid(0x80000000, ecx_10)
    
    if (eax_3 u> 0x80000000)
        result_1 |= 4
        int32_t eax_4
        int32_t ecx_12
        int32_t edx_5
        int32_t ebx_5
        eax_4, ebx_5, ecx_12, edx_5 = __cpuid(0x80000001, ecx_11)
        int32_t ecx_13 = 0x80000000 & edx_5
        int32_t ecx_14 = neg.d(ecx_13)
        result_1 |= sbb.d(ecx_14, ecx_14, ecx_13 != 0) & 0x80
        int32_t* esi_8 = &var_28
        int32_t* edi_9 = &var_18
        int32_t i = 0xc
        
        while (i != 0)
            bool cond:0_1 = *esi_8 == *edi_9
            esi_8 += 1
            edi_9 += 1
            i -= 1
            
            if (not(cond:0_1))
                break
        
        int32_t ecx_17 = 0x40000000 & edx_5
        int32_t ecx_18 = neg.d(ecx_17)
        result_1 |= sbb.d(ecx_18, ecx_18, ecx_17 != 0) & 0x100
        void* ecx_21 = &__dos_header & edx_5
        int32_t ecx_22 = neg.d(ecx_21)
        result_1 |= sbb.d(ecx_22, ecx_22, ecx_21 != 0) & 0x200

int32_t result = result_1
sub_745f2b(__security_cookie_1)
return result
