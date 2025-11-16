// 函数: sub_675f90
// 地址: 0x675f90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b0438
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int16_t var_34
int32_t eax_2 = __security_cookie ^ &var_34
int32_t __saved_edi
int32_t var_44 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx
ebx:1.b = arg1
int32_t var_20 = 7
int16_t* var_24 = nullptr
var_34 = 0
int32_t var_c_1 = 0
void* edi = data_bac4e4

if (&var_34 != edi + 0x11c)
    sub_52e3c0(&var_34, edi + 0x11c, 0, 0xffffffff)
    edi = data_bac4e4

void* esi = data_bac4a0
ebx.b = *(edi + 0x134)
int32_t edi_1 = *(edi + 0x138)

if (*(esi + 0xcc) != 0)
label_67608a:
    
    if (*(data_bac484 + 0x138) == 0)
        void* eax_10 = data_bac41c
        
        if (*(eax_10 + 0x6f8) != 0 && &var_34 != eax_10 + 0x6e8)
            sub_52e3c0(&var_34, eax_10 + 0x6e8, 0, 0xffffffff)
            eax_10 = data_bac41c
            esi = data_bac4a0
        
        int32_t ecx_6 = *(eax_10 + 0x74c)
        
        if (ecx_6 s>= 0)
            ebx.b = ecx_6 != 0
        
        int32_t eax_11 = *(eax_10 + 0x750)
        
        if (eax_11 s>= 0)
            edi_1 = eax_11
else
    if (*(data_bac484 + 0x138) == 0)
        void* eax_7 = data_bac458
        
        if (*(eax_7 + 0x330) != 0 && &var_34 != eax_7 + 0x320)
            sub_52e3c0(&var_34, eax_7 + 0x320, 0, 0xffffffff)
            eax_7 = data_bac458
            esi = data_bac4a0
        
        int32_t ecx_3 = *(eax_7 + 0x384)
        
        if (ecx_3 s>= 0)
            ebx.b = ecx_3 != 0
        
        int32_t eax_8 = *(eax_7 + 0x388)
        
        if (eax_8 s>= 0)
            edi_1 = eax_8
    
    if (*(esi + 0xcc) != 0)
        goto label_67608a

int32_t eax_13

if (ebx:1.b == 0)
    void* eax_12 = esi + 0x178
    int32_t ecx_7 = *(eax_12 + 0x10)
    
    if (*(esi + 0x18c) u>= 8)
        eax_12 = *eax_12
    
    int32_t var_48_1 = ecx_7
    eax_13 = sub_536340(&var_34, ecx_7, var_24, eax_12)

if (ebx:1.b != 0 || eax_13 != 0 || ebx.b != *(esi + 0x190) || edi_1 != *(esi + 0x194))
    sub_69df20(&data_4ebe380, *(data_4ebe380 + 4))
    void* eax_15 = data_4ebe380
    esi = data_bac4a0
    *(eax_15 + 4) = eax_15
    int32_t* eax_16 = data_4ebe380
    *eax_16 = eax_16
    void* eax_17 = data_4ebe380
    *(eax_17 + 8) = eax_17
    data_4ebe384 = 0

int32_t* result = &var_34

if (esi + 0x178 != &var_34)
    result = sub_52e3c0(esi + 0x178, &var_34, 0, 0xffffffff)
    esi = data_bac4a0

*(esi + 0x190) = ebx.b
*(esi + 0x194) = edi_1

if (var_20 u>= 8)
    result = j__free(var_34.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_34)
return result
