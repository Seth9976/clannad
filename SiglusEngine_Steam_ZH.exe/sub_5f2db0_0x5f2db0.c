// 函数: sub_5f2db0
// 地址: 0x5f2db0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bcf28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg2
int32_t var_18 = 0
int32_t* esi = arg5
int32_t var_8_1 = 0

if (edi != arg4 && esi != arg6)
    bool cond:0_1
    
    do
        char eax_3 = arg9(*esi, *edi, eax_2)
        void* ecx = arg8
        int32_t* edx = *(ecx + 4)
        
        if (eax_3 == 0)
            if (edx u>= *(ecx + 8))
                if (edx != 0)
                    *edx = *edi
                    ecx = arg8
                
                *(ecx + 4) += 4
                *(arg8 + 8) = *(ecx + 4)
            else
                *edx = *edi
                *(arg8 + 4) += 4
            
            edi = &edi[1]
            cond:0_1 = edi != arg4
        else if (edx u>= *(ecx + 8))
            if (edx != 0)
                *edx = *esi
                ecx = arg8
            
            *(ecx + 4) += 4
            esi = &esi[1]
            cond:0_1 = esi != arg6
            *(arg8 + 8) = *(ecx + 4)
        else
            int32_t eax_4 = *esi
            esi = &esi[1]
            *edx = eax_4
            *(arg8 + 4) += 4
            cond:0_1 = esi != arg6
    while (cond:0_1)

int32_t var_4c = 0
int32_t var_48_2 = 0
void* var_44_2 = arg8
int32_t var_30
void* eax_14 = sub_5f2aa0(arg8, edi, &var_30, arg4, 0, 0)[4]
int32_t eax_15 = var_30

if (eax_15 != 0)
    j__free(eax_15)

int32_t var_4c_1 = 0
int32_t var_48_3 = 0
void* var_44_4 = eax_14
sub_5f2aa0(eax_14, esi, arg3, arg6, 0, 0)

if (arg7 != 0)
    j__free(arg7)

fsbase->NtTib.ExceptionList = ExceptionList
return arg3
