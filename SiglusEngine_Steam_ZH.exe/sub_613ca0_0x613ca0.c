// 函数: sub_613ca0
// 地址: 0x613ca0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9befe8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_40 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg3
int32_t edx = arg7
int32_t* edi = arg8
int32_t ecx = arg9
int32_t var_8_1 = 0
int32_t ebx = edx * 2
void* var_30
int32_t var_28

if (ebx s<= edi)
    int32_t eax_4 = edx << 4
    int32_t var_18_1 = eax_4
    
    do
        int32_t var_44_1 = ecx
        int32_t* edx_1 = eax_4 + esi
        int32_t* eax_5 = eax_4 + edx_1
        int32_t var_4c_1 = 0
        int32_t var_48_1 = arg6
        int32_t* eax_7 = sub_614570(arg6, esi, &var_30, edx_1, edx_1, eax_5, 0, 0, 0)
        void* esi_1 = var_30
        arg6 = eax_7[4]
        
        if (esi_1 != 0)
            if (esi_1 != var_28)
                do
                    sub_5b4e70(esi_1 + 4)
                    esi_1 += 0x10
                while (esi_1 != var_28)
                
                esi_1 = var_30
            
            j__free(esi_1)
        
        esi = eax_5
        edi -= ebx
        eax_4 = var_18_1
        ecx = arg9
    while (edi s>= ebx)
    
    edx = arg7

int32_t* result
void* esi_2

if (edi s> edx)
    int32_t var_44_4 = ecx
    int32_t* edx_5 = &esi[edx * 4]
    int32_t var_4c_2 = 0
    int32_t var_48_3 = arg6
    result = sub_614570(arg6, esi, &var_30, edx_5, edx_5, arg2, 0, 0, 0)
    esi_2 = var_30
    
    if (esi_2 != 0)
        if (esi_2 == var_28)
            result = j__free(esi_2)
        else
            do
                sub_5b4e70(esi_2 + 4)
                esi_2 += 0x10
            while (esi_2 != var_28)
            
            result = j__free(var_30)
else
    int32_t var_48_2 = 0
    int32_t var_44_3 = arg6
    result = sub_613fb0(arg6, esi, &var_30, arg2, nullptr, 0, 0)
    esi_2 = var_30
    
    if (esi_2 != 0)
        if (esi_2 == var_28)
            result = j__free(esi_2)
        else
            do
                sub_5b4e70(esi_2 + 4)
                esi_2 += 0x10
            while (esi_2 != var_28)
            
            result = j__free(var_30)
int32_t var_8_2 = 0xffffffff
void* esi_3 = arg4

if (esi_3 != 0)
    if (esi_3 != arg5)
        do
            sub_5b4e70(esi_3 + 4)
            esi_3 += 0x10
        while (esi_3 != arg5)
        
        esi_3 = arg4
    
    result = j__free(esi_3)

fsbase->NtTib.ExceptionList = ExceptionList
return result
