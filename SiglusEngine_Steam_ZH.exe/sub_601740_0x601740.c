// 函数: sub_601740
// 地址: 0x601740
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bd9b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t eax_3
int32_t edx
edx:eax_3 = muls.dp.d(0x2f149903, *(arg1 + 0xac) - *(arg1 + 0xa8))
int32_t i_1 = 0
int32_t edx_1 = edx s>> 6

if ((edx_1 u>> 0x1f) + edx_1 s> 0)
    int32_t edx_7
    int32_t i
    
    do
        int32_t* ebx_2 = *(arg1 + 0xb4) * 0x15c + *(arg1 + 0xa8)
        HANDLE esi_1 = *ebx_2
        
        if (esi_1 != 0)
            WaitForSingleObject(esi_1, 0xffffffff)
        
        ebx_2.b = ebx_2[0xe].b
        
        if (esi_1 != 0)
            ReleaseSemaphore(esi_1, 1, nullptr)
        
        if (ebx_2.b == 0)
            break
        
        int32_t eax_7
        int32_t edx_2
        edx_2:eax_7 = muls.dp.d(0x2f149903, *(arg1 + 0xac) - *(arg1 + 0xa8))
        int32_t edx_3 = edx_2 s>> 6
        i = i_1 + 1
        i_1 = i
        *(arg1 + 0xb4) = mods.dp.d(sx.q(*(arg1 + 0xb4) + 1), (edx_3 u>> 0x1f) + edx_3)
        int32_t eax_11
        int32_t edx_6
        edx_6:eax_11 = muls.dp.d(0x2f149903, *(arg1 + 0xac) - *(arg1 + 0xa8))
        edx_7 = edx_6 s>> 6
    while (i s< (edx_7 u>> 0x1f) + edx_7)

int32_t var_2c_3 = 7
int32_t var_30_3 = 0
int16_t var_40 = 0
void* arg_8
sub_52e3c0(&var_40, &arg_8, 0, 0xffffffff)
sub_605000(*(arg1 + 0xb4) * 0x15c + *(arg1 + 0xa8), nullptr, nullptr, 0, var_40)

if (arg2 != 0)
    *arg2 = *(arg1 + 0xb4)

int32_t eax_15
int32_t edx_8
edx_8:eax_15 = muls.dp.d(0x2f149903, *(arg1 + 0xac) - *(arg1 + 0xa8))
int32_t edx_9 = edx_8 s>> 6
int32_t ecx_17 = (edx_9 u>> 0x1f) + edx_9
int32_t eax_18
int32_t edx_10
edx_10:eax_18 = sx.q(*(arg1 + 0xb4) + 1)
int32_t result = divs.dp.d(edx_10:eax_18, ecx_17)
*(arg1 + 0xb4) = mods.dp.d(edx_10:eax_18, ecx_17)

if (arg3 u>= 8)
    result = j__free(arg_8)

fsbase->NtTib.ExceptionList = ExceptionList
return result
