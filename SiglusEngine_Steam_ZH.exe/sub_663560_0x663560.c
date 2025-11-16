// 函数: sub_663560
// 地址: 0x663560
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c53a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0
int32_t var_8_1 = 0
int32_t edi = arg4
int32_t esi = 0
int32_t* arg_4

if (edi s> 0)
    int32_t ecx = arg5
    int32_t* edx = arg_4
    int16_t ebx_1 = 0
    
    do
        int32_t* eax_3
        
        if (ebx_1 == 0x20)
            eax_3 = &arg_4
            
            if (ecx u>= 8)
                eax_3 = edx
        
        if (ebx_1 != 0x20 || *(eax_3 + (esi << 1)) != ebx_1)
            int32_t** eax_7 = &arg_4
            
            if (ecx u>= 8)
                eax_7 = edx
            
            ebx_1 = *(eax_7 + (esi << 1))
            esi += 1
        else
            int32_t* eax_4 = &arg_4
            int32_t* edi_1 = &arg_4
            
            if (ecx u>= 8)
                eax_4 = edx
            
            if (ecx u>= 8)
                edi_1 = edx
            
            void* eax_5 = eax_4 + (esi << 1)
            
            if (eax_5 != 0)
                eax_5 = (eax_5 - edi_1) s>> 1
            
            sub_52e300(&arg_4, eax_5, 1)
            ecx = arg5
            edi = arg4
            edx = arg_4
    while (esi s< edi)

arg3[5] = 7
arg3[4] = 0
*arg3 = 0
sub_52e3c0(arg3, &arg_4, 0, 0xffffffff)

if (arg5 u>= 8)
    j__free(arg_4)

fsbase->NtTib.ExceptionList = ExceptionList
return arg3
