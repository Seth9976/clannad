// 函数: sub_5f4a10
// 地址: 0x5f4a10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bd0a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t eax_3 = zx.d(*(arg1 + 0xa2))
void* edi = arg1 + 0xd74
void var_20
int32_t* eax_4 = sub_6281e0(eax_3, edi, &var_20, 0, eax_3.b)
int32_t var_8_1 = 0
int32_t ecx_1 = *eax_4
int32_t edx_1 = eax_4[1]
eax_4[1] = 0
*eax_4 = 0
*(arg1 + 0x1568) = ecx_1
int32_t* esi = *(arg1 + 0x156c)
*(arg1 + 0x156c) = edx_1

if (esi != 0)
    bool cond:0_1 = esi[1] != 1
    esi[1]
    esi[1] -= 1
    
    if (not(cond:0_1))
        (*(*esi + 4))(eax_2)
        bool cond:2_1 = esi[2] != 1
        esi[2]
        esi[2] -= 1
        
        if (not(cond:2_1))
            (*(*esi + 8))()

int32_t var_8_2 = 0xffffffff
int32_t* var_1c

if (var_1c != 0)
    bool cond:1_1 = var_1c[1] != 1
    var_1c[1]
    var_1c[1] -= 1
    
    if (not(cond:1_1))
        (*(*var_1c + 4))(eax_2)
        int32_t ebx_1 = var_1c[2]
        var_1c[2] -= 1
        
        if (ebx_1 == 1)
            (*(*var_1c + 8))()

struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg1 + 0x1568) != 0)
    sub_5f5160(arg1 + 0x1588, 0x10)
    
    for (int32_t i = 0; i s< 0x1300; i += 0x130)
        *(*(arg1 + 0x1588) + i) = 2
        int32_t eax_15 = data_4ebe2bc
        int32_t* eax_16 = data_4ebe2c0
        
        if (eax_16 != 0)
            eax_16[1]
            eax_16[1] += 1
        
        operator new(*(arg1 + 0x1588) + i, eax_15, eax_16)
        int32_t eax_18 = data_4ebe2ec
        int32_t* eax_19 = data_4ebe2f0
        
        if (eax_19 != 0)
            eax_19[1]
            eax_19[1] += 1
        
        operator new[](*(arg1 + 0x1588) + i, eax_18, eax_19)
    
    result.b = 1
else
    bool cond:3_1 = *(edi + 0x14) u< 8
    *(edi + 0x10) = 0
    
    if (not(cond:3_1))
        edi = *edi
    
    *edi = 0
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
