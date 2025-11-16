// 函数: sub_6c40b0
// 地址: 0x6c40b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cc238
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_2c = ebx
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = *arg1
int32_t edi = arg1[1]

if (result != edi)
    void* i_1 = (edi - result) & 0x80000003
    
    if (i_1 s< 0)
        i_1 = ((i_1 - 1) | 0xfffffffc) + 1
    
    if (i_1 s> 0)
        void* i
        
        do
            sub_5979b0(arg1, arg1[3] + 1)
            char* ecx_1 = *arg1
            
            if (ecx_1 == arg1[1])
                ecx_1 = nullptr
            
            ecx_1[arg1[3]] = 0
            arg1[3] += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int128_t var_28 = zx.o(0)
    int32_t var_8_1 = 0
    sub_6c2ac0(&var_28)
    int32_t* edi_4 = var_28.d
    int32_t ebx_2 = var_28:4.d
    int32_t* eax_6 = edi_4
    
    if (edi_4 == ebx_2)
        eax_6 = nullptr
    
    void* ebx_3 = ebx_2 - edi_4
    
    if (ebx_3 s> 0)
        sub_5979b0(arg1, arg1[3] + ebx_3)
        int32_t ecx_4 = *arg1
        
        if (ecx_4 == arg1[1])
            ecx_4 = 0
        
        sub_748840(arg1[3] + ecx_4, eax_6, ebx_3, eax_2)
        arg1[3] += ebx_3
    
    result = *arg1
    *(result + 0x10) += 1
    
    if (edi_4 != 0)
        result = j__free(edi_4)

fsbase->NtTib.ExceptionList = ExceptionList
return result
