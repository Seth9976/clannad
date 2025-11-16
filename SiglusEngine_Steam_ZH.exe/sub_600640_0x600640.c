// 函数: sub_600640
// 地址: 0x600640
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bd990
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x80) = 0x582
void arg_4
__builtin_memcpy(arg1, &arg_4, 0x80)

if (arg1 + 0x84 != arg2)
    sub_52e3c0(arg1 + 0x84, arg2, 0, 0xffffffff)

*(arg1 + 0x9c) = 0
sub_6001f0(arg1 + 0xa0, 1)
int32_t eax_4
int32_t edx
edx:eax_4 = muls.dp.d(0x2f149903, *(arg1 + 0xa4) - *(arg1 + 0xa0))
arg2 = nullptr
int32_t edx_1 = edx s>> 6
int32_t result = (edx_1 u>> 0x1f) + edx_1

if (result s> 0)
    int32_t edi_1 = 0
    int32_t var_20_1 = 0
    int32_t var_14_1 = 0
    void* ebx_2 = arg1 + 0xa0
    void* esi_3
    
    do
        int32_t* i = *ebx_2 + edi_1
        int32_t i_2 = *i
        int32_t i_1 = i_2
        
        if (i_2 != 0)
            WaitForSingleObject(i_2, 0xffffffff)
        
        int32_t var_8_1 = 1
        sub_6de780(i)
        i[0x48] = 0
        int32_t* ebx_3 = i[0x49]
        i[0x49] = 0
        
        if (ebx_3 != 0)
            bool cond:0_1 = ebx_3[1] != 1
            ebx_3[1]
            ebx_3[1] -= 1
            
            if (not(cond:0_1))
                (*(*ebx_3 + 4))(eax_2)
                bool cond:1_1 = ebx_3[2] != 1
                ebx_3[2]
                ebx_3[2] -= 1
                
                if (not(cond:1_1))
                    (*(*ebx_3 + 8))()
        
        int32_t var_8_2 = 0xffffffff
        
        if (i_2 != 0)
            ReleaseSemaphore(i_2, 1, nullptr)
        
        HANDLE hObject = *i
        
        if (hObject != 0)
            CloseHandle(hObject)
            *i = 0
        
        *i = CreateSemaphoreW(nullptr, 1, 1, nullptr)
        sub_6de2d0(i)
        uint32_t dwMilliseconds = 0xffffffff
        HANDLE hHandle = data_4ebe314
        i_1 = i
        WaitForSingleObject(hHandle, dwMilliseconds)
        int32_t* eax_12 = data_4ebe300
        int32_t ecx_9 = data_4ebe304
        
        if (eax_12 == ecx_9)
        label_6007d5:
            sub_6dfcc0(&i_1)
        else
            while (*eax_12 != i)
                eax_12 = &eax_12[1]
                
                if (eax_12 == ecx_9)
                    goto label_6007d5_1
            
            if (eax_12 == ecx_9)
            label_6007d5_1:
                sub_6dfcc0(&i_1)
        
        ReleaseSemaphore(data_4ebe314, 1, nullptr)
        ebx_2 = arg1 + 0xa0
        esi_3 = arg2 + 1
        edi_1 = var_14_1 + 0x15c
        arg2 = esi_3
        int32_t eax_13
        int32_t edx_3
        edx_3:eax_13 = muls.dp.d(0x2f149903, *(ebx_2 + 4) - *ebx_2)
        var_14_1 = edi_1
        int32_t edx_4 = edx_3 s>> 6
        result = (edx_4 u>> 0x1f) + edx_4
    while (esi_3 s< result)

fsbase->NtTib.ExceptionList = ExceptionList
return result
