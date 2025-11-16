// 函数: sub_54e720
// 地址: 0x54e720
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b15f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg3
void* var_24 = ebx
int32_t* var_18 = nullptr
int32_t var_1c = 0xffffffff
bool var_11 = false
int32_t eax_4 = *arg4
bool var_20 = false

if (eax_4 == 0x58)
    var_11 = true
else if (eax_4 == 0x59)
    var_20 = true
    var_11 = true

int32_t eax_5 = *arg5

if (eax_5 == 0)
    var_18 = *(arg5[1] + 8)
else if (eax_5 == 1)
    var_1c = *(arg5[1] + 0x16c)
    var_18 = *(arg5[1] + 8)

int32_t* eax_11 = arg5[2]
int32_t edx = arg5[3]

if (eax_11 u>= edx)
    arg4 = 0x64
else
    ebx.b = 0
    
    do
        switch (*eax_11)
            case 0
                var_18 = eax_11[2]
            case 1
                var_1c = eax_11[2]
            case 2
                var_11 = eax_11[2] != 0
            case 3
                var_20 = eax_11[2] != 0
            case 4
                ebx.b = eax_11[2] != 0
        
        eax_11 = &eax_11[0x59]
    while (eax_11 u< edx)
    
    bool cond:1_1 = ebx.b == 0
    ebx = var_24
    
    if (cond:1_1)
        arg4 = 0x64
    else
        arg4 = *(data_bac4e4 + 0x158)

int32_t** ebx_1 = *(ebx + 0xa0)
int32_t* esi_2 = *ebx_1
arg5 = esi_2

if (esi_2 != 0)
    WaitForSingleObject(esi_2, 0xffffffff)

int32_t var_8_1 = 0
sub_6de780(ebx_1)
ebx_1[0x48] = 0
int32_t* edi = ebx_1[0x49]
ebx_1[0x49] = 0

if (edi != 0)
    bool cond:0_1 = edi[1] != 1
    edi[1]
    edi[1] -= 1
    
    if (not(cond:0_1))
        (*(*edi + 4))(eax_2)
        int32_t ebx_2 = edi[2]
        edi[2] -= 1
        
        if (ebx_2 == 1)
            (*(*edi + 8))()

int32_t var_8_2 = 0xffffffff

if (esi_2 != 0)
    ReleaseSemaphore(esi_2, 1, nullptr)

int32_t* ecx_6
ecx_6.b = 0
*(var_24 + 0xac) = var_18
*(var_24 + 0xb0) = var_1c
*(var_24 + 0xb8) = 1
sub_676f90(ecx_6.b)
sub_6040f0(*(var_24 + 0xa0), var_18, nullptr, arg4, nullptr, 0, 0)

if (var_11 != 0)
    sub_600d30(var_20, 1)
    int32_t eax_19
    eax_19.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return 1

int32_t* edx_1 = data_bac49c
int32_t ecx_12 = edx_1[1]
int32_t eax_20 = edx_1[2]

if (ecx_12 u>= eax_20)
    do
        eax_20 += 0x400
    while (ecx_12 u>= eax_20)
    
    edx_1[2] = eax_20
    int32_t eax_23 = HeapReAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, *edx_1, eax_20 << 2)
    edx_1 = data_bac49c
    *edx_1 = eax_23

*(*edx_1 + (edx_1[1] << 2)) = 0
void* result = data_bac49c
*(result + 4) += 1
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
