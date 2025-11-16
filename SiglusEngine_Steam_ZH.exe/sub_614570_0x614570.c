// 函数: sub_614570
// 地址: 0x614570
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bf100
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_44 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg2
int32_t var_18 = 0
int32_t* edi = arg4
int32_t var_8_1 = 0
int32_t var_54
int32_t var_50
void* arg_10

if (esi == edi)
    arg4 = arg5
else
    int32_t* ebx_1 = arg5
    arg4 = ebx_1
    
    if (ebx_1 != arg6)
        while (true)
            int32_t* var_1c_1 = &var_54
            var_54 = *esi
            sub_5b5160(&var_50, &esi[1])
            var_8_1.b = 1
            int32_t eax_5 = *ebx_1
            void var_60
            sub_5b5160(&var_60, &ebx_1[1])
            var_8_1.b = 0
            int32_t* ecx_3 = &arg_10
            
            if (arg9(eax_5) == 0)
                sub_614a30(ecx_3, esi)
                esi = &esi[4]
                
                if (esi == edi)
                    break
            else
                sub_614a30(ecx_3, ebx_1)
                ebx_1 = &ebx_1[4]
                arg4 = ebx_1
                
                if (ebx_1 == arg6)
                    break

void* var_58_2 = nullptr
var_54 = 0
var_50 = 0
int32_t var_4c = 0
int32_t var_48_3 = arg8
void* var_34
int32_t eax_11 = sub_613fb0(arg8, esi, &var_34, edi, var_58_2, var_54, var_50)[4]
void* eax_12 = var_34

if (eax_12 != 0)
    int32_t i_4
    int32_t i = i_4
    
    if (eax_12 != i)
        int32_t* edi_1 = eax_12 + 4
        
        do
            void* j = *edi_1
            
            if (j != 0)
                for (int32_t ebx_2 = edi_1[1]; j != ebx_2; j += 0x10)
                    int32_t i_2 = i
                    i = sub_5b53d0(j)
                
                j__free(*edi_1)
                *edi_1 = 0
                edi_1[1] = 0
                edi_1[2] = 0
                i = i_4
            
            edi_1 = &edi_1[4]
        while (&edi_1[-1] != i)
        
        eax_12 = var_34
    
    j__free(eax_12)

int32_t* result = arg3
void* var_58_3 = nullptr
var_54 = 0
var_50 = 0
int32_t var_4c_1 = 0
int32_t var_48_6 = eax_11
sub_613fb0(eax_11, arg4, result, arg6, var_58_3, var_54, var_50)
void* eax_15 = arg_10

if (eax_15 != 0)
    int32_t i_1 = arg7
    
    if (eax_15 != i_1)
        int32_t* edi_2 = eax_15 + 4
        
        do
            void* j_1 = *edi_2
            
            if (j_1 != 0)
                for (int32_t ebx_3 = edi_2[1]; j_1 != ebx_3; j_1 += 0x10)
                    int32_t i_3 = i_1
                    i_1 = sub_5b53d0(j_1)
                
                j__free(*edi_2)
                *edi_2 = 0
                edi_2[1] = 0
                edi_2[2] = 0
                i_1 = arg7
            
            edi_2 = &edi_2[4]
        while (&edi_2[-1] != i_1)
        
        eax_15 = arg_10
        result = arg3
    
    j__free(eax_15)

fsbase->NtTib.ExceptionList = ExceptionList
return result
