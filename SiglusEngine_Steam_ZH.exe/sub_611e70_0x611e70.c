// 函数: sub_611e70
// 地址: 0x611e70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bcda8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg2 + 4) = 0x101
*(arg2 + 0xb) = 0x101
*(arg2 + 0x9c) = 0
void* eax_3 = *(arg1 + 0x1bd8)
int32_t var_20 = _mm_cvtepi32_ps(zx.o(*(eax_3 + 4)))
int32_t eax_4 = var_20
int32_t xmm0_3 = _mm_cvtepi32_ps(zx.o(*(eax_3 + 8)))
*(arg2 + 0x10) = eax_4
*(arg2 + 0x14) = xmm0_3
int32_t* esi = *(arg1 + 0x1bdc)
var_20 = *(arg1 + 0x1bd8)
int32_t* var_1c_1 = esi

if (esi != 0)
    esi[1]
    esi[1] += 1

int32_t var_8_1 = 0
sub_5b17d0(arg2 + 0xd8, &var_20)
int32_t var_8_2 = 0xffffffff

if (esi != 0)
    bool cond:0_1 = esi[1] != 1
    esi[1]
    esi[1] -= 1
    
    if (not(cond:0_1))
        (*(*esi + 4))(eax_2)
        int32_t edi_1 = esi[2]
        esi[2] -= 1
        
        if (edi_1 == 1)
            (*(*esi + 8))()

int32_t* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
