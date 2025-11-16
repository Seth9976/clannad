// 函数: sub_58ed80
// 地址: 0x58ed80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b7b00
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_8c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_24
sub_6c1350(arg1 + 0x2f8, &var_24)
int32_t ecx_1 = var_24
int32_t esi = *(arg1 + 0x5b8)
double xmm0_1 = _mm_cvtepi32_pd(zx.q(esi))
int32_t var_1c
int32_t edx = int.d(_mm_cvtepi32_pd(zx.q(zx.d(arg2) - ecx_1)) * xmm0_1
    / _mm_cvtepi32_pd(zx.q(var_1c - ecx_1)))
*(arg1 + 0x5a4) = edx

if (edx s< 0)
    edx = 0
else if (edx s> esi)
    edx = esi

int32_t var_90_1 = ecx_1
*(arg1 + 0x5a4) = edx
int16_t var_5c
int16_t* eax_8 = sub_6ad9b0(&var_5c)
int32_t var_8_1 = 0
int16_t var_44
int16_t* eax_9 = sub_548cb0(eax_8, 0xaefba4, &var_44, eax_8)
var_8_1.b = 1
var_8_1.b = 2
int16_t var_2c
sub_6c2db0(arg1 + 0x148, sub_532b80(eax_9, eax_9, &var_2c, &data_aefb98))
int32_t var_18

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t var_18_1 = 7
int32_t var_1c_1 = 0
var_2c = 0
int32_t var_30

if (var_30 u>= 8)
    j__free(var_44.d)

int32_t var_8_2 = 0xffffffff
int32_t var_30_1 = 7
int32_t var_34 = 0
var_44 = 0
int32_t var_48

if (var_48 u>= 8)
    j__free(var_5c.d)

void* ecx_6 = data_bac468
int32_t* edi = *(arg1 + 0x5a4)
int32_t esi_1 = *(arg1 + 0x5ac)
int32_t* ebx_1 = *(arg1 + 0x5a8)
var_5c = 0
int32_t var_48_1 = 7
int32_t var_4c = 0
sub_6de670(*(ecx_6 + 0x178), 1)
*(ecx_6 + 0x184) = ebx_1
*(ecx_6 + 0x188) = esi_1
*(ecx_6 + 0x190) = 1
sub_676f90(0)
int32_t ecx_11 = sub_6040f0(*(ecx_6 + 0x178), ebx_1, nullptr, 0x64, edi, 0, 0)
LRESULT hWnd = *(arg1 + 0x4ac)

if (hWnd != 0)
    hWnd, ecx_11 = SendMessageW(hWnd, 0xf0, 0, 0)

if ((hWnd.b & 1) != 0)
    *(arg1 + 0x5a4)
    int32_t var_90_7 = ecx_11
    int32_t var_8_3 = 3
    int32_t var_74
    sub_6b5950(sub_6ad9b0(&var_74))
    int32_t var_60
    
    if (var_60 u>= 8)
        j__free(var_74)

hWnd.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return hWnd
