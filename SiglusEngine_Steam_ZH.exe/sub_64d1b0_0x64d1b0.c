// 函数: sub_64d1b0
// 地址: 0x64d1b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c3970
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_50 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result_1 = nullptr
int32_t var_3c = 0
int32_t var_38 = 0
int32_t var_8_1 = 0
int32_t edi_1

if (arg6 s> arg8)
    edi_1 = arg6 - arg8
else
    edi_1 = arg8 - arg6

sub_55c6f0(&result_1, ((edi_1 + 1) << 1) + 1)
int32_t* result_2 = result_1
int32_t* result_8 = result_2

if (result_2 == var_3c)
    result_8 = nullptr

sub_64c940(result_2, edi_1 + 1, result_8, arg5, arg6, arg7, arg8, 0)
int32_t* result_6 = nullptr
int32_t var_30 = 0
int32_t var_2c = 0
var_8_1.b = 1
int32_t ebx_2

if (arg10 s> arg12)
    ebx_2 = arg10 - arg12
else
    ebx_2 = arg12 - arg10

sub_55c6f0(&result_6, ((ebx_2 + 1) << 1) + 1)
int32_t* result_10 = result_6
int32_t* result_14 = result_10

if (result_10 == var_30)
    result_14 = nullptr

sub_64c940(result_10, ebx_2 + 1, result_14, arg9, arg10, arg11, arg12, 0)
int32_t i_2 = ebx_2 + 1

if (edi_1 + 1 s<= ebx_2 + 1)
    i_2 = edi_1 + 1

int32_t i_1 = i_2
char eax_7

if (arg14 == 0)
    eax_7 = arg13
else
    eax_7 = 0xff - arg13

uint32_t eax_8 = zx.d(eax_7)
int32_t eax_9 = 0
arg14.d = ((eax_8 << 8 | eax_8) << 8 | eax_8) << 8 | eax_8
int32_t var_64_2
int32_t var_60_2
int32_t var_5c_2
int32_t var_58_2
int32_t* result_4
int32_t edx_2
int32_t* result_9
bool cond:6

if (i_2 s<= 0)
label_64d30a:
    int32_t* result_3 = result_1
    sub_55c6f0(&result_1, ((edi_1 + 1) << 1) + 1)
    int32_t* result_11 = result_6
    result_9 = result_11
    result_4 = result_1
    edx_2 = edi_1 + 1
    int32_t var_54_3 = 1
    var_58_2 = arg8
    
    if (result_11 == var_30)
        result_9 = nullptr
    
    cond:6 = result_4 == result_3
    var_5c_2 = arg7
    var_60_2 = arg6
    var_64_2 = arg5
else
    void* ebx_6 = result_14 - result_8
    void* var_14_1 = ebx_6
    
    while (true)
        int32_t ecx_12 = *result_8
        int32_t ebx_7 = *(ebx_6 + result_8)
        
        if (ecx_12 s> ebx_7)
            goto label_64d30a
        
        if (ecx_12 s< ebx_7)
            int32_t* result_13 = result_6
            sub_55c6f0(&result_6, ((ebx_2 + 1) << 1) + 1)
            int32_t* result_5 = result_1
            result_9 = result_5
            result_4 = result_6
            edx_2 = ebx_2 + 1
            
            if (result_5 == var_3c)
                result_9 = nullptr
            
            cond:6 = result_4 == result_13
            int32_t var_54_7 = 1
            var_58_2 = arg12
            var_5c_2 = arg11
            var_60_2 = arg10
            var_64_2 = arg9
            break
        
        ebx_6 = var_14_1
        eax_9 += 1
        result_8 = &result_8[2]
        
        if (eax_9 s>= i_2)
            goto label_64d30a

int32_t* result_7 = result_4

if (cond:6)
    result_7 = nullptr

sub_64c940(result_4, edx_2, result_7, var_64_2, var_60_2, var_5c_2, var_58_2, 1)

if (i_1 s> 0)
    int32_t edi_4 = arg2
    int32_t i
    
    do
        int32_t edx_3 = *result_9
        int32_t eax_11 = *result_7
        int32_t ecx_15 = result_9[1]
        
        if (edx_3 s< edi_4 && eax_11 s>= 0 && ecx_15 s>= 0 && ecx_15 s< arg4)
            arg13.d = 0
            
            if (edx_3 s< 0)
                edx_3 = 0
            
            if (eax_11 s>= edi_4)
                eax_11 = edi_4 - 1
            
            arg13.d = arg3 + ((ecx_15 * edi_4 + edx_3) << 2)
            int32_t ecx_19
            int32_t edi_6
            edi_6, ecx_19 = __memfill_u32(arg13.d, arg14.d, eax_11 - edx_3 + 1)
            edi_4 = arg2
        
        result_9 = &result_9[2]
        result_7 = &result_7[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t* result_12 = result_6

if (result_12 != 0)
    j__free(result_12)

int32_t* result = result_1

if (result != 0)
    result = j__free(result)

fsbase->NtTib.ExceptionList = ExceptionList
return result
