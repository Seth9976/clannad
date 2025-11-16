// 函数: sub_6260f0
// 地址: 0x6260f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bff50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edi = 0
int32_t* result = *(data_bac510 + 0x1274c)
int32_t* result_1 = result

if (result s> 0)
    int32_t ebx_1 = 0
    
    do
        void* esi_1 = data_bac4b8
        int32_t edx_2
        
        if (edi s>= 0)
            int32_t eax_4
            int32_t edx_1
            edx_1:eax_4 = muls.dp.d(0x2aaaaaab, *(esi_1 + 0xa8) - *(esi_1 + 0xa4))
            edx_2 = edx_1 s>> 5
        
        if (edi s< 0 || (edx_2 u>> 0x1f) + edx_2 s<= edi)
            result = nullptr
        else
            result = *(esi_1 + 0xa4) + ebx_1
        
        bool cond:1_1 = result[0x2d] u< 8
        void** ecx_3 = &result[0x28]
        ecx_3[4] = 0
        
        if (not(cond:1_1))
            ecx_3 = *ecx_3
        
        *ecx_3 = nullptr
        result[0x2e] = 0
        int32_t* esi_2 = result[0x2f]
        result[0x2f] = 0
        
        if (esi_2 != 0)
            result = &esi_2[1]
            bool cond:0_1 = *result != 1
            *result
            *result -= 1
            
            if (not(cond:0_1))
                (*(*esi_2 + 4))(eax_2)
                result = &esi_2[2]
                bool cond:2_1 = *result != 1
                *result
                *result -= 1
                
                if (not(cond:2_1))
                    result = (*(*esi_2 + 8))()
        
        edi += 1
        ebx_1 += 0xc0
    while (edi s< result_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
