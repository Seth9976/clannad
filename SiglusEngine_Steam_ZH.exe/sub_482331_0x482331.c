// 函数: sub_482331
// 地址: 0x482331
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t edi
int32_t var_28 = edi
int32_t var_18 = 0
void var_14
void* edi_1 = &var_14
int128_t* const esi = &data_aac190:4
*edi_1 = *esi
void* edi_2 = edi_1 + 4
void* esi_1 = esi + 4
*edi_2 = *esi_1
char const* const var_1c = "BINARY"
*(edi_2 + 4) = *(esi_1 + 4)
char* ecx

if (arg1 != 0)
    ecx = *(arg1 + 4)
    var_18 = *(arg1 + 8)
    void* edi_5 = &var_14
    void* esi_5 = arg1 + 0xc
    *edi_5 = *esi_5
    void* edi_6 = edi_5 + 4
    void* esi_6 = esi_5 + 4
    *edi_6 = *esi_6
    var_1c = ecx
    *(edi_6 + 4) = *(esi_6 + 4)

char* eax_1 = var_1c
int32_t* result_1 = nullptr
int32_t* result

if (eax_1 == 0)
label_4823aa:
    int32_t* result_3 = sub_745f3f(0x14)
    int32_t* result_2
    
    if (result_3 == 0)
        result_2 = nullptr
    else
        result_3[1] = var_18
        void* edi_12 = &result_3[2]
        char const* const* esi_12 = &var_14
        *edi_12 = *esi_12
        void* edi_13 = edi_12 + 4
        void* esi_13 = &esi_12[1]
        *edi_13 = *esi_13
        *(edi_13 + 4) = *(esi_13 + 4)
        *result_3 = result_1
        result_2 = result_3
    
    if (result_2 == 0 && result_1 != 0)
        _free(result_1)
    
    result = result_2
else
    void* edx_1 = &eax_1[1]
    
    do
        ecx.b = *eax_1
        eax_1 = &eax_1[1]
    while (ecx.b != 0)
    
    result = _malloc(eax_1 - edx_1 + 1)
    result_1 = result
    
    if (result_1 != 0)
        int32_t esi_11
        int32_t edi_10
        edi_10, esi_11 = __builtin_memcpy(result_1, var_1c, (eax_1 - edx_1 + 1) u>> 2 << 2)
        __builtin_memcpy(edi_10, esi_11, (eax_1 - edx_1 + 1) & 3)
        goto label_4823aa

sub_745f2b(__security_cookie_1)
return result
