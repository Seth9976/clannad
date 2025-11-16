// 函数: sub_6304c0
// 地址: 0x6304c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9afe48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_bac504
int32_t var_22 = 0
*(esi + 0x10) = 0.q
*(esi + 0x18) = 0
int32_t var_1e = 0
void* eax_3 = esi + 0x20
*(esi + 0xb8) = 0xffffffff
*(esi + 0x1c) = 0
bool cond:0 = *(eax_3 + 0x14) u< 8
*(eax_3 + 0x10) = 0

if (not(cond:0))
    eax_3 = *eax_3

*eax_3 = 0
void* eax_4 = esi + 0x38
bool cond:1 = *(eax_4 + 0x14) u< 8
*(eax_4 + 0x10) = 0

if (not(cond:1))
    eax_4 = *eax_4

*eax_4 = 0
void* eax_5 = esi + 0x50
bool cond:2 = *(eax_5 + 0x14) u< 8
*(eax_5 + 0x10) = 0

if (not(cond:2))
    eax_5 = *eax_5

*eax_5 = 0
void* eax_6 = esi + 0x68
bool cond:3 = *(eax_6 + 0x14) u< 8
*(eax_6 + 0x10) = 0

if (not(cond:3))
    eax_6 = *eax_6

*eax_6 = 0
void* eax_7 = esi + 0x80
bool cond:4 = *(eax_7 + 0x14) u< 8
*(eax_7 + 0x10) = 0

if (not(cond:4))
    eax_7 = *eax_7

*eax_7 = 0
*(esi + 0x9c) = *(esi + 0x98)
*(esi + 0xa4) = 0
*(esi + 0xac) = *(esi + 0xa8)
*(esi + 0xb4) = 0

if (arg1 != 0)
    *(esi + 0xc0) = *(esi + 0xbc)
    sub_5d4e30(esi + 0xc8, *(*(esi + 0xc8) + 4))
    void* eax_12 = *(esi + 0xc8)
    *(eax_12 + 4) = eax_12
    int32_t* eax_13 = *(esi + 0xc8)
    *eax_13 = eax_13
    void* eax_14 = *(esi + 0xc8)
    *(eax_14 + 8) = eax_14
    *(esi + 0xcc) = 0

bool cond:5 = *(esi + 0x148) u< 8
void* eax_15 = esi + 0x134
*(eax_15 + 0x10) = 0

if (not(cond:5))
    eax_15 = *eax_15

*eax_15 = 0
void* eax_16 = esi + 0x14c
bool cond:6 = *(eax_16 + 0x14) u< 8
*(eax_16 + 0x10) = 0

if (not(cond:6))
    eax_16 = *eax_16

*eax_16 = 0
void* eax_17 = esi + 0x164
bool cond:7 = *(eax_17 + 0x14) u< 8
*(eax_17 + 0x10) = 0

if (not(cond:7))
    eax_17 = *eax_17

*eax_17 = 0
*(esi + 0x180) = *(esi + 0x17c)
*(esi + 0x188) = 0
*(esi + 0x190) = *(esi + 0x18c)
*(esi + 0x198) = 0
void* ecx_2 = esi + 0x19c
int32_t ebx = *(ecx_2 + 4)
void* edi_2 = *ecx_2

if (edi_2 != ebx)
    do
        sub_634480(edi_2)
        edi_2 += 0xa8
    while (edi_2 != ebx)
    
    ecx_2 = esi + 0x19c

