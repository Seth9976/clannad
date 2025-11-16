// 函数: sub_5fd630
// 地址: 0x5fd630
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bd656
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_120 = 3
int32_t var_18 = 7
void* const var_124 = &data_af3298
int32_t var_1c = 0
int16_t var_2c = 0
sub_52e720(&var_2c, var_124, var_120)
int32_t var_8_1 = 0
int16_t* var_120_1 = &var_2c
int32_t var_90 = 1
int32_t var_10c = 0x2a
void var_1a4
__builtin_memcpy(&var_1a4, &var_10c, 0x80)
sub_5ff050(arg1, var_1a4)
int32_t var_8_2 = 0xffffffff

if (var_18 u>= 8)
    j__free(var_2c.d)

void* var_120_3 = 3
int32_t var_18_1 = 7
void* const var_124_1 = &data_aef59c
int32_t var_1c_1 = 0
var_2c = 0
sub_52e720(&var_2c, var_124_1, var_120_3)
int32_t var_8_3 = 1
int16_t* var_120_4 = &var_2c
int32_t var_90_1 = 1
var_10c = 0x52
__builtin_memcpy(&var_1a4, &var_10c, 0x80)
sub_600640(arg1 + 0xd8)
int32_t var_8_4 = 0xffffffff

if (var_18_1 u>= 8)
    j__free(var_2c.d)

void* var_120_6 = 3
int32_t var_48 = 7
void* const var_124_2 = &data_af32a0
int32_t var_4c = 0
int16_t var_5c = 0
sub_52e720(&var_5c, var_124_2, var_120_6)
int32_t var_8_5 = 2
int32_t var_90_2 = 1
var_10c = 0x2b
__builtin_memcpy(arg1 + 0x194, &var_10c, 0x80)
*(arg1 + 0x214) = 0x58c

if (arg1 + 0x218 != &var_5c)
    sub_52e3c0(arg1 + 0x218, &var_5c, 0, 0xffffffff)

*(arg1 + 0x230) = 0
*(arg1 + 0x234) = 2
void* ebx_2 = arg1 + 0x23c
sub_6001f0(ebx_2, 0x10)
int32_t eax_3
int32_t edx
edx:eax_3 = muls.dp.d(0x2f149903, *(ebx_2 + 4) - *ebx_2)
int32_t i_3 = 0
int32_t edx_1 = edx s>> 6
int32_t j_2

if ((edx_1 u>> 0x1f) + edx_1 s> 0)
    int32_t var_88_1 = 0
    int32_t var_80_1 = 0
    int32_t edi_1 = 0
    int32_t edx_4
    int32_t i
    
    do
        int32_t* j = *ebx_2 + edi_1
        int32_t j_3 = *j
        j_2 = j_3
        
        if (j_3 != 0)
            WaitForSingleObject(j_3, 0xffffffff)
        
        var_8_5.b = 4
        sub_6de780(j)
        j[0x48] = 0
        int32_t* ebx_3 = j[0x49]
        j[0x49] = 0
        
        if (ebx_3 != 0)
            bool cond:1_1 = ebx_3[1] != 1
            ebx_3[1]
            ebx_3[1] -= 1
            
            if (not(cond:1_1))
                (*(*ebx_3 + 4))(eax_2)
                bool cond:2_1 = ebx_3[2] != 1
                ebx_3[2]
                ebx_3[2] -= 1
                
                if (not(cond:2_1))
                    (*(*ebx_3 + 8))()
        
        var_8_5.b = 2
        
        if (j_3 != 0)
            ReleaseSemaphore(j_3, 1, nullptr)
        
        HANDLE hObject = *j
        
        if (hObject != 0)
            CloseHandle(hObject)
            *j = 0
        
        *j = CreateSemaphoreW(nullptr, 1, 1, nullptr)
        sub_6de2d0(j)
        uint32_t dwMilliseconds = 0xffffffff
        HANDLE hHandle = data_4ebe314
        j_2 = j
        WaitForSingleObject(hHandle, dwMilliseconds)
        int32_t* eax_12 = data_4ebe300
        int32_t ecx_14 = data_4ebe304
        
        if (eax_12 == ecx_14)
        label_5fd8f9:
            sub_6dfcc0(&j_2)
        else
            while (*eax_12 != j)
                eax_12 = &eax_12[1]
                
                if (eax_12 == ecx_14)
                    goto label_5fd8f9_1
            
            if (eax_12 == ecx_14)
            label_5fd8f9_1:
                sub_6dfcc0(&j_2)
        
        ReleaseSemaphore(data_4ebe314, 1, nullptr)
        ebx_2 = arg1 + 0x23c
        i = i_3 + 1
        edi_1 = var_80_1 + 0x15c
        i_3 = i
        var_80_1 = edi_1
        int32_t eax_13
        int32_t edx_3
        edx_3:eax_13 = muls.dp.d(0x2f149903, *(ebx_2 + 4) - *ebx_2)
        edx_4 = edx_3 s>> 6
    while (i s< (edx_4 u>> 0x1f) + edx_4)

int32_t var_8_6 = 0xffffffff
*(arg1 + 0x248) = 0

if (var_48 u>= 8)
    j__free(var_5c.d)

