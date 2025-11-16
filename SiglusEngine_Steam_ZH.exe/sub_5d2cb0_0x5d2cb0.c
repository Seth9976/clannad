// 函数: sub_5d2cb0
// 地址: 0x5d2cb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* ebx = data_bac484
int32_t eax_2 = *(ebx + 0x110)
void* esi = *(ebx + 0x10c)
void* var_18 = ebx
void* edi = ebx + 0x10c

if (esi != eax_2)
    do
        sub_5d5a00(esi)
        esi += 0x2e60
    while (esi != eax_2)
    
    ebx = var_18

*(edi + 4) = *edi
int32_t i = sub_5d4470(edi, *(ebx + 0x108))
int32_t i_1 = 0

if (*(ebx + 0x108) s> 0)
    void* edx_1 = nullptr
    void* var_10_1 = nullptr
    
    do
        int32_t var_30_1 = 0
        void var_13c
        void var_ac
        __builtin_memcpy(&var_13c, &var_ac, 0x80)
        sub_5dbdc0(*edi + 0x4c + edx_1, 0)
        void* eax_5 = data_bac510
        int32_t ecx_6 = *(eax_5 + 0xa47bfc)
        int32_t esi_1 = *(eax_5 + 0xa47bf8)
        int32_t ebx_3 = *(eax_5 + 0xa2ebbc)
        int32_t edx_2 = *(eax_5 + 0xa47bf4)
        int32_t edi_1 = *(eax_5 + 0xa2ebb8)
        int32_t ecx_7 = *(eax_5 + 0xa47c00)
        int32_t esi_2 = *(eax_5 + 0xa2ebc0)
        int32_t eax_7 = *edi
        *(var_10_1 + eax_7 + 0x4c) = *(eax_5 + 0xa47bf0)
        *(var_10_1 + eax_7 + 0x54) = 0
        *(var_10_1 + eax_7 + 0x58) = 0
        *(var_10_1 + eax_7 + 0x50) = edx_2
        void* edx_3 = var_10_1 + eax_7
        *(edx_3 + 0x64) = esi_1
        *(edx_3 + 0x68) = ecx_6
        *(edx_3 + 0x84) = esi_1
        *(edx_3 + 0x5c) = 0
        *(edx_3 + 0x60) = 0
        *(edx_3 + 0x6c) = ecx_7
        *(edx_3 + 0x70) = esi_2
        *(edx_3 + 0x74) = edi_1
        *(edx_3 + 0x78) = ebx_3
        *(edx_3 + 0x7c) = 0xa
        *(edx_3 + 0x80) = 0xa
        __builtin_memset(edx_3 + 0x88, 0, 0x18)
        sub_5dbef0(edx_3 + 0x4c)
        ebx = var_18
        i = i_1 + 1
        edx_1 = var_10_1 + 0x2e60
        i_1 = i
        var_10_1 = edx_1
    while (i s< *(ebx + 0x108))

*(ebx + 0x118) = 0
*(ebx + 0x11c) = 0
*(ebx + 0x120) = 0
*(ebx + 0x124) = 0
*(ebx + 0x128) = 1
sub_745f2b(eax_1 ^ &__saved_ebp)
return i
