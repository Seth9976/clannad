// 函数: sub_6fcc70
// 地址: 0x6fcc70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9ce388
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_34 = arg1
int32_t* edi = arg4
int32_t ebx = 0
int32_t var_30 = 0
int32_t esi = *edi
void* result

if (((edi[1] - esi) & 0xfffffff8) s<= 0)
label_6fceb2:
    int32_t ecx_18 = edi[3]
    
    if (ecx_18 != 0)
        result = (*(*var_34 + 0x40))(arg2, arg3, ecx_18)
    
    if (ecx_18 == 0 || result.b != 0)
        int32_t ecx_20 = edi[5]
        
        if (ecx_20 != 0)
            result = (*(*var_34 + 0x40))(arg2, arg3, ecx_20)
        
        if (ecx_20 == 0 || result.b != 0)
            result.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
else
    while (true)
        void* edx_1 = *(esi + (ebx << 3))
        int32_t* esi_1 = *(esi + (ebx << 3) + 4)
        void* var_20_1 = edx_1
        int32_t* var_1c_1 = esi_1
        
        if (esi_1 != 0)
            esi_1[1] += 1
            arg1 = var_34
        
        int32_t var_c_1 = 0
        void* ebx_1 = *(edi[0xd] + 0x44)
        
        if ((*(*arg1 + 0x58))(edx_1) != 0)
            if (*(ebx_1 + 0x1c) != 0)
                int32_t* eax_19 = *(ebx_1 + 0x30)
                void* ecx_6 = (*(*eax_19 + 0xc))(eax_19)
                void* var_28_1 = ecx_6
                int32_t var_24_2 = 0
                
                if (*(ebx_1 + 0x2c) s> 0)
                    while (true)
                        int32_t i = 0
                        
                        if (*(ebx_1 + 0x34) s> 0)
                            int32_t edi_1 = 0
                            
                            do
                                int32_t eax_22 = *(*(ecx_6 + 0x14) + (i << 2))
                                
                                if (eax_22 != 0xffffffff)
                                    j_sub_4021aa(*(ebx_1 + 0x38) + edi_1, (eax_22 << 6) + arg4[7], 
                                        *(arg4[0xa] + (eax_22 << 2)))
                                    ecx_6 = var_28_1
                                
                                i += 1
                                edi_1 += 0x40
                            while (i s< *(ebx_1 + 0x34))
                            
                            edi = arg4
                        
                        result = (*(*var_34 + 0x44))(arg2, arg3, edi, var_30, *ecx_6, var_24_2)
                        
                        if (result.b == 0)
                            break
                        
                        int32_t esi_4 = var_24_2 + 1
                        ecx_6 = var_28_1 + 0x18
                        var_24_2 = esi_4
                        var_28_1 = ecx_6
                        
                        if (esi_4 s>= *(ebx_1 + 0x2c))
                            goto label_6fce12
                    
                label_6fce65:
                    int32_t var_c_3 = 0xffffffff
                    
                    if (esi_1 != 0)
                        bool cond:3_1 = esi_1[1] != 1
                        esi_1[1]
                        esi_1[1] -= 1
                        
                        if (not(cond:3_1))
                            (*(*esi_1 + 4))(eax_2)
                            int32_t ebx_4 = esi_1[2]
                            esi_1[2] -= 1
                            
                            if (ebx_4 == 1)
                                (*(*esi_1 + 8))()
                    
                    break
            else
                int32_t esi_2 = 0
                int32_t eax_9
                int32_t edx_2
                edx_2:eax_9 = muls.dp.d(0x66666667, *(edx_1 + 8) - *(edx_1 + 4))
                int32_t edx_3 = edx_2 s>> 5
                
                if ((edx_3 u>> 0x1f) + edx_3 s> 0)
                    while (true)
                        result = (*(*var_34 + 0x44))(arg2, arg3, edi, var_30, esi_2, esi_2)
                        
                        if (result.b == 0)
                            break
                        
                        esi_2 += 1
                        int32_t eax_15
                        int32_t edx_4
                        edx_4:eax_15 = muls.dp.d(0x66666667, *(edx_1 + 8) - *(edx_1 + 4))
                        int32_t edx_5 = edx_4 s>> 5
                        
                        if (esi_2 s>= (edx_5 u>> 0x1f) + edx_5)
                            goto label_6fce12
                    
                    goto label_6fce65
        
    label_6fce12:
        int32_t var_c_2 = 0xffffffff
        
        if (esi_1 != 0)
            bool cond:0_1 = esi_1[1] != 1
            esi_1[1]
            esi_1[1] -= 1
            
            if (not(cond:0_1))
                (*(*esi_1 + 4))(eax_2)
                bool cond:2_1 = esi_1[2] != 1
                esi_1[2]
                esi_1[2] -= 1
                
                if (not(cond:2_1))
                    (*(*esi_1 + 8))()
        
        esi = *edi
        ebx = var_30 + 1
        var_30 = ebx
        
        if (ebx s>= (edi[1] - esi) s>> 3)
            goto label_6fceb2
        
        arg1 = var_34

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