*(ecx_2 + 4) = *ecx_2
sub_630e80(ecx_2, *(data_bac510 + 0x10b94))
*(esi + 0x4b3c4) = 0
*(esi + 0x4b3cc) = 0xffffffff
*(esi + 0x4a684) = 0
*(esi + 0x4a686) = 0
*(esi + 0x4a6bc) = 0
*(esi + 0x4a6c0) = 0
*(esi + 0x4a6ed) = 0
*(esi + 0x4a6f0) = 0
*(esi + 0x4a6f4) = 0xff
*(esi + 0x4a6f8) = 0xff
*(esi + 0x4a6fc) = 0
*(esi + 0x4a700) = 0
*(esi + 0x4a704) = 0xff
*(esi + 0x4a708) = 0xff
*(esi + 0x4a75c) = 0
sub_65fd10()
sub_62f7d0(esi + 0x4ab00)
*(esi + 0x4b00c) = 0
*(esi + 0x4b024) = *(esi + 0x4b020)
__builtin_memset(esi + 0x4b040, 0, 0x24)
sub_681670(0)
sub_621120()
sub_686530(esi + 0x4b2f4)
sub_5bcff0(esi + 0x556b8)
sub_5be920(esi + 0x5623c)
sub_631be0(esi + 0x562f4)
sub_5ba7c0(esi + 0x56464)
sub_5bf760(esi + 0x5651c, 0)
int32_t edi_3 = arg1.d
sub_5c0900(esi + 0x567e8, edi_3)
sub_631cd0(esi + 0x56920)
sub_631dc0(esi + 0x569d8)
sub_5bab10(esi + 0x56a90, edi_3)

if (*(data_bac4a0 + 0x1ee) == 0)
    sub_5cd760(esi + 0x56b64)

sub_5fcfe0(esi + 0x61ffc)
*(esi + 0x620b4) = 0xffffffff
*(esi + 0x620b8) = 0
*(esi + 0x620bc) = 0
*(esi + 0x620c0) = 0
sub_5fcd10(esi + 0x620c4)
sub_6a64d0(esi + 0x4b348)
sub_5fdee0(esi + 0x6217c)
sub_631eb0(esi + 0x62634)
sub_631fa0(esi + 0x626ec)
*(esi + 0x6285c) = *(esi + 0x62854)
int32_t var_44_5 = edi_3
sub_5ba500(esi + 0x62860, sub_5b67d0(esi + 0x627a4))
void* ecx_24
ecx_24.b = 1
sub_675f90(ecx_24.b)
void* eax_25 = data_bac454
*(eax_25 + 0x1c00) = 0
int32_t* edi_4 = *(eax_25 + 0x1c04)
*(eax_25 + 0x1c04) = 0

if (edi_4 != 0)
    bool cond:8_1 = edi_4[1] != 1
    edi_4[1]
    edi_4[1] -= 1
    
    if (not(cond:8_1))
        (*(*edi_4 + 4))(eax_2)
        bool cond:10_1 = edi_4[2] != 1
        edi_4[2]
        edi_4[2] -= 1
        
        if (not(cond:10_1))
            (*(*edi_4 + 8))()

void* eax_30 = data_bac454
*(eax_30 + 0x1c08) = 0
int32_t* edi_5 = *(eax_30 + 0x1c0c)
*(eax_30 + 0x1c0c) = 0

if (edi_5 != 0)
    bool cond:9_1 = edi_5[1] != 1
    edi_5[1]
    edi_5[1] -= 1
    
    if (not(cond:9_1))
        (*(*edi_5 + 4))(eax_2)
        bool cond:12_1 = edi_5[2] != 1
        edi_5[2]
        edi_5[2] -= 1
        
        if (not(cond:12_1))
            (*(*edi_5 + 8))()

void* eax_35 = data_bac454
*(eax_35 + 0x1c10) = 0
int32_t* edi_6 = *(eax_35 + 0x1c14)
*(eax_35 + 0x1c14) = 0

if (edi_6 != 0)
    bool cond:11_1 = edi_6[1] != 1
    edi_6[1]
    edi_6[1] -= 1
    
    if (not(cond:11_1))
        (*(*edi_6 + 4))(eax_2)
        int32_t esi_1 = edi_6[2]
        edi_6[2] -= 1
        
        if (esi_1 == 1)
            (*(*edi_6 + 8))()

var_1e = 7
*(data_bac4a0 + 0x1b4) = 0
var_22 = 0
int16_t var_30 = 0
sub_52e720(&var_30, 0xaf5d60, 0x11)
int32_t var_8_1 = 0
sub_684160(data_bac424, 5, &var_30)

if (var_1e u>= 8)
    j__free(var_30.d)

char* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