void* var_120_16 = 5
int32_t var_18_2 = 7
wchar16 const* const var_124_8 = u"pcmch"
int32_t var_1c_2 = 0
var_2c = 0
sub_52e720(&var_2c, var_124_8, var_120_16)
int32_t var_8_7 = 5
void* eax_17 = data_bac510
int32_t var_90_3 = 1
var_10c = 0x2c
int32_t var_128_5 = *(eax_17 + 0xa4c760)
int16_t* var_12c_2 = &var_2c
void var_1b0
__builtin_memcpy(&var_1b0, &var_10c, 0x80)
sub_5fe0f0(arg1 + 0x24c)
int32_t var_8_8 = 0xffffffff

if (var_18_2 u>= 8)
    j__free(var_2c.d)

void* var_120_18 = 2
int32_t var_30 = 7
void* const var_124_9 = &data_af32b4
int32_t var_34 = 0
int16_t var_44 = 0
sub_52e720(&var_44, var_124_9, var_120_18)
int32_t var_8_9 = 6
int32_t var_90_4 = 1
var_10c = 0x2d
__builtin_memcpy(arg1 + 0x304, &var_10c, 0x80)
*(arg1 + 0x384) = 0x596

if (arg1 + 0x388 != &var_44)
    sub_52e3c0(arg1 + 0x388, &var_44, 0, 0xffffffff)

*(arg1 + 0x3a0) = 0
*(arg1 + 0x3a4) = 3
void* ebx_7 = arg1 + 0x3ac
sub_6001f0(ebx_7, 0x10)
int32_t eax_18
int32_t edx_5
edx_5:eax_18 = muls.dp.d(0x2f149903, *(ebx_7 + 4) - *ebx_7)
int32_t i_2 = 0
int32_t edx_6 = edx_5 s>> 6

if ((edx_6 u>> 0x1f) + edx_6 s> 0)
    int32_t edi_4 = 0
    int32_t var_88_2 = 0
    int32_t var_7c = 0
    int32_t edx_9
    int32_t i_1
    
    do
        int32_t* j_1 = *ebx_7 + edi_4
        int32_t j_4 = *j_1
        j_2 = j_4
        
        if (j_4 != 0)
            WaitForSingleObject(j_4, 0xffffffff)
        
        var_8_9.b = 8
        sub_6de780(j_1)
        j_1[0x48] = 0
        int32_t* ebx_8 = j_1[0x49]
        j_1[0x49] = 0
        
        if (ebx_8 != 0)
            bool cond:4_1 = ebx_8[1] != 1
            ebx_8[1]
            ebx_8[1] -= 1
            
            if (not(cond:4_1))
                (*(*ebx_8 + 4))(eax_2)
                bool cond:5_1 = ebx_8[2] != 1
                ebx_8[2]
                ebx_8[2] -= 1
                
                if (not(cond:5_1))
                    (*(*ebx_8 + 8))()
        
        var_8_9.b = 6
        
        if (j_4 != 0)
            ReleaseSemaphore(j_4, 1, nullptr)
        
        HANDLE hObject_1 = *j_1
        
        if (hObject_1 != 0)
            CloseHandle(hObject_1)
            *j_1 = 0
        
        *j_1 = CreateSemaphoreW(nullptr, 1, 1, nullptr)
        sub_6de2d0(j_1)
        uint32_t dwMilliseconds_1 = 0xffffffff
        HANDLE hHandle_1 = data_4ebe314
        j_2 = j_1
        WaitForSingleObject(hHandle_1, dwMilliseconds_1)
        int32_t* eax_27 = data_4ebe300
        int32_t ecx_29 = data_4ebe304
        
        if (eax_27 == ecx_29)
        label_5fdb99:
            sub_6dfcc0(&j_2)
        else
            while (*eax_27 != j_1)
                eax_27 = &eax_27[1]
                
                if (eax_27 == ecx_29)
                    goto label_5fdb99_1
            
            if (eax_27 == ecx_29)
            label_5fdb99_1:
                sub_6dfcc0(&j_2)
        
        ReleaseSemaphore(data_4ebe314, 1, nullptr)
        ebx_7 = arg1 + 0x3ac
        i_1 = i_2 + 1
        edi_4 = var_7c + 0x15c
        i_2 = i_1
        var_7c = edi_4
        int32_t eax_28
        int32_t edx_8
        edx_8:eax_28 = muls.dp.d(0x2f149903, *(ebx_7 + 4) - *ebx_7)
        edx_9 = edx_8 s>> 6
    while (i_1 s< (edx_9 u>> 0x1f) + edx_9)

int32_t var_8_10 = 0xffffffff
*(arg1 + 0x3b8) = 0

if (var_30 u>= 8)
    j__free(var_44.d)

void* var_120_28 = 3
int32_t var_60 = 7
void* const var_124_15 = &data_af2864
int32_t var_64 = 0
int16_t var_74 = 0
sub_52e720(&var_74, var_124_15, var_120_28)
int32_t var_8_11 = 9
int16_t* var_120_29 = &var_74
int32_t var_90_5 = 1
var_10c = 0x14
__builtin_memcpy(&var_1a4, &var_10c, 0x80)
int32_t* result = sub_5c99a0(arg1 + 0x3bc)

if (var_60 u>= 8)
    result = j__free(var_74.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
