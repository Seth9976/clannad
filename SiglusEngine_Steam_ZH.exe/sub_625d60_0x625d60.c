// 函数: sub_625d60
// 地址: 0x625d60
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
        char eax_3 = arg9(esi, edi, eax_2)
        void* ecx = arg8
        int32_t* edx = *(ecx + 4)
        
        if (eax_3 == 0)
            if (edx u>= *(ecx + 8))
                if (edx != 0)
                    *edx = *edi
                    edx[1] = edi[1]
                    ecx = arg8
                
                *(ecx + 4) += 8
                *(arg8 + 8) = *(ecx + 4)
            else
                *edx = *edi
                edx[1] = edi[1]
                *(arg8 + 4) += 8
            
            edi = &edi[2]
            cond:0_1 = edi != arg4
        else if (edx u>= *(ecx + 8))
            if (edx != 0)
                *edx = *esi
                edx[1] = esi[1]
                ecx = arg8
            
            *(ecx + 4) += 8
            esi = &esi[2]
            cond:0_1 = esi != arg6
            *(arg8 + 8) = *(ecx + 4)
        else
            *edx = *esi
            int32_t eax_5 = esi[1]
            esi = &esi[2]
            edx[1] = eax_5
            *(arg8 + 4) += 8
            cond:0_1 = esi != arg6
    while (cond:0_1)

int32_t var_4c = 0
int32_t var_48_2 = 0
void* var_44_2 = arg8
int32_t var_30
void* eax_18 = sub_625a20(arg8, edi, &var_30, arg4, 0, 0)[4]
int32_t eax_19 = var_30

if (eax_19 != 0)
    j__free(eax_19)

int32_t var_4c_1 = 0
int32_t var_48_3 = 0
void* var_44_4 = eax_18
sub_625a20(eax_18, esi, arg3, arg6, 0, 0)

if (arg7 != 0)
    j__free(arg7)

fsbase->NtTib.ExceptionList = ExceptionList
return arg3
