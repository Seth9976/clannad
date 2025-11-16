// 函数: sub_6011e0
// 地址: 0x6011e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bd690
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
void* var_1c = ebx
int32_t eax_3
int32_t edx_2
edx_2:eax_3 = muls.dp.d(0x2f149903, *(ebx + 0xac) - *(ebx + 0xa8))
int32_t i_1 = 0
int32_t edx_3 = edx_2 s>> 6

if ((edx_3 u>> 0x1f) + edx_3 s> 0)
    int32_t edi_1 = 0
    int32_t var_20_1 = 0
    int32_t var_18_1 = 0
    int32_t edx_6
    int32_t i
    
    do
        int32_t* esi_2 = *(ebx + 0xa8) + edi_1
        int32_t* var_38_1 = esi_2
        sub_6dfad0()
        HANDLE edi_2 = *esi_2
        HANDLE var_24_1 = edi_2
        
        if (edi_2 != 0)
            WaitForSingleObject(edi_2, 0xffffffff)
        
        int32_t var_8_1 = 1
        sub_6de780(esi_2)
        esi_2[0x48] = 0
        int32_t* ebx_1 = esi_2[0x49]
        esi_2[0x49] = 0
        
        if (ebx_1 != 0)
            bool cond:0_1 = ebx_1[1] != 1
            ebx_1[1]
            ebx_1[1] -= 1
            
            if (not(cond:0_1))
                (*(*ebx_1 + 4))(eax_2)
                bool cond:1_1 = ebx_1[2] != 1
                ebx_1[2]
                ebx_1[2] -= 1
                
                if (not(cond:1_1))
                    (*(*ebx_1 + 8))()
        
        int32_t var_8_2 = 0xffffffff
        
        if (edi_2 != 0)
            ReleaseSemaphore(edi_2, 1, nullptr)
        
        HANDLE hObject = *esi_2
        
        if (hObject != 0)
            CloseHandle(hObject)
            *esi_2 = 0
        
        ebx = var_1c
        i = i_1 + 1
        edi_1 = var_18_1 + 0x15c
        i_1 = i
        int32_t eax_11
        int32_t edx_5
        edx_5:eax_11 = muls.dp.d(0x2f149903, *(ebx + 0xac) - *(ebx + 0xa8))
        var_18_1 = edi_1
        edx_6 = edx_5 s>> 6
    while (i s< (edx_6 u>> 0x1f) + edx_6)

int32_t edi_4 = *(ebx + 0xac)
int32_t* result_1 = *(ebx + 0xa8)
int32_t* result

if (result_1 == edi_4)
    result = result_1
else
    do
        sub_5feab0(result_1)
        result_1 = &result_1[0x57]
    while (result_1 != edi_4)
    
    result = *(ebx + 0xa8)

*(ebx + 0xac) = result
fsbase->NtTib.ExceptionList = ExceptionList
return result
