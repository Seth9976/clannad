// 函数: sub_601a10
// 地址: 0x601a10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bd9e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg1
void* var_1c = esi
int32_t i = 0
int32_t eax_3
int32_t edx_2
edx_2:eax_3 = muls.dp.d(0x2f149903, *(esi + 0xac) - *(esi + 0xa8))
int32_t i_1 = 0
int32_t edx_3 = edx_2 s>> 6
int32_t result = (edx_3 u>> 0x1f) + edx_3

if (result s> 0)
    result = arg2
    int32_t ecx = 0
    int32_t var_18_1 = 0
    int32_t edx_6
    
    do
        int32_t* esi_2 = *(esi + 0xa8) + ecx
        
        if (result s> 0)
            int32_t var_34_1 = ecx
            sub_6defc0(esi_2, result)
        else
            HANDLE edi_1 = *esi_2
            HANDLE var_20_1 = edi_1
            
            if (edi_1 != 0)
                WaitForSingleObject(edi_1, 0xffffffff)
            
            int32_t var_8_1 = 0
            sub_6de780(esi_2)
            esi_2[0x48] = 0
            int32_t* ebx = esi_2[0x49]
            esi_2[0x49] = 0
            
            if (ebx != 0)
                bool cond:1_1 = ebx[1] != 1
                ebx[1]
                ebx[1] -= 1
                
                if (not(cond:1_1))
                    (*(*ebx + 4))(eax_2)
                    bool cond:2_1 = ebx[2] != 1
                    ebx[2]
                    ebx[2] -= 1
                    
                    if (not(cond:2_1))
                        (*(*ebx + 8))()
            
            int32_t var_8_2 = 0xffffffff
            
            if (edi_1 != 0)
                ReleaseSemaphore(edi_1, 1, nullptr)
            
            i = i_1
        
        esi = var_1c
        var_18_1 += 0x15c
        i += 1
        i_1 = i
        int32_t eax_10
        int32_t edx_5
        edx_5:eax_10 = muls.dp.d(0x2f149903, *(esi + 0xac) - *(esi + 0xa8))
        ecx = var_18_1
        edx_6 = edx_5 s>> 6
        result = arg2
    while (i s< (edx_6 u>> 0x1f) + edx_6)

fsbase->NtTib.ExceptionList = ExceptionList
return result
